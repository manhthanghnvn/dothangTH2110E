#include<stdio.h>
int main(){
	int A,B,C;
	printf("nhap so thu nhat: ");
	scanf("%d",&A);
	printf("nhap so thu nhat: ");
	scanf("%d",&B);
	printf("nhap so thu nhat: ");
	scanf("%d",&C);
	
	if(A<B){
		if(A<C){
			printf("so nho nhat trong là:%d",A);
			
		}else{
			printf("so nho nhat trong là:%d",C);
		}
	}else if(B<C){
			printf("so nho nhat trong là:%d",B);
		}else{
			printf("so nho nhat trong so là:%d",C);
				
			}
		
	}
	



