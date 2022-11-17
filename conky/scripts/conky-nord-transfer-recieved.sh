#!/usr/bin/env bash
nordvpn_out=$(nordvpn status | grep Transfer | cut -d : -f2 | cut -d , -f1 | awk '{print $1} {print $2}' | xargs)
printf "$nordvpn_out\n"
