#include<stdio.h>

void main(){
int a[]={2,4,3,2,3,4,5,7,5,6,7};

//Store first number in a variable
int ans=a[0];

//Now, XOR the above saved variable with every element of array except 0.
for(int i=1;i<sizeof(a)/sizeof(int);i++){
ans=ans^a[i];
}
printf("%d\n",ans);
}
