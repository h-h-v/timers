#include<stdio.h>
#include<time.h>
int main(){
printf("Enter Timer Minutes:");
int m;
scanf("%d",&m);
m=m*60;
while(m>0){
int min=m/60;
int s=m%60;
printf("\r%02d:%02d", min,s);
fflush(stdout);

clock_t stop = clock()+ CLOCKS_PER_SEC;
while(clock()< stop){}
m--;
}
}
