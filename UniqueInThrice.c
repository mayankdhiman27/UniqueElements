#include<stdio.h>

//Power function
int power(int a,int b){
if(b==0){
return 1;
}
if(b&1){
return a*power(a,b/2)*power(a,b/2);
}
else{
return power(a,b/2)*power(a,b/2);
}
}


//Driver Code
void main(){
int a[]={6,2,5,2,2,6,6};

//Find the highest number of array to get the count of maximum binary digits
//Here 7 is highest (111) with three binary digits
int highest=0;
for(int i=0;i<(sizeof(a)/sizeof(int));i++){
if(a[i]>highest){
highest=a[i];
}
}

//Array to save count of set bits of all three positions
int arr[3]={0};

//And each element of the array with each digit set at one time to get the count of set bits at each position
for(int i=0;i<3;i++){
int p=power(2,i);
for(int j=0;j<(sizeof(a)/sizeof(int));j++){
if((a[j]&p)==p){
arr[i]+=1;
}
}
}

//Save the count of set bits in a char array, and use this to get its integer converted form(which is unique element).
char s[3];
for(int i=0;i<3;i++){
s[i]=arr[i]%3;
}
int ans;
for(int i=0;i<3;i++){
ans+=(s[i]*power(2,i));
}
printf("Unique element is %d\n",ans);
}

