#!/bin/sh
df -h | awk 'NR==4{print $5}'