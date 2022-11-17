#!/usr/bin/env bash

# If Conky is already running
# then killall conky procs
pgrep conky&&pkill conky
sleep 0.8&&conky -c ~/.config/conky/conky-status.rc &
sleep 0.8&&conky -c ~/.config/conky/conky-clock-right.rc &
sleep 0.8&&conky -c ~/.config/conky/conky-clock-left.rc &
# sleep 0.8&&conky -c ~/.config/conky/conky-logo.rc &
exit 0
