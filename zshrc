export ZSH="$HOME/.config/oh-my-zsh"
export EDITOR="emacsclient -t --socket-name=/run/user/1000/emacs/server"

ZSH_THEME="kinda-fishy"
ENABLE_CORRECTION="true"
COMPLETION_WAITING_DOTS="..."

HISTFILE=~/.cache/zsh_history
HISTSIZE=1000
SAVEHIST=1000

plugins=(git archlinux zsh-autosuggestions zsh-syntax-highlighting)
source $ZSH/oh-my-zsh.sh

# Change terminal to use emacs keybinds
set -o emacs

scroll-and-clear-screen() {
  printf '\n%.0s' {1..$LINES}
  zle clear-screen
}
zle -N scroll-and-clear-screen
bindkey '^l' scroll-and-clear-screen

mk() {
  if [ $# -lt 1 ]; then
    printf "USAGE: mk <file>\n"
    return 1
  fi
  if LINK=$(curl -F"file=@$1" 0x0.st -fs); then
    printf $LINK | xclip -sel c && {
      printf "%b\n" "\e[1m$LINK\e[0m copied to primary clipboard"
      printf "%b %b: $LINK\n" $(date +"%F %H.%M.%S") >> ~/.cache/0x0.st_files
    }
    return 0
  else
    printf "%b\n" "Failed to upload $1 to 0x0.st"
    return 1
  fi
}

# Faster Emacs
export ALTERNATE_EDITOR="" # Setup for emacsclient
alias e="emacsclient -t --socket-name=/run/user/1000/emacs/server"

# Rust Replacements
alias ls='exa -s type'
alias l='ls -la'
alias grep=rg

# More aliases
alias du='du -h'
alias df='df -h'
alias hexdump='hexdump -C'
alias icat='kitty +kitten icat'
alias d='kitty +kitten diff'
alias vim="nvim"
alias vi="nvim"
alias refresh="tput reset && source ~/.zshrc"
alias clear='tput reset'
alias bt='bluetoothctl'
alias ytfzf='ytfzf --thumb-viewer=kitty'
alias ssn='sudo shutdown now'
alias ssr='sudo reboot'
alias ranger='. ranger'
alias feh='feh -.'
