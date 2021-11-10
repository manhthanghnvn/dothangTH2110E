#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
		
	if(a<b){
		for(int i=2;i>=a&&i<=b;i++){
			int count=0;
			for(int j=2;j<=i/2;j++){
				if(i%j==0){
					count++;
					break;
				}	
			}
			if(count==0){
				printf("so nguyen to can tim:%d\n",i);
			}
			}
			
	}else{
		printf("nhap lai");
	}
	
}
