# yolo_v5_ros2_launch.py

import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, OpaqueFunction

def launch_setup(context):
# def generate_launch_description():
    package_share_directory = get_package_share_directory('yolov5_ros2')
#    peripherals_package_path = get_package_share_directory('peripherals')

    # depth_camera_launch = IncludeLaunchDescription(
        # PythonLaunchDescriptionSource(
            # os.path.join(peripherals_package_path, 'launch/depth_camera.launch.py')),
    # )
    yolov5_ros2_node = Node(
        package='yolov5_ros2',
        executable='yolo_detect',
        output='screen',
        parameters=[
            {"device": "cpu",
            #"model": "garbage_classification",
            "model": "traffic_signs_640s_7_0",
            #"model": "yolov5s",
            "image_topic": "/ascamera/camera_publisher/rgb0/image",
            #"camera_info_topic": "/camera/camera_info",
            #"camera_info_file": f"{package_share_directory}/config/camera_info.yaml",
           # "show_result": True,
            "pub_result_img": True}

        ]
    )

    return [
            yolov5_ros2_node,
            # depth_camera_launch,
            ]
    
            # return LaunchDescription([yolov5_ros2_node,depth_camera_launch])

def generate_launch_description():
    return LaunchDescription([
        OpaqueFunction(function = launch_setup)
    ])

if __name__ == '__main__':

    ld = generate_launch_description()

    ls = LaunchService()
    ls.include_launch_description(ld)
    ls.run()


