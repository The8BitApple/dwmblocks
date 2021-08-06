#!/bin/sh

updates_arch="$(checkupdates 2> /dev/null | wc -l)"
updates_aur="$(yay -Qum 2> /dev/null | wc -l)"
all_updates=$(("$updates_arch" + "$updates_aur"))
printf "%s\n" "$all_updates"
