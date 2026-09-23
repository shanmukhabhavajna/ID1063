#include<stdio.h>
int elapsed(int day,int month);
int main(){int a[12]=   
	{31,28,31,30,31,30,31,31,30,31,30,31};
	int day;int month;
	printf("enter month:");
	scanf("%d",&month);
	printf("enter day :");                                                   scanf("%d",&day);
           if(1>day||day<a[month-1]){printf("wrong input");}
	   if(month<1||month>12){printf("wrong input");}
	elapsed(day,month);
	printf("%d",elapsed(day,month));
	return 0;}










int elapsed(int day,int month){int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	for(int i=0;i<a[month-1];i++){sum=sum+a[i];}
	sum=sum+day;
	return sum;}
