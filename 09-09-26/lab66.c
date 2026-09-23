//code by Bhavajna 
//09-09-26
#include<stdio.h>
#include<stdlib.h>
int main(){int n;
	printf("enter n:");
	scanf("%d",&n);
	char str[100];
	//creating string
	printf("enter %d numbers:",n);
	for(int i=0;i<n;i++){scanf("%d", &str[i]);}
	//reading numbers into string
	str[n]='\0';
	//to make sure 0 is not included in string
	printf("string:%s",str);
	return 0;}

