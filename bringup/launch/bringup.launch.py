import os
from ament_index_python.packages import get_package_share_directory

from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch import LaunchDescription, LaunchService
from launch.actions import IncludeLaunchDescription, OpaqueFunction
from launch.launch_description_sources import PythonLaunchDescriptionSource

def launch_setup(context):
    compiled = os.environ['need_compile']
    if compiled == 'True':
        controller_package_path = get_package_share_directory('controller')
        app_package_path = get_package_share_directory('app')
        peripherals_package_path = get_package_share_directory('peripherals')
    else:
        controller_package_path = '/home/ubuntu/ros2_ws/src/driver/controller'
        app_package_path = '/home/ubuntu/ros2_ws/src/app'
        peripherals_package_path = '/home/ubuntu/ros2_ws/src/peripherals'

    controller_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(controller_package_path, 'launch/controller.launch.py')),
    )

    depth_camera_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(peripherals_package_path, 'launch/depth_camera.launch.py')),
    )

    lidar_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(peripherals_package_path, 'launch/lidar.launch.py')),
    )

    rosbridge_websocket_launch = ExecuteProcess(
            cmd=['ros2', 'launch', 'rosbridge_server', 'rosbridge_websocket_launch.xml'],
            output='screen'
        )

    web_video_server_node = Node(
        package='web_video_server',
        executable='web_video_server',
        output='screen',
    )

    start_app_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(app_package_path, 'launch/start_app.launch.py')),
    )

    init_pose_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(controller_package_path, 'launch/init_pose.launch.py')),
        launch_arguments={
            'namespace': '',  
            'use_namespace': 'false',
            'action_name': 'init',
        }.items(),
    )

    ir_sensor_node = Node(
        package='peripherals',
        executable='ir_sensor',
        name='ir_sensor_node',
        output='screen',
    )

    xbox_teleop_node = Node(
        package='peripherals',
        executable='xbox_teleop',
        name='xbox_teleop',
        output='screen',
    )

    startup_check_node = Node(
        package='bringup',
        executable='startup_check',
        output='screen',
    )

    return [
            startup_check_node,
            controller_launch,
            depth_camera_launch,
            lidar_launch,
            rosbridge_websocket_launch,
            web_video_server_node,
            start_app_launch,
            init_pose_launch,
            xbox_teleop_node,
            ir_sensor_node,
            ]

def generate_launch_description():
    return LaunchDescription([
        OpaqueFunction(function = launch_setup)
    ])

if __name__ == '__main__':
    # 创建一个LaunchDescription对象(create a LaunchDescription object)
    ld = generate_launch_description()

    ls = LaunchService()
    ls.include_launch_description(ld)
    ls.run()
