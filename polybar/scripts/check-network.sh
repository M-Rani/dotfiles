#!/usr/bin/env bash

# Ping Cloudflare's DNS Server to test internet
timeout 5 ping -c 1 1.1.1.1&>/dev/null && {
    printf "Connected\n"\
        && exit 0
} || {
    printf "Disconnected\n"\
        && exit 1
}
