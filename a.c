#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int i,j,k,l;
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
k=rand()%6+1;
printf("Die 3: %d\n",k);
l=i+j+k;
printf("Total value: %d\n",l);
if(k>=10){
  printf("%s won!\n",name);
}
else printf("%s lost!\n",name);
return 0;
}
