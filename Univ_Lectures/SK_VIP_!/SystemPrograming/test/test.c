#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>

int main() {
    printf("size_t %u\n", sizeof(size_t));
    printf("unsigned int %u\n", sizeof(unsigned int));
    printf("int %u\n", sizeof(int));
    printf("__int64_t %u\n", sizeof(__int64_t));
    printf("mode_t %u\n", sizeof(mode_t));
    FILE *fp;
    fp = fopen("test.txt", "r");
    printf("fp->_fileno %u\n", fp->_fileno);
    printf("idtype_t %u\n", sizeof(idtype_t));
}