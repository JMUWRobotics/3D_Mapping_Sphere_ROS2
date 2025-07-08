from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='joy',
            executable='joy_node',
            name='joy_node',
            output='screen'
        ),
        Node(
            package='logitech_controller',
            executable='controller_node',
            name='controller_node',
            output='screen'
        ),
        Node(
            package='servo_pwm_node',
            executable='servo_pwm_node',
            name='servo_pwm_node',
            output='screen'
        ),
        Node(
            package='waveshare_servo',
            executable='waveshare_servo_node',
            name='waveshare_servo_node',
            output='screen'
        )
    ])