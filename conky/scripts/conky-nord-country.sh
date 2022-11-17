#!/usr/bin/env sh
nordvpn_out=$(nordvpn status | grep Country) || \
    nordvpn_out="Disconnected"
printf "${nordvpn_out/Country: /}\n"
