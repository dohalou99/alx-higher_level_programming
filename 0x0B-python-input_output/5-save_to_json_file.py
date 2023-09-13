#!/usr/bin/python3
"""
5-save_to_json module
"""

from json import dumps


def save_to_json_file(my_obj, filename):
    with open(filename, 'w') as f:
        a = dumps(my_obj)
        f.write(a)
