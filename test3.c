#include <stdio.h>

FILE *fopen(const char *path, const char *mode);

FILE *fdopen(int fd, const char *mode);

FILE *freopen(const char *path, const char *mode, FILE *stream);

#include <stdio.h>

FILE *fmemopen(void *buf, size_t size, const char *mode);

FILE *open_memstream(char **ptr, size_t *sizeloc);

#include <wchar.h>

FILE *open_wmemstream(wchar_t **ptr, size_t *sizeloc);

#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

int main(int argc, char *argv[]) {

    FILE *out, *in;
    int v, s;
    size_t size;
    char *ptr;

  if (argc != 2)
  return 0;
}
