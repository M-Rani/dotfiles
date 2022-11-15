#!/usr/bin/env bash

# Terminate already running bar instances
polybar-msg cmd quit

# Launch main bar
# polybar main 2>&1 | tee -a /tmp/polymain.log & disown
# printf "Main bar launched...\n"

# Launch sysinfo and workspaces bars
# then hide both bars
polybar sysinfo 2>&1 | tee -a /tmp/polymain.log & disown
polybar workspaces 2>&1 | tee -a /tmp/polymain.log & disown
xdo id -m -N Polybar && polybar-msg cmd hide &
