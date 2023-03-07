#include "DisplayMenu.c"
#include "clearAll.c"
#include "deleteNote.c"
#include "displayASCII.c"
#include "newNote.c"
#include "openNote.c"
#include "showAll.c"
#include <conio.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <windows.h>


int main() {
  char ch;
  displayASCII();
  DisplayMenu();
  while (ch != 'q') {
    ch = getc(stdin);
    switch (ch) {
    case 'n': {
      fflush(stdout);
      system("cls");
      displayASCII();
      newNote();
      DisplayMenu();
      break;
    }
    case 's': {
      system("cls");
      displayASCII();
      showAll();
      DisplayMenu();
      break;
    }

    case 'o': {
      openNote();
      DisplayMenu();
      break;
    }
    case 'd': {
      deleteNote();
      DisplayMenu();
      break;
    }
    case 'c': {
      clearAll();
      break;
    }
    case 'q':
      return 0;
    }
  }
  return 0;
}