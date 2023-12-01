#!/bin/bash
#a script to send custom headers to servers
curl -sH "X-School-User-Id: 98" "${1}"
