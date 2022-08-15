#include <stdio.h>
    void perror(const char*s);
    
#include <stdlib.h>
    exit();

    void *malloc(size_t size);
    void *calloc(size_t nmemb, size_t size);
    void *realloc(void *ptr, size_t size);
    void free(void *ptr);

#include <string.h>
    char *strerror(int errnum);

#include <errno.h>
    extern int errno;

#include <unistd.h>
    extern char *optarg;
    extern int optind, opterr, optopt;
    int getopt(int argc, char *const argv[], const char *opstring);