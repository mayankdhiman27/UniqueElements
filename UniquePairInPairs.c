#include<stdio.h>

void main(){
int a[]={6,1,3,5,1,3,7,6};
int ans=a[0];

//XOR each element and get XOR of two unique elements(ans)
for(int i=1;i<sizeof(a)/sizeof(int);i++){
ans=ans^a[i];
}
int count=0;
int ans1=ans;

//Check which bit is set in ans
while(ans1!=0){
ans1=ans1>>1;
count++;
}

//Array to save the next elements with same bit set as ans.
int a1[(sizeof(a)/sizeof(int))-3]={-1};
int sum,c=0;

//To get the elements with same bit set
for(int j=0;j<sizeof(a)/sizeof(int);j++){
sum=ans&a[j];
if(sum==ans){
a1[c++]=a[j];
}
}

int first=a1[0];

//Now XOR all elements of new array a1.
for(int i=1;i<sizeof(a1)/sizeof(int);i++){
first=first^a1[i];
}

//The number which u get as result of XOR will be one of the unique element
printf("First number of unique pair is %d\n",first);
//To get other number, XOR this with the above ans.
int other=first^ans;
printf("Other number is %d\n",other);
}
