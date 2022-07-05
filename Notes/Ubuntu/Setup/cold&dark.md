Fresh Install Setup
===

# 1. Pre notes
## 1.1. Reference version
Ubuntu 20.04.4 LTS (Focal Fossa)

## 1.2. User name, Device name
User : ---\
device : ---

# 2. Basic setup
## 2.1. Dual monitor fix
reference : [askubuntu.com](https://askubuntu.com/questions/1230924/ubuntu-20-04-does-not-recognize-second-monitor, "https://askubuntu.com/questions/1230924/ubuntu-20-04-does-not-recognize-second-monitor")
```console
user_name@Device_Name:~$ sudo apt update
user_name@Device_Name:~$ sudo apt upgrade
user_name@Device_Name:~$ sudo ubuntu-drivers autoinstall
```

## 2.2. Install discord
### 2.2.1. Installation via .deb file
reference : [linuxhint.com](https://linuxhint.com/install-discord-ubuntu22-04/, "https://linuxhint.com/install-discord-ubuntu22-04/")\
discord.deb : [discord.com](https://discord.com/download, "https://discord.com/download")
```console
user_name@Device_Name:~$ sudo apt install ./discord-0.0.18.deb
```

### 2.2.2. Install better discord
download link : [betterdiscord.com](https://betterdiscord.app/, "https://betterdiscord.app/")\
plugins : GameActivityToggle

## 2.3. Mouse scroll speed
reference_3button : [codechacha.com](https://codechacha.com/ko/linux-imwheel/, "https://codechacha.com/ko/linux-imwheel/")\
reference_5button : [velog.io](https://velog.io/@ruby/Ubuntu%EC%97%90%EC%84%9C-imwheel%EB%A1%9C-%EC%8A%A4%ED%81%AC%EB%A1%A4-%EC%86%8D%EB%8F%84-%EC%A1%B0%EC%A0%88, "https://velog.io/@ruby/Ubuntu%EC%97%90%EC%84%9C-imwheel%EB%A1%9C-%EC%8A%A4%ED%81%AC%EB%A1%A4-%EC%86%8D%EB%8F%84-%EC%A1%B0%EC%A0%88")
```console
user_name@Device_Name:~$ sudo apt-get install imwheel
user_name@Device_Name:~$ imwheel
user_name@Device_Name:~$ gedit ~/.imwheelrc

".*"
None, Up, Button4, 2
None, Down, Button5, 2

user_name@Device_Name:~$ imwheel -k
user_name@Device_Name:~$ sudo gedit /etc/X11/imwheel/startup.conf

IMWHEEL_START=1

```

## 2.4. Shane's ubuntu settings for developers
reference : [shanepart.tistory.com](https://shanepark.tistory.com/242, "https://shanepark.tistory.com/242")
```txt
KIME korean input
turn off beep sound in terminal
SSH key - study later
Screen autolock settings
Ctrl Alt arrow bindings removed
Shut down shortcut added
Apt storage to kakao
Vim editor install
Terminator install
Sdkman install
JDK - skipped, study later
LibreOffice install
zsh, oh-my-zsh - skipped, study later
VLC install
Koloupaint - skipped
open to nautilus - skipped
SSH access grant - skipped, study later
Dash to Dock
MacOS
  Interface Text : Ubuntu Regular 11
  Document Text : Sans Regular 11
  Monospace Text : Ubuntu Mono Regular 13
  Legacy Window Titles : Ubuntu Bold 11
Notification Banner Position
Topbar removal
Openweather
Github desktop
VSCode
```

## 2.5. Korean key binding
Region & Language : Input Sources Korean(Hangul)

## 2.6. Speakers fix

## 2.7. Coding

# 3. Additional setup
## 3.1. Chrome force dark mode
## 3.2. Gnome extension installations
### 3.2.1. Sound device chooser
### 3.2.2. Tiling assist for FancyZones
### 3.2.3. Sound percentage