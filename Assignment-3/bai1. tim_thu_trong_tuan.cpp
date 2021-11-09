#include<stdio.h>
int main(){
	int n;
	printf("Nhap 1 so nguyen: ");
	scanf("%d",&n);
	if(n>=2 && n<=7){
		printf("Day la thu %d",n);
	}else if(n==8){
		printf("Day la chu nhat");
	}else{
		printf("khong phai ngay trong tuan");
	}
}
