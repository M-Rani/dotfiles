#!/usr/bin/env bash

pkill xidlehook

export PRIMARY_DISPLAY="$(xrandr | awk '/ connected/{print $1}' | xargs | cut -d ' ' -f2)"
export SECONDARY_DISPLAY="$(xrandr | awk '/ connected/{print $1}' | xargs | cut -d ' ' -f1)"

xset dpms 0 0 3600 &

xidlehook \
    --not-when-fullscreen \
    --not-when-audio \
    --timer 60 \
        'xrandr --output "$PRIMARY_DISPLAY" --brightness .1 --output "$SECONDARY_DISPLAY" --brightness .1' \
        'xrandr --output "$PRIMARY_DISPLAY" --brightness 1 --output "$SECONDARY_DISPLAY" --brightness 1' \
    --timer 500 \
        'xrandr --output "$PRIMARY_DISPLAY" --brightness 1 --output "$SECONDARY_DISPLAY" --brightness 1; betterlockscreen -l dim --display 1 --off 120' \
        ''
