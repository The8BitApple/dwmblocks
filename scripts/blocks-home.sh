#!/bin/sh
df -h | awk 'NR==7{print $5}'
