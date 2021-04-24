/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <math.h>

int threemult(int num){
int ismultiple=0;
float quotient = (float)num / 3;

if (ceilf(quotient)==quotient){
ismultiple=1;
}
return ismultiple;
}

int fivemult(int num){
int ismultiple=0;
float quotient = (float)num / 5;

if (ceilf(quotient)==quotient){
ismultiple=1;
}
return ismultiple;
}

int main(){
int sum=0;

for(int i=0;i<1000;i++){
int ismultiple = threemult(i);

if (ismultiple == 0){
    ismultiple = fivemult(i);
}

if (ismultiple == 1){
    sum = sum + i;
}
}
printf("sum=%d",sum);
return 0;
}