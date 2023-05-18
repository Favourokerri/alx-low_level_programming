#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ./keygen5 username\n");
    return 1;
  }

  char *username = argv[1];
  int len = strlen(username);

  char *key = malloc(len + 1);
  for (int i = 0; i < len; i++) {
    key[i] = username[len - 1 - i] + 100;
  }
  key[len] = '\0';

  printf("%s\n", key);

  free(key);

  return 0;
}
