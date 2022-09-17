#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define MAXLINE 127

int main(int argc, char *argv[]) {
    struct sockaddr_in servaddr, cliaddr;
    int listen_sock, accp_sock, addrlen = sizeof(cliaddr), nbyte;
    char buf[MAXLINE + 1];

    if (argc != 2) {
        printf("error : arg");
        exit(1);
    }

    if ((listen_sock = socket(PF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket fail");
        exit(0);
    }

    bzero((char *)&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(atoi(argv[1]));

    if (bind(listen_sock, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
        perror("bind fail");
        exit(1);
    }

    listen(listen_sock, 5);
    while (1) {
        puts("Server waiting for connection request...");
        accp_sock = accept(listen_sock, (struct sockaddr *)&cliaddr, &addrlen);
        if (accp_sock < 0) {
            perror("accept fail");
            exit(1);
        }

        puts("Client connected...");
        nbyte = read(accp_sock, buf, MAXLINE);
        write(accp_sock, buf, nbyte);
        close(accp_sock);
    }
    close(listen_sock);
    return 0;
}