#include <stdio.h>

int main(int argc, char *argv[])
{
  char name[] = "Zed";
  /*char full_name[] = {'z','e','d',' ','A','\0'};*/
  char full_name[] = {'z','e','d',' ','A'};
  printf("The size of an int: %ld\n",sizeof(int));
  printf("The size of an char: %ld\n",sizeof(char));
  printf("The size of name: %ld\n",sizeof(name));
  printf("The size of full_name: %ld\n",sizeof(full_name));
  printf("name=\"%s\" and full_name =\"%s\"\n",name,full_name);
  return 0;
};
