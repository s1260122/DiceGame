#include <stdio.h>
#include <stdlib.h>
int main(){
int i,j,k;
printf("Rolling the dice...\n");
i=rand()%6+1;
printf("Die 1: %d\n",i);
j=rand()%6+1;
printf("Die 2: %d\n",j);
k=i+j;
printf("Total value: %d\n",k);
return 0;
}
