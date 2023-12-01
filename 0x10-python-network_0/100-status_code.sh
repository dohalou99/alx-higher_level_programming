#!/bin/bash
# a script to display status code of server
curl -sI -w '%{response_code}' "$1" -o /dev/null
