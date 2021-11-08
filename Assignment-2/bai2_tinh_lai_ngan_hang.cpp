#include <stdio.h>
int main(){
	int a,b;
	float c;
	
	printf("Nhap so tien gui (USD): ");
	scanf("%d",&a);	
	printf("Nhap so nam gui : ");
	scanf("%d",&b);	
	printf("Nhap lai suat gui: ");
	scanf("%f",&c);
	
	a = a + a*c;
	b = b - 1;
	if(b != 0){
		a = a + a*c;
		b = b - 1;
		
		if(b != 0){
			a = a + a*c;
			b = b - 1;
			
			if(b != 0){
				a = a + a*c;
				b = b - 1;
				
				if(b != 0){
					a = a + a*c;
					b = b - 1;
	
	            }
            }
        }
    }
	printf("Tong so tien gui: %d",a);
}
