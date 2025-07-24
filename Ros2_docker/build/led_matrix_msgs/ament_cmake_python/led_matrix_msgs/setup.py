from setuptools import find_packages
from setuptools import setup

setup(
    name='led_matrix_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('led_matrix_msgs', 'led_matrix_msgs.*')),
)
