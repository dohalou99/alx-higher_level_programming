#!/bin/bash
# script that was a fun effort in breaking to http protocols on servers
curl -s 0.0.0.0:5000/catch_me -X PUT -L -d "user_id=98" -H "Origin: HolbertonSchool"
