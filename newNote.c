
#include "createDirectory.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILESIZE 1000
#define FILENAME 50

void newNote() {
  FILE *f;
  int count = 0;
  char str[FILENAME];
  char content[FILESIZE];
  createDirectory();
  char path[] = "Souvenirs/";
  fputs("Enter your Note Title: ", stdout);
  fflush(stdin);
  gets(str);
  strcat(path, str);
  f = fopen(path, "w");
  if (ferror(f)) {
    createDirectory();
    f = fopen(path, "w");
  }
  printf("Share your thoughts, pain, memories below ... !\n");
  gets(content);
  fprintf(f, "%s", content);
  system("cls");
  printf("Note saved!\n");
  fclose(f);
}
