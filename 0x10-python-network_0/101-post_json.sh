#!/bin/bash
#a script for posting json data files and testing a server
curl -s -H "Content-Type: application/json" -d "$(cat "$2")" "$1"
