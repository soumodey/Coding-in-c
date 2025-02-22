#include<stdio.h>
int main(){
	int n,x=1,y=0,sum=0;
	scanf("%d",&n);
	printf("%d,%d",y,x);
	for(int i=0;i<n-2;i++){
		
		sum=y+x;
		printf(",%d",sum);
		y=x;
		x=sum;
	}	
	return 0;
	}
	