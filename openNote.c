#include <conio.h>
#include <stdio.h>

void openNote() {
  FILE *f;
  char name[50];
  char ch;
  printf("Enter note name: ");
  scanf("%s", name);
  char path[] = "Souvenirs/";
  strcat(path, name);
  f = fopen(path, "r");
  if (ferror(f)) {
    printf("File not found !");
  } else {
    system("cls");
    displayASCII();
    printf("%s\n", path);
    printf("________________\n");
    while ((ch = fgetc(f)) != EOF) {
      printf("%c", ch);
    }
  }
  printf("\n");
}