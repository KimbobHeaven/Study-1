#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

// 01
extern int errno;
void perror(const char*s);
char *strerror(int errnum);

void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);

extern char *optarg;
extern int optind, opterr, optopt;
int getopt(int argc, char *const argv[], const char *opstring);

// 02
int rename(const char *oldpath, const char *newpath);
int mkdir(const char *pathname, mode_t mode);
int rmdir(const char *pathname);
char *getcwd(char *buf, size_t size);
#define _GNU_SOURCE
char *get_current_dir_name(void);
int chdir(const char *path);
int fchdir(int fd);

DIR *opendir(const char *name);
int closedir(DIR *dirp);
struct dirent *readdir(DIR *dirp);
long telldir(DIR *dirp);
void seekdir(DIR *dirp, long loc);
void rewinddir(DIR *dirp);

// 03
int stat(const char *pathmane, struct stat *statbuf);
int fstat(int fd, struct stat *statbuf);
int lstat(const char *pathname, struct stat *statbuf);

int access(const char *pathname, int mode);
int chmod(const char *pathname, mode_t mode);
int fchmod(int fd, mode_t mode);

int link(const char *oldpath, const char *newpath);
int symlink(const char *target, const char *linkpath);
int unlink(const char *pathname);

ssize_t readlink(const char *pathname, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);