from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='peripherals',
            executable='ir_sensor',
            name='ir_sensor_node',
            output='screen'
        )
    ])