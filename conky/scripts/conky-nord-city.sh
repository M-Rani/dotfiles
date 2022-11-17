#!/usr/bin/env sh
nordvpn_out=$(nordvpn status | grep City:) || {
    nordvpn_out="Disconnected"
}
printf "${nordvpn_out/City: /}\n"
