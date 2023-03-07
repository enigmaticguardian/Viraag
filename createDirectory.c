#include <conio.h>
#include <dirent.h>
#include <stdio.h>
#include <windows.h>

void createDirectory() {
  DIR *d;
  d = opendir("Souvenirs");
  if (d == NULL)
    CreateDirectory("Souvenirs", NULL);
  closedir(d);
}