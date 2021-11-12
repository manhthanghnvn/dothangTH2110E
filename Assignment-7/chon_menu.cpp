#include <stdio.h>
int main(){
	int menu, tongtien;
	int out=0;
	do{
		printf("1. chon mon an\n");
		printf("2. chon do uong\n");
		printf("3. thanh toan\n");
		printf("4. Thoat\n");
		printf("vui long chon menu\n");
		scanf("%d",&menu);
		
		switch(menu){
			case 1: {
				int food, back=0;
				do{
					printf("1. com ga 35.000\n");
					printf("2. Pho 35.000\n");
					printf("3. bun 25.000\n");
					printf("4. quaylai chon menu\n");
					printf("vui long chon mon an:");
					scanf("%d",&food);
					switch (food){
						case 1:{
							tongtien+=35000;
							printf("ban da chon com ga 35\n");
							back =1;
							break;
						}
						case 2:{
							tongtien+=35000;
							printf("ban da chon PHO 35,\n");
							back =1;
							break;
							
						}						
						case 3:{
							tongtien+=25000;
							printf("ban da chon BUN 35\n");
							back =1;
							break;
						}
						case 4: back =1; 
								break;
						default: printf("vui long chon mon an");
						
						}
				}while (back==0);
				
			
			}
			case 2:  {
				int food, back=0;
				do{
					printf("1. cafe 25.000\n");
					printf("2. tra chanh 15.000\n");
					printf("3. tra da 5.000\n");
					printf("4. quaylai chon menu\n");
					printf("vui long chon do uong:");
					scanf("%d",&food);
					switch (food){
						case 1:{
							tongtien+=25000;
							printf("ban da chon cafe 25.000");
							back =1;
							break;
						}
						case 2:{
							tongtien+=15000;
							printf("ban da chon tra chanh 15.000");
							back =1;
							break;
							
						}						
						case 3:{
							tongtien+=5000;
							printf("ban da chon tra da 5.000");
							back =1;
							break;
						}
						case 4: back =1; 
								break;
						default: printf("vui long chon do uong")	;
					}
				}while (back==0);

			
			}
			case 3:  {
				if(tongtien>0){
					printf("tong tien phai thanh toan:%d\n",tongtien);
					printf("cam on quy khach!");
					out =1;
				}
				break;
			}
			case 4: {
				if(tongtien>0){
					printf("tong tien phai thanh toan:%d\n");
				}else
					out =1;
				break;
			default: printf("vui long chon dung chuc nang");
			}
		}	
	}while(out==0);		
}
