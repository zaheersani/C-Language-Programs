#include <stdio.h>
#include <conio.h>
void main(void)
{
   char oldname[80], newname[80];

   /* prompt for file to rename and new name */
   printf("File to rename: ");
   gets(oldname);
   printf("New name: ");
   gets(newname);

   /* Rename the file */
   if (rename(oldname, newname) == 0)
      printf("Renamed %s to %s.\n", oldname, newname);
   else
      perror("rename");
      getch();
}
