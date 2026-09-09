//code by Bhavajna on 09-09-26
#include<stdio.h>
int main(){int n;
	printf("enter n:");
	scanf("%d",&n);
	char str[n+1];
	//creating string
	printf("enter %d numbers:",n);
	for(int i=0;i<n;i++){scanf("%s",&str[i]);}
	//reading numbers into string
	str[n]='\0';
	//to make sure 0 is not included in string
	printf("string:%s\n",str);
	return 0;}

