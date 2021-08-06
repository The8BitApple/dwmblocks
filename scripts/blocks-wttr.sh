#!/bin/sh

forcast=$(curl -s "wttr.in/Ipswich?format=1")

printf "%s\n" "$forcast"
