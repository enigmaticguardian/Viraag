#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

void DisplayMenu() {

  fputs("\t(n)ew note\t", stdout);
  fputs("\t(s)how \n", stdout);
  fputs("\t(o)pen\t\t", stdout);
  fputs("\t(d)elete\n", stdout);
  fputs("\t(c)lear\t\t", stdout);
  fputs("\t(q)uit\n", stdout);
}