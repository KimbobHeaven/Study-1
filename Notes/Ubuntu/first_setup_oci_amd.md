OCI setup for remote coding
===

# 0. OCI configs
Image : Canonical-Ubuntu-20.04-Minimal-2022.06.20  
Shape : VM.Standard.E2.1.Micro (OCPU cnt: 1, Memory: 1GB, NetworkBandwidth :0.48Gbps)  
Storage : 50GB

# 1. Basic ubuntu setup
apt update && upgrade
```console
sudo apt update && upgrade
```

install git
```console
sudo install git
```

install vim
```console
sudo install vim
```

# 2. zsh
install zsh  
reference_zsh : [github.com](https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH#install-and-set-up-zsh-as-default "https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH#install-and-set-up-zsh-as-default")  
reference_$SHELL : [askubuntu.com](https://askubuntu.com/questions/131823/how-to-make-zsh-the-default-shell "https://askubuntu.com/questions/131823/how-to-make-zsh-the-default-shell")  
```console
sudo apt install zsh
sudo vi /etc/passwd

...
<username>:x: ... :/home/<username>:/usr/bin/bash  # change to
<username>:x: ... :/home/<username>:/usr/bin/zsh  # this
...
```

install nvm  
reference : [github.com](https://github.com/nvm-sh/nvm#installing-and-updating "https://github.com/nvm-sh/nvm#installing-and-updating")
```console
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | bash
export NVM_DIR="$([ -z "${XDG_CONFIG_HOME-}" ] && printf %s "${HOME}/.nvm" || printf %s "${XDG_CONFIG_HOME}/nvm")"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh" # This loads nvm
```