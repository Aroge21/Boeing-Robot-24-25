from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='navigation',
            executable='right_hand',
            name='right_hand',
            output='screen',
        )
    ])
