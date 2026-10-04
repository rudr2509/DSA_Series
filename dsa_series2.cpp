#include<stdio.h>
#include<string.h>
int main() {
   FILE *file;
   int count =0,i;
   char keywords[32][10]={
      "auto","break","case","char","const","continue",
      "default","do","double","else","enum","extern",
      "float","for","goto","if","inline","int","long",
      "register","restrict","return","short","signed",
      "sizeof","static","struct","switch","typedef","union",
      "unsigned","void"
  };
   char word[50];
   file=fopen("data.txt","r");
   if (file==NULL) {
      printf("error opening file \n");
      return 1;
   }
   while (fscanf(file, "%s",word)!=EOF) {
      for (int i=0;i<32;i++) {
         if (strcmp(word,keywords[i])==0) {
            count++;
            break;
         }
      }
   }
   fclose(file);
   printf("total no. of keywords are %d",count);
   return 0;
}