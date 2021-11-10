#include <stdio.h>
int main(){
	int n;
	printf ("nhap so luong so le can tinh:");
	scanf("%d",&n);
	
	int s=0;
	int a=2*n;
	for(int i=1;i<=a;i++){
		if(i%2!=0){
		s=s+i;
		}
	}
	
	printf("tong 100 so le can tinh:%d",s);
}
	
