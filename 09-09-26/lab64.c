//code by Bhavajna
//09-09-26
#include<stdio.h>
int main(){char str[100];
	char ch;
	int index=-1;
	printf("enter input:");
	scanf("%s",&str);
	printf("enter ch:");
	scanf(" %c",&ch);
	for(int i=0;str[i]!='\0';i++){if(str[i]==ch){index=i;break;}}
	//checking if any of the characters matches in string with input char
	printf("%d",index);
	return 0;}

