#include <conio.h>
#include <dirent.h>
#include <stdio.h>
#include <windows.h>

void clearAll() {
  DIR *dir;
  struct dirent *ent;
  char path[100];
  dir = opendir("Souvenirs/");
  if (dir != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      sprintf(path, "Souvenirs/%s", ent->d_name);
      remove(path);
    }
    closedir(dir);
  } else {
    perror("Unable to open directory");
  }
}