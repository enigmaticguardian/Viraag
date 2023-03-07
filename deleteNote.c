#include <conio.h>
#include <stdio.h>


// void deleteNote(){

//   DIR *dir;
//   struct dirent *ent;
//   FILE *f;
//   char fileName[100];
//   printf("Enter note name to delete : ");
//   scanf("%s",fileName);
//   char path[100];
//   dir = opendir("Souvenirs/");
//   if (dir != NULL) {
//     while ((ent = readdir(dir)) != NULL) {
//         if(strcmp(ent->d_name,fileName)==0){
//             sprintf(path, "Souvenirs/%s", ent->d_name);
//             remove(path);
//     }
//     closedir(dir);
//     }
//   } else {
//     perror("Unable to open directory");
//   }
// }

void deleteNote() {
  DIR *dir;
  struct dirent *ent;
  char fileName[100];
  printf("Enter note name to delete: ");
  scanf("%s", fileName);
  char path[100];
  dir = opendir("Souvenirs/");
  if (dir != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      if (strcmp(ent->d_name, fileName) == 0) {
        sprintf(path, "Souvenirs/%s", ent->d_name);
        if (remove(path) == 0) {
          printf("File %s deleted successfully.\n", fileName);
        } else {
          printf("Unable to delete file %s.\n", fileName);
        }
      }
    }
    closedir(dir);
  } else {
    perror("Unable to open directory");
  }
}