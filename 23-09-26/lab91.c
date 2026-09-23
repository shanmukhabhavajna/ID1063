#include<stdio.h>
#include<math.h>
float rms(int n,float a[n]);
int main(){int n;
	float a[n];
	printf("enter n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){printf("enter vibration:");
		scanf("%f",&a[i]);}
rms(n,a);
printf("%f",rms(n,a));
return 0;}
	float rms(int n,float a[n]){
		float sum=0.0;
		for(int i=0;i<n;i++){sum=sum+pow(a[i],2);}
		float result=sqrt(sum/n);
	return result;}
		
