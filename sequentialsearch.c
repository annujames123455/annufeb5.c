#include<stdio.h>
int main(){
int num[10],i,limit,number;
printf("enter the limit");
scanf("%d",&limit);
for(i=0;i<limit;i++){
printf("enter the elements:");
scanf("%d",&num[i]);
}printf("enter the number to be searched");
scanf("%d",&number);
for(i=0;i<limit;i++){
if(num[i]==number){
  	printf("the position of number is");
  	printf("%d",i+1);
  }
}
return 0;
}




