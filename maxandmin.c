#include<stdio.h>
int main(){
int num[10],i,limit,largest,smallest,a,b;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the elements");
for(i=0;i<limit;i++){

scanf("%d",&num[i]);
}
largest=num[0];smallest =num[0];
for(i=0;i<limit;i++){
if(num[i]>largest){
largest=num[i];
a=i;
}if (num[i]<smallest){
smallest=num[i];
b=i;
}}
printf("the largest number is %d and the position is %d:",largest,a);

printf("the smallest number is %d and the position is %d:",smallest,b);

return 0;
}

