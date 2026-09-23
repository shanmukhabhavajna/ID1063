#include<stdio.h>
int main(){int m,n;
	printf("enter m:");
	scanf("%d",&m);
	printf("enter n:");
	scanf("%d",&n);
	int a[m][n];
	int t;
	printf("enter t:");
	scanf("%d",&t);
	printf("enter arr[m][n]:");
	for(int i=0;i<m;i++){for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);}}
	for(int i=0;i<m;i++){for(int j=0;j<n;j++){if(a[i][j]>t){a[i][j]=255;}
		else{a[i][j]=0;}
	printf("%d\t",a[i][j]);}printf("\n");}
	return 0;}
