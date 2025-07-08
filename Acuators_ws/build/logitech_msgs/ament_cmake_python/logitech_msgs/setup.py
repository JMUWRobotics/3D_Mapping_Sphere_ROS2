from setuptools import find_packages
from setuptools import setup

setup(
    name='logitech_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('logitech_msgs', 'logitech_msgs.*')),
)
