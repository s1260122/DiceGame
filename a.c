#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int i,j,k;
char name[20];
srand(time(NULL));
printf("What is your name? \n");
scanf("%s",name);
printf("Hello, %s!\n",name);
printf("Rolling the dice...\n");
i=rand()%6+1;
printf("Die 1: %d\n",i);
j=rand()%6+1;
printf("Die 2: %d\n",j);
k=i+j;
printf("Total value: %d\n",k);
return 0;
}
