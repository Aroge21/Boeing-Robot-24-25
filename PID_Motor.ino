#include <PID_v1.h>

// Pin definitions
// Front Left Motor
#define ENCODER_FL 3
#define IN1_FL 28
#define IN2_FL 30
#define EN_FL 7

// Front Right Motor
#define ENCODER_FR 2
#define IN1_FR 24
#define IN2_FR 22
#define EN_FR 6

// Back Left Motor
#define ENCODER_BL 18
#define IN1_BL 29
#define IN2_BL 31
#define EN_BL 5

// Back Right Motor
#define ENCODER_BR 19
#define IN1_BR 27
#define IN2_BR 25
#define EN_BR 4

// Variables for encoder counts
volatile long count_FL = 0, count_FR = 0, count_BL = 0, count_BR = 0;

// Varibles for total pulses
unsigned long total_FL = 0, total_FR = 0, total_BL = 0, total_BR = 0;

// PID variables
double Setpoint_FL, Input_FL, Output_FL;
double Setpoint_FR, Input_FR, Output_FR;
double Setpoint_BL, Input_BL, Output_BL;
double Setpoint_BR, Input_BR, Output_BR;

// PID tunings (adjust as needed)
double Kp = 0.75, Ki = 0.4, Kd = 0.1;

// PID controllers
PID pid_FL(&Input_FL, &Output_FL, &Setpoint_FL, Kp, Ki, Kd, DIRECT);
PID pid_FR(&Input_FR, &Output_FR, &Setpoint_FR, Kp, Ki, Kd, DIRECT);
PID pid_BL(&Input_BL, &Output_BL, &Setpoint_BL, Kp, Ki, Kd, DIRECT);
PID pid_BR(&Input_BR, &Output_BR, &Setpoint_BR, Kp, Ki, Kd, DIRECT);

// Encoder specifications
const double wheel_circumference_cm = 31.4; // in centimeters (adjust to your wheel's size)
const int ticks_per_revolution = 2850;      // encoder ticks per revolution

// Distance targets (in cm)
double target_distance_cm = 100.0; // Example: 100 cm (1 meter)
long target_ticks = (target_distance_cm / wheel_circumference_cm) * ticks_per_revolution;

// Encoder interrupt service routines
void ISR_FL() { count_FL++; }
void ISR_FR() { count_FR++; }
void ISR_BL() { count_BL++; }
void ISR_BR() { count_BR++; }

void setup() {
  // Initialize Serial communication for debugging
  Serial.begin(9600);
  Serial.println("Starting motor control with PID...");

  // Pin setup
  pinMode(IN1_FL, OUTPUT);
  pinMode(IN2_FL, OUTPUT);
  pinMode(EN_FL, OUTPUT);

  pinMode(IN1_FR, OUTPUT);
  pinMode(IN2_FR, OUTPUT);
  pinMode(EN_FR, OUTPUT);

  pinMode(IN1_BL, OUTPUT);
  pinMode(IN2_BL, OUTPUT);
  pinMode(EN_BL, OUTPUT);

  pinMode(IN1_BR, OUTPUT);
  pinMode(IN2_BR, OUTPUT);
  pinMode(EN_BR, OUTPUT);

  // Attach encoder interrupts
  attachInterrupt(digitalPinToInterrupt(ENCODER_FL), ISR_FL, RISING);
  attachInterrupt(digitalPinToInterrupt(ENCODER_FR), ISR_FR, RISING);
  attachInterrupt(digitalPinToInterrupt(ENCODER_BL), ISR_BL, RISING);
  attachInterrupt(digitalPinToInterrupt(ENCODER_BR), ISR_BR, RISING);

  // Initialize PID controllers
  pid_FL.SetMode(AUTOMATIC);
  pid_FR.SetMode(AUTOMATIC);
  pid_BL.SetMode(AUTOMATIC);
  pid_BR.SetMode(AUTOMATIC);
  
  pid_FL.SetOutputLimits(-255, 255);
  pid_FR.SetOutputLimits(-255, 255);
  pid_BL.SetOutputLimits(-255, 255);
  pid_BR.SetOutputLimits(-255, 255);

  // Set initial setpoints
  Setpoint_FL = Setpoint_FR = Setpoint_BL = Setpoint_BR = 100.0; // Adjust desired speed
}

void loop() {
  // Calculate speed (example: counts per time interval)
  static unsigned long lastTime = 0;
  unsigned long currentTime = millis();
  if (currentTime - lastTime >= 100) { // Update every 100ms
    Input_FL = count_FL;
    Input_FR = count_FR;
    Input_BL = count_BL;
    Input_BR = count_BR;

    total_FL += count_FL;
    total_FR += count_FR;
    total_BL += count_BL;
    total_BR += count_BR;

    count_FL = count_FR = count_BL = count_BR = 0;

    lastTime = currentTime;

    // Compute PID
    pid_FL.Compute();
    pid_FR.Compute();
    pid_BL.Compute();
    pid_BR.Compute();

    // Adjust motor speeds
    driveMotor(EN_FL, IN1_FL, IN2_FL, Output_FL);
    driveMotor(EN_FR, IN1_FR, IN2_FR, Output_FR);
    driveMotor(EN_BL, IN1_BL, IN2_BL, Output_BL);
    driveMotor(EN_BR, IN1_BR, IN2_BR, Output_BR);

    // Debugging output in desired format
    Serial.print("FR\tFL\tBR\tBL\n");
    Serial.print((int)total_FR);
    Serial.print("\t");
    Serial.print((int)total_FR);
    Serial.print("\t");
    Serial.print((int)total_BR);
    Serial.print("\t");
    Serial.println((int)total_BL);
  }

  int distance = 4150;
  if(total_FR > distance || total_FR > distance || total_BR > distance || total_BL > distance) {
    stopMotors(EN_FL, IN1_FL, IN2_FL);
    stopMotors(EN_FR, IN1_FR, IN2_FR);
    stopMotors(EN_BL, IN1_BL, IN2_BL);
    stopMotors(EN_BR, IN1_BR, IN2_BR);
  }
}

// Motor driving function
void driveMotor(int pwmPin, int in1, int in2, double speed) {
  if (speed > 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  } else if (speed < 0) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    speed = -speed;
  } else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }
  analogWrite(pwmPin, constrain(speed, 0, 255));
}

// Stop all motors
void stopMotors(int EN, int IN1, int IN2) {
  analogWrite(EN, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}