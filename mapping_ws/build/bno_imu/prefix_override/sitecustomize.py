import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/maro/3D_Mapping_Sphere_ROS2/mapping_ws/install/bno_imu'
