#include <stdio.h>
int main(){
	int n;// kich thuoc mang ( array size)
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int count = 0, tongsl = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0 && i%2==0){
			tongsl += arr[i];
			count++;
			printf("so le:%d\n",arr[i]);
		}
	}
	
			
	printf("tong so le:%d\n",tongsl);
	
	if(count > 0){
		printf("TB cong cac so le o vi tri chan: %f",(float)tongsl/count);
	}else{
		printf("Khong co so le o vi tri chan nao ca");
	}
		
}
