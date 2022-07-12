OCI setup for remote coding
===

# 0. OCI configs
Image : Canonical-Ubuntu-20.04-Minimal-2022.06.20  
Shape : VM.Standard.E2.1.Micro (OCPU cnt: 1, Memory: 1GB, NetworkBandwidth :0.48Gbps)  
Storage : 50GB

# 1. Basic ubuntu setup
apt update && upgrade
```
sudo apt update && upgrade
```

install git
```
sudo install git
```

install vim
```
sudo install vim
```

# 2. zsh
## 2.1. oh-my-zsh
install zsh  
reference_zsh : [github.com](https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH#install-and-set-up-zsh-as-default "https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH#install-and-set-up-zsh-as-default")  
reference_$SHELL : [askubuntu.com](https://askubuntu.com/questions/131823/how-to-make-zsh-the-default-shell "https://askubuntu.com/questions/131823/how-to-make-zsh-the-default-shell")  
```console
$ sudo apt install zsh
$ sudo vi /etc/passwd

...
<username>:x: ... :/home/<username>:/usr/bin/bash  # change to
<username>:x: ... :/home/<username>:/usr/bin/zsh  # this
...
```

install oh-my-zsh  
reference : [github.com](https://github.com/ohmyzsh/ohmyzsh#basic-installation "https://github.com/ohmyzsh/ohmyzsh#basic-installation")
```
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```

### 2.1.1. zsh-autosuggestions
reference : [github.com](https://github.com/zsh-users/zsh-autosuggestions "https://github.com/zsh-users/zsh-autosuggestions")
```console
$ git clone https://github.com/zsh-users/zsh-autosuggestions ${ZSH_CUSTOM:-~/.oh-my-zsh/custom}/plugins/zsh-autosuggestions
$ vim ~/.zshrc

plugins=(
    # other plugins...
    zsh-autosuggestions
)
```

## 2.2. typewritten
install nvm  
reference : [github.com](https://github.com/nvm-sh/nvm#installing-and-updating "https://github.com/nvm-sh/nvm#installing-and-updating")
```
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | bash
export NVM_DIR="$([ -z "${XDG_CONFIG_HOME-}" ] && printf %s "${HOME}/.nvm" || printf %s "${XDG_CONFIG_HOME}/nvm")"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh" # This loads nvm
```

install npm & node.js
```
nvm install lts
```

install typewritten  
reference : [typewritten.dev](https://typewritten.dev/#/ "https://typewritten.dev/#/")
```
npm install -g typewritten
```

customization
```console
$ vim .zshrc

ZSH_THEME=""

# EXAMPLE BELOW

# typewritten settings
export TYPEWRITTEN_RELATIVE_PATH="adaptive"
export TYPEWRITTEN_CURSOR="block"
export TYPEWRITTEN_COLOR_MAPPINGS="primary:#a067cf;secondary:#a067cf"

# Set typewritten ZSH as a prompt
autoload -U promptinit; promptinit
prompt typewritten
```

## 2.3. thefuck
reference : [github.com](https://github.com/nvbn/thefuck "https://github.com/nvbn/thefuck")
```console
$ sudo apt update
$ sudo apt install python3-dev python3-pip python3-setuptools
$ pip3 install thefuck --user
$ vim .zshrc

eval $(thefuck --alias)  " add new line
```
