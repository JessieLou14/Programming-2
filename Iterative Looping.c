#include <stdio.h>

void main(){
    int a,num,r,sum=0,t;

    printf("Input any integer: ");
    scanf("%d",&num);

    if(a = num)
    {
    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
    printf("Revised for %d is %d \n",t,sum);
    }
    else
    printf("The inputted data is Invalid");
}
