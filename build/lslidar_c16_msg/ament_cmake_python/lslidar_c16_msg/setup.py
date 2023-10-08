from setuptools import find_packages
from setuptools import setup

setup(
    name='lslidar_c16_msg',
    version='0.0.0',
    packages=find_packages(
        include=('lslidar_c16_msg', 'lslidar_c16_msg.*')),
)
