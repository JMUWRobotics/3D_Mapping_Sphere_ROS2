import os
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # BNO08X IMU Publisher Node
        Node(
            package='bno_imu',
            executable='bno_imu_node',
            name='bno08x_imu_publisher',
            output='screen',
            parameters=[{
                "use_sim_time": False
            }]
        ),

        # Madgwick IMU Filter Node
        #Node(
        #    package='imu_filter_madgwick',
        #    executable='imu_filter_madgwick_node',
        #    name='imu_filter',
        #    output='screen',
        #    parameters=[{
        #        "use_mag": False,
        #        "world_frame": "enu",
        #        "fixed_frame": "livox_mid360_frame",
        #        "publish_debug_topics": True
        #    }],
        #    remappings=[
        #        ("/imu/data_raw", "/imu/data_raw"),  # Ensure topics match
        #        ("/imu/mag", "/imu/mag"),
        #        ("/imu/data", "/imu/data_filtered")  # Filtered IMU data output
        #    ]
        #)
    ])
