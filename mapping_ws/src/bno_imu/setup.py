from setuptools import find_packages, setup

package_name = 'bno_imu'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
	('share/bno_imu/launch', ['launch/bno08x_imu_launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='maro',
    maintainer_email='maro@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [       
        'bno_imu_node = bno_imu.bno_imu_node:main',   
        ],
    },
)
