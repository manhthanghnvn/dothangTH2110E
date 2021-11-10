#include <stdio.h>
int main (){
	int n;
	printf("nhap so n:");
	scanf("%d",&n);
    do{
        if(n <= 0){
            printf("nhap lai n:");
        }
    }while(n <= 0);
    int sum = 0;
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
        	
        printf("so uoc:%d\n",i);
        sum+=i;
        }
    }
	printf("tong uoc can tim %d",sum); 
}
