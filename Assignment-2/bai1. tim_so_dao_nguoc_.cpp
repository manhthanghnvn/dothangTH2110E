#include <stdio.h>
int main (){
	int a, b;
	printf("nhap 4 so:");
	scanf("%d",&a);
	b=0;
	b=b*10+a%10;
	a=a/10;
	
	if(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	if(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	if(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	
				
	printf("4 so dao nguoc:%d",b);
	
	
}
