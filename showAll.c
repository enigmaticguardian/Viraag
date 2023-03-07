#include <dirent.h>
#include <stdio.h>

void showAll() {
  struct dirent *de;
  DIR *dr;
  dr = opendir("Souvenirs");
  while ((de = readdir(dr)) != NULL)
    printf("%s\n", de->d_name);
  // TODO : you may remove it
  // sort all files that end with .txt
  // put them in a struct array
  // show them as selectable options to open in (o)pen menu
}