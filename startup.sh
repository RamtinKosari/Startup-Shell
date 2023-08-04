#!/bin/bash

# Definitions
YELLOW='\033[1m\033[38;2;255;255;0m'
YELLOw='\033[0m\033[38;2;255;255;0m'
GRAY='\033[1m\033[38;2;230;230;230m'
GRAy='\033[0m\033[38;2;230;230;230m'
CYAN='\033[1m\033[38;2;0;230;230m'
GREEN='\033[1m\033[38;2;0;255;0m'
RED='\033[1m\033[38;2;255;0;0m'
RESET='\033[0m '
TAB='   '

# Log Aternatives
WARNING="${YELLOW}[WARNING]${RESET}"
TERMINAL="${CYAN}[TERMINAL]${RESET}"
SUCCESS="${GREEN}[SUCCESS]${RESET}"
FAILED="${RED}[FAILED]${RESET}"
DEV="${YELLOW}[DEV]${RESET}"
LOG="${GRAY}[LOG]${RESET}"

open_terminals() {
    # - Open Browser Terminal
    echo hi
    gnome-terminal
    gnome-terminal
    gnome-terminal
    gnome-terminal
    gnome-terminal
    gnome-terminal
    gnome-terminal -- "brave-browser"
    # - Open Project #1 Terminal
    # - Open Project #2 Terminal
    # - Open Project #3 Terminal
}


if [ "$#" -eq 0 ]; then
    echo -e ""
fi

# Open Terminals as 
open_terminals