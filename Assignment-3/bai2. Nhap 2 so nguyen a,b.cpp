#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	if(a>=b){
		printf("ket qua nhan duoc:%f",float(a/b));
	}else{
		printf("ket qua nhan duoc:%d",a*b);
	}
}
