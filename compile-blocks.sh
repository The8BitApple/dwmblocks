#!/bin/bash

cp blocks.def.h blocks.h
sudo make clean install

# check if blocks is running. If so kill the process and rerun it as daemon.
pkill dwmblocks 
dwmblocks &
