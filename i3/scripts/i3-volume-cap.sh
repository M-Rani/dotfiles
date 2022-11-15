#!/usr/bin/env bash

MAX=100
while :; do
    CUR_VOL="$(awk -F"[][]" '/Left:/ { print $2 }' <(amixer sget Master) | tr -d %)"
    (( $CUR_VOL > 100 )) && {
        pactl set-sink-volume @DEFAULT_SINK@ $MAX%
    }

    # Make sure to wait in between runs
    # Otherwise you will use more CPU
    # than necessary
    sleep 1
done
