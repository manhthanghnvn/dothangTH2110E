#include <stdio.h>
int main(){
	int n;
	printf("input n=");
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		printf("input number %d: ",i);
		scanf("%d",&arr[i]);
	}
	int sochan = 0;
	for(int i = n-1;i>=0;i--){
		if(arr[i]%2==0){
			sochan = arr[i];
			break;
		}
	}
	if(sochan != 0){
		printf("the last even number : %d",sochan);
	}else{
		printf("No EVEN number");
	}
	
}
