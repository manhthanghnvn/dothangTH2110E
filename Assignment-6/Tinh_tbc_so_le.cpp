#include <stdio.h>
int main (){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
		}
	int tongsl=0;
	float tbcsl=0;
	int count=0;
	for(int i=0;i<n;i++){
		
		if(arr[i]%2!=0){
			tongsl=tongsl+arr[i];
			count++;	
			
			printf("so le:%d\n",arr[i]);
			}
		}
		printf("tong so le:%d\n",tongsl);
		if(count>0){
			printf("tbc so le:%f\n",(float)tongsl/count);
	}
}	
		
		
	

