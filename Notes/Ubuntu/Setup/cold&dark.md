Fresh Install Setup
===

# 1. Pre notes
## 1.1. Reference version
Ubuntu 20.04.4 LTS (Focal Fossa)

## 1.2. User name, Device name
User : DevKimbob
device : UbuntuKimbob

# 2. Basic setup
## 2.1. Dual monitor fix
reference : [askubuntu.com](https://askubuntu.com/questions/1230924/ubuntu-20-04-does-not-recognize-second-monitor, "https://askubuntu.com/questions/1230924/ubuntu-20-04-does-not-recognize-second-monitor")
```console
devkimbob@UbuntuKimbob:~$ sudo apt update
devkimbob@UbuntuKimbob:~$ sudo apt upgrade
devkimbob@UbuntuKimbob:~$ sudo ubuntu-drivers autoinstall
```

## 2.2. Install discord
### 2.2.1. Installation via .deb file
reference : [linuxhint.com](https://linuxhint.com/install-discord-ubuntu22-04/, "https://linuxhint.com/install-discord-ubuntu22-04/")\
discord.deb : [discord.com](https://discord.com/download, "https://discord.com/download")
```console
devkimbob@UbuntuKimbob:~$ sudo apt install ./discord-0.0.18.deb
```

### 2.2.2. Install better discord
download link : [betterdiscord.com](https://betterdiscord.app/, "https://betterdiscord.app/")\
plugins : GameActivityToggle

## 2.3. Mouse scroll speed
reference_3button : [codechacha.com](https://codechacha.com/ko/linux-imwheel/, "https://codechacha.com/ko/linux-imwheel/")\
reference_5button : [velog.io](https://velog.io/@ruby/Ubuntu%EC%97%90%EC%84%9C-imwheel%EB%A1%9C-%EC%8A%A4%ED%81%AC%EB%A1%A4-%EC%86%8D%EB%8F%84-%EC%A1%B0%EC%A0%88, "https://velog.io/@ruby/Ubuntu%EC%97%90%EC%84%9C-imwheel%EB%A1%9C-%EC%8A%A4%ED%81%AC%EB%A1%A4-%EC%86%8D%EB%8F%84-%EC%A1%B0%EC%A0%88")
```console
devkimbob@UbuntuKimbob:~$ sudo apt-get install imwheel
devkimbob@UbuntuKimbob:~$ imwheel
devkimbob@UbuntuKimbob:~$ gedit ~/.imwheelrc

".*"
None, Up, Button4, 2
None, Down, Button5, 2

devkimbob@UbuntuKimbob:~$ imwheel -k
devkimbob@UbuntuKimbob:~$ sudo gedit /etc/X11/imwheel/startup.conf

IMWHEEL_START=1

```