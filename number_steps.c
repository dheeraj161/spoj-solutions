#include<stdio.h>
int main(){
int x,y,a,b,n,t,num,i;
scanf("%d",&num);

for(i=0;i<num;i++){
a=0;
b=0;
n=0;
scanf("%d %d",&x,&y);
if(a!=x || b!=y)
t=1;
while(a<x || b<y){
switch(t){
case 1:
a++;
b++;
n++;
t=2;
break;
case 2:
a++;
b--;
n++;
t=3;
break;
case 3:
a++;
b++;
n++;
t=4;
break;
case 4:
a--;
b++;
n++;
t=1;
break;
default:
break;
}
}
if(a==x && b==y)
printf("%d\n",n);
else 
printf("No Number\n");
}
return 0;
}
