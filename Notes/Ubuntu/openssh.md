OpenSSH
===

# 1. Open SSH Server
reference : [codechacha.com](https://codechacha.com/ko/ubuntu-install-openssh/, "https://codechacha.com/ko/ubuntu-install-openssh/")

## 1.1. Install OpenSSH
```console
user_name@Device_name:~$ sudo apt update
user_name@Device_name:~$ sudo apt install openssh-server
```

## 1.2. Activate SSH Server
Active: active (running)  // It's curruntly running.
```console
user_name@Device_name:~$ sudo systemctl status ssh

● ssh.service - OpenBSD Secure Shell server
     Loaded: loaded (/lib/systemd/system/ssh.service; enabled; vendor preset: enabled)
     Active: active (running) since Fri 2022-07-08 05:54:02 KST; 8h left
       Docs: man:sshd(8)
             man:sshd_config(5)
   Main PID: 1131 (sshd)
      Tasks: 1 (limit: 18924)
     Memory: 2.3M
     CGroup: /system.slice/ssh.service
             └─1131 sshd: /usr/sbin/sshd -D [listener] 0 of 10-100 startups

Jul 08 05:54:02 <Device_Name> systemd[1]: Starting OpenBSD Secure Shell server...
Jul 08 05:54:02 <Device_Name> sshd[1131]: Server listening on 0.0.0.0 port <port_number>.
Jul 08 05:54:02 <Device_Name> sshd[1131]: Server listening on :: port <port_number>.
Jul 08 05:54:02 <Device_Name> systemd[1]: Started OpenBSD Secure Shell server.
```

If not
```console
user_name@Device_name:~$ sudo systemctl enable ssh  # enable in startup
user_name@Device_name:~$ sudo systemctl start ssh  # start ssh
```

## 1.3. Firewall
Allow ssh in firewall
```console
user_name@Device_name:~$ sudo ufw allow ssh
```

Firewall is disabled by default
```console
user_name@Device_name:~$ sudo ufw status

Status: inactive

user_name@Device_name:~$ sudo ufw enable
user_name@Device_name:~$ sudo ufw disable
```

# 2. Close SSH server
reference : [codechacha.com](https://codechacha.com/ko/ubuntu-install-openssh/, "https://codechacha.com/ko/ubuntu-install-openssh/")

To stop SSH
```console
user_name@Device_name:~$ sudo systemctl stop ssh
```

To disable ssh in startup
```console
user_name@Device_name:~$ sudo systemctl disable ssh
```

# 3. Change port
reference : [jbhs7014.tistory.com](https://jbhs7014.tistory.com/141, "https://jbhs7014.tistory.com/141")

```console
user_name@Device_name:~$ sudo vim /etc/ssh/sshd_config

...
#Port 22
Port <port_number>  # add new line
#AddressFamily any
...

user_name@Device_name:~$ sudo service sshd restart
```
