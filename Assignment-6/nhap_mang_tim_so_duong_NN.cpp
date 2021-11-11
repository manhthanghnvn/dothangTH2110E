#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int SD = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			SD = arr[i];
			break;
		}
	}
	if(SD ==0){
		printf("Mang khong co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && arr[i]< SD){
				SD = arr[i];
			}
		}
		printf("So duong nho nhat: %d",SD);
	}
}
