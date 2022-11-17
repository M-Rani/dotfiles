#!/usr/bin/env sh
nordvpn_out=$(nordvpn status | grep Uptime | cut -d : -f2 | xargs)
nordvpn_out=${nordvpn_out/ hours/h}
nordvpn_out=${nordvpn_out/ hour/h}
nordvpn_out=${nordvpn_out/ minutes/m}
nordvpn_out=${nordvpn_out/ minute/m}
nordvpn_out=${nordvpn_out/ seconds/s}
nordvpn_out=${nordvpn_out/ second/s}
nordvpn_out=${nordvpn_out/ day/d}
nordvpn_out=${nordvpn_out/ days/d}
nordvpn_out=${nordvpn_out/ month/m}
nordvpn_out=${nordvpn_out/ months/m}
nordvpn_out=${nordvpn_out/ year/y}
nordvpn_out=${nordvpn_out/ years/y}
printf "$nordvpn_out\n"
