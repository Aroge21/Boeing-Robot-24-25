import pygame
import RPi.GPIO as GPIO

# initialise the joystick module
pygame.init()
pygame.joystick.init()

# Initialise the motor pins
GPIO.setmode(GPIO.BCM)

LF_IN1 = 14
LF_IN2 = 15
RF_IN1 = 20
RF_IN2 = 16
LB_IN1 = 27
LB_IN2 = 17
RB_IN1 = 19
RB_IN2 = 13


#Left_Front Motor
GPIO.setup(18, GPIO.OUT)
GPIO.setup(14, GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(15, GPIO.OUT, initial=GPIO.LOW)

#Right_Front Motor
GPIO.setup(21, GPIO.OUT)
GPIO.setup(16, GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(20, GPIO.OUT, initial=GPIO.LOW)

#Left_Back Motor
GPIO.setup(22, GPIO.OUT)
GPIO.setup(27, GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(17, GPIO.OUT, initial=GPIO.LOW)

#Right_Back Motor
GPIO.setup(26, GPIO.OUT)
GPIO.setup(19, GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(13, GPIO.OUT, initial=GPIO.LOW)

# PWM for each motor
LF_EN = GPIO.PWM(18, 1000)
RF_EN = GPIO.PWM(21, 1000)
LB_EN = GPIO.PWM(22, 1000)
RB_EN = GPIO.PWM(26, 1000)

# Start PWM with 0% duty cycle
LF_EN.start(0)
RF_EN.start(0)
LB_EN.start(0)
RB_EN.start(0)

joysticks = []


def PWM_Signal(triggerInput):
    # Ensure the input is within the range of -1 to 1
    if triggerInput < -1:
        triggerInput = -1
    elif triggerInput > 1:
        triggerInput = 1

    # Map triggerInput to the desired output range
    return (((triggerInput + 1) / 2) * 100)

# Stop all motors
def stop():
    LF_EN.ChangeDutyCycle(0)
    RF_EN.ChangeDutyCycle(0)
    LB_EN.ChangeDutyCycle(0)
    RB_EN.ChangeDutyCycle(0)

    GPIO.output(LF_IN1, GPIO.LOW)
    GPIO.output(LF_IN2, GPIO.LOW)
    GPIO.output(RF_IN1, GPIO.LOW)
    GPIO.output(RF_IN2, GPIO.LOW)
    GPIO.output(LB_IN1, GPIO.LOW)
    GPIO.output(LB_IN2, GPIO.LOW)
    GPIO.output(RB_IN1, GPIO.LOW)
    GPIO.output(RB_IN2, GPIO.LOW)
    
def forward(speed):
    LF_EN.ChangeDutyCycle(speed)
    RF_EN.ChangeDutyCycle(speed)
    LB_EN.ChangeDutyCycle(speed)
    RB_EN.ChangeDutyCycle(speed)

    GPIO.output(LF_IN1, GPIO.LOW)
    GPIO.output(LF_IN2, GPIO.HIGH)
    GPIO.output(RF_IN1, GPIO.LOW)
    GPIO.output(RF_IN2, GPIO.HIGH)
    GPIO.output(LB_IN1, GPIO.LOW)
    GPIO.output(LB_IN2, GPIO.HIGH)
    GPIO.output(RB_IN1, GPIO.LOW)
    GPIO.output(RB_IN2, GPIO.HIGH)

def forward_right(speed):
    LF_EN.ChangeDutyCycle(speed)
    LB_EN.ChangeDutyCycle(speed)
    RF_EN.ChangeDutyCycle(speed / 4)
    RB_EN.ChangeDutyCycle(speed / 4)

    GPIO.output(LF_IN1, GPIO.LOW)
    GPIO.output(LF_IN2, GPIO.HIGH)
    GPIO.output(RF_IN1, GPIO.LOW)
    GPIO.output(RF_IN2, GPIO.HIGH)
    GPIO.output(LB_IN1, GPIO.LOW)
    GPIO.output(LB_IN2, GPIO.HIGH)
    GPIO.output(RB_IN1, GPIO.HIGH)
    GPIO.output(RB_IN2, GPIO.LOW)

def forward_left(speed):
    LF_EN.ChangeDutyCycle(speed / 4)
    LB_EN.ChangeDutyCycle(speed / 4)
    RF_EN.ChangeDutyCycle(speed)
    RB_EN.ChangeDutyCycle(speed)

    GPIO.output(LF_IN1, GPIO.LOW)
    GPIO.output(LF_IN2, GPIO.HIGH)
    GPIO.output(RF_IN1, GPIO.LOW)
    GPIO.output(RF_IN2, GPIO.HIGH)
    GPIO.output(LB_IN1, GPIO.LOW)
    GPIO.output(LB_IN2, GPIO.HIGH)
    GPIO.output(RB_IN1, GPIO.HIGH)
    GPIO.output(RB_IN2, GPIO.LOW)

def backward(speed):
    LF_EN.ChangeDutyCycle(speed)
    RF_EN.ChangeDutyCycle(speed)
    LB_EN.ChangeDutyCycle(speed)
    RB_EN.ChangeDutyCycle(speed)

    GPIO.output(LF_IN1, GPIO.HIGH)
    GPIO.output(LF_IN2, GPIO.LOW)
    GPIO.output(RF_IN1, GPIO.HIGH)
    GPIO.output(RF_IN2, GPIO.LOW)
    GPIO.output(LB_IN1, GPIO.HIGH)
    GPIO.output(LB_IN2, GPIO.LOW)
    GPIO.output(RB_IN1, GPIO.HIGH)
    GPIO.output(RB_IN2, GPIO.LOW)

def backward_right(speed):
    LF_EN.ChangeDutyCycle(speed / 4)
    LB_EN.ChangeDutyCycle(speed / 4)
    RF_EN.ChangeDutyCycle(speed)
    RB_EN.ChangeDutyCycle(speed)

    GPIO.output(LF_IN1, GPIO.HIGH)
    GPIO.output(LF_IN2, GPIO.LOW)
    GPIO.output(RF_IN1, GPIO.HIGH)
    GPIO.output(RF_IN2, GPIO.LOW)
    GPIO.output(LB_IN1, GPIO.HIGH)
    GPIO.output(LB_IN2, GPIO.LOW)
    GPIO.output(RB_IN1, GPIO.LOW)
    GPIO.output(RB_IN2, GPIO.HIGH)

def backward_left(speed):
    LF_EN.ChangeDutyCycle(speed)
    LB_EN.ChangeDutyCycle(speed)
    RF_EN.ChangeDutyCycle(speed / 4)
    RB_EN.ChangeDutyCycle(speed / 4)

    GPIO.output(LF_IN1, GPIO.HIGH)
    GPIO.output(LF_IN2, GPIO.LOW)
    GPIO.output(RF_IN1, GPIO.HIGH)
    GPIO.output(RF_IN2, GPIO.LOW)
    GPIO.output(LB_IN1, GPIO.HIGH)
    GPIO.output(LB_IN2, GPIO.LOW)
    GPIO.output(RB_IN1, GPIO.LOW)
    GPIO.output(RB_IN2, GPIO.HIGH)

def right():
    LF_EN.ChangeDutyCycle(100)
    RF_EN.ChangeDutyCycle(100)
    LB_EN.ChangeDutyCycle(100)
    RB_EN.ChangeDutyCycle(100)

    GPIO.output(LF_IN1, GPIO.LOW)
    GPIO.output(LF_IN2, GPIO.HIGH)
    GPIO.output(RF_IN1, GPIO.HIGH)
    GPIO.output(RF_IN2, GPIO.LOW)
    GPIO.output(LB_IN1, GPIO.LOW)
    GPIO.output(LB_IN2, GPIO.HIGH)
    GPIO.output(RB_IN1, GPIO.HIGH)
    GPIO.output(RB_IN2, GPIO.LOW)

def left():
    LF_EN.ChangeDutyCycle(100)
    RF_EN.ChangeDutyCycle(100)
    LB_EN.ChangeDutyCycle(100)
    RB_EN.ChangeDutyCycle(100)

    GPIO.output(LF_IN1, GPIO.HIGH)
    GPIO.output(LF_IN2, GPIO.LOW)
    GPIO.output(RF_IN1, GPIO.LOW)
    GPIO.output(RF_IN2, GPIO.HIGH)
    GPIO.output(LB_IN1, GPIO.HIGH)
    GPIO.output(LB_IN2, GPIO.LOW)
    GPIO.output(RB_IN1, GPIO.LOW)
    GPIO.output(RB_IN2, GPIO.HIGH)

while True:

    for joystick in joysticks:

        xboxDpad = joystick.get_hat(0)
        xboxLT = joystick.get_axis(5)
        xboxRT = joystick.get_axis(4)

        if xboxLT > -1 and xboxRT > -1:
            print("LT & RT Pressed")
            print("stop")
            joystick.rumble(0.9, 0.9, 0)
            stop()

        elif xboxLT > -1:
            joystick.stop_rumble()

            if xboxDpad[0] != 0 or xboxDpad[1] != 0:
                if xboxDpad[0] == -1:
                    print("go backwards and left")
                    backward_left(PWM_Signal(xboxLT))
                    
                elif xboxDpad[0] == 1:
                    print("go backwards and right")
                    backward_right(PWM_Signal(xboxLT))
                    
                else:
                    print("Go Backward")
                    backward(PWM_Signal(xboxLT))
            else:
                print("Go Backward")
                backward(PWM_Signal(xboxLT))

        elif xboxRT > -1:
            joystick.stop_rumble()

            if xboxDpad[0] != 0 or xboxDpad[1] != 0:
                if xboxDpad[0] == -1:
                    print("go forwards and left")
                    forward_left(PWM_Signal(xboxRT))
                elif xboxDpad[0] == 1:
                    print("go forwards and right")
                    forward_right(PWM_Signal(xboxRT))
                else:
                    print("go forwards")
                    forward(PWM_Signal(xboxRT))
            else:
                print("go forwards")
                forward(PWM_Signal(xboxRT))

        else:
            joystick.stop_rumble()
            if xboxDpad[0] == 1:
                print("go right")
                right()
                
            elif xboxDpad[0] == -1:
                print("go left")
                left()
            else:
                print("stop")
                stop()

    # event handler
    for event in pygame.event.get():
        if event.type == pygame.JOYDEVICEADDED:
            joy = pygame.joystick.Joystick(event.device_index)
            joysticks.append(joy)

        # quit program
        if event.type == pygame.QUIT:
            run = False

pygame.quit()
GPIO.cleanup()