#!/usr/bin/env bash

# Take a screenshot of the primary display then notify user
screencap-primary() {
    # SCREEN_RES_POS=$(xrandr | grep ' primary' | awk '{print $4}')
    scrot -a 0,840,1920,1080 -o $HOME/Pictures/screencaps/$(date +"%Y-%m-%d_%H:%M:%S_LeftMonitor").png && {
        dunstify -a "i3-screencap" -r 25 "Screenshot taken! [$(date +'%H:%M:%S')]" "<i>Screenshot saved...</i>\n<b>$HOME/Pictures/screencaps</b>"
    } || {
        dunstify -a "i3-screencap" -r 25 "Screenshot failed!"
    }
}

screencap-secondary() {
    scrot -a 1920,0,1080,1920 -o $HOME/Pictures/screencaps/$(date +"%Y-%m-%d_%H:%M:%S_RightMonitor").png && {
        dunstify -a "i3-screencap" -r 25 "Screenshot taken! [$(date +'%H:%M:%S')]" "<i>Screenshot saved...</i>\n<b>$HOME/Pictures/screencaps</b>"
    } || {
        dunstify -a "i3-screencap" -r 25 "Screenshot failed!"
    }
}

# Take a screenshot of the workspace the mouse is hovering over
screencap-desktop-mouse() {
    # Set up specifically for a horizontal layout of 2 monitors
    MOUSE_LOC_X=`xdotool getmouselocation | awk '{print $1}' | cut -d : -f2`
    if [[  $MOUSE_LOC_X -gt 1920 ]]; then
        screencap-secondary
    else
        screencap-primary
    fi
}

# Select a region to screenshot, notify user at start/end/cancled
screencap-region() {
    dunstify -a "i3-screencap" -r 25 "Region select..." "<b>Click and drag</b> to highlight region\n<b>Left-click window<\b> to screenshot window"
    escrotum -s $HOME/Pictures/screencaps/'_%Y-%m-%d-%H%M%S_$wx$h.png' && {
        dunstify -a "i3-screencap" -r 25 "Screencap taken! [$(date +'%H:%M:%S')]" "<i>Selection saved...</i>\n<b>$HOME/Pictures/screencaps</b>"
    } || {
        dunstify -a "i3-screencap" -r 25 "Screencap failed!"
    }
}

# Select a region to record, notify user at start/end/canceled
screencap-region-record() {
    dunstify -a "i3-screencap" -r 25 "Region select..." "Select a region to start record\nPress <b>Alt+Ctrl+s</b> to stop the recording"
    escrotum -sr $HOME/Videos/recordings/'%Y-%m-%d-%H%M%S_$wx$h.webm' && {
        dunstify -a "i3-screencap" -r 25 "Recording ended! [$(date +'%H:%M:%S')]" "<i>Recording saved...</i>\n<b>$HOME/Videos/recordings</b>"
    } || {
        dunstify -a "i3-screencap" -r 25 "Recording failed!"
    }
}

case $1 in
    "primary") screencap-desktop-mouse;;
    "region-select") screencap-region;;
    "region-record") screencap-region-record;;
esac
