#include <stdio.h>

int main() {
   FILE *file = fopen("example.txt", "r");
   char buffer[20];

   if (file == NULL) {
       printf("Failed to open file.\n");
       return 1;
   }

fgets(buffer, sizeof(buffer), file);

   printf("%s\n", buffer);

   fclose(file);
   return 0;
}