#!/usr/bin/python3
"""
6-load_from_json_file module
"""

from json import loads


def load_from_json_file(filename):
    with open(filename, 'r') as f:
        return loads(f.read())
