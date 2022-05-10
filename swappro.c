#include<stdio.h>
int swap(int,int);
int main(){
int a=9,b=2;
swap(a,b);
printf("%d %d",a,b);
}
int swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
