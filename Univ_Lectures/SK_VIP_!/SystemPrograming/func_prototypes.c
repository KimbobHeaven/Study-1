#include <stdio.h>
    void perror(const char*s);

    int rename(const char *oldpath, const char *newpath);
    
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

    int rmdir(const char *pathname);
    char *getcwd(char *buf, size_t size);
    #define _GNU_SOURCE
    char *get_current_dir_name(void);
    int chdir(const char *path);
    int fchdir(int fd);

#include <sys/stat.h>
#include <sys/types.h>
    int mkdir(const char *pathname, mode_t mode);

#include <dirent.h>
    DIR *opendir(const char *name);
    int closedir(DIR *dirp);
    struct dirent *readdir(DIR *dirp);
    long telldir(DIR *dirp);
    void seekdir(DIR *dirp, long loc);
    void rewinddir(DIR *dirp);
    