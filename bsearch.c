#include<stdio.h>
int bs(int arr[],int n,int x){
		int mid,low,high;
		low=0;
		high=n-1;
		while(low<=high){
		mid=(low+high)/2;
		if(x==arr[mid]){
			
			return mid+1;
			} 
		else if(x>arr[mid]){
				low=mid+1;
				}
		else if(x<arr[mid]){
				high=mid-1; 		}
		
}
	return -1;

}
	
int main(){
	int n,x;
	scanf("%d",&x);
	int arr[]={10,11,15,45,65,88};
	n=sizeof(arr)/sizeof(arr[0]);
	
	//printf("n = %d, mid = %d, %d high",n,mid,high);
	//bs(arr,n,x);
	if(bs(arr,n,x)==-1){
		printf("not in the array");
		}
	else{
		printf("found on %dth",bs(arr,n,x));
	}
	return 0;
}





