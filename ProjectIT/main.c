#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int subChoice;
	struct Student students[50]={
		{"1", "ENG24C", "Hoang Anh",{7,2,2005}, true, "test@gmail.com", "9890982241", "9837487"},
	};
	int n=1;
	int ch;
	do{
		system("cls");
		startMenu();
		printf("\tENTER THE CHOICE: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:{
				
				break;
			}
			case 2:{
				back:
				system("cls"); 
				printMenuStudent();
				printf("\tEnter the Choice: ");
				scanf("%d", &subChoice);
				switch(subChoice){
					case 1:{
						system("cls");
						addStudent(students, &n);					
						printf("Go back(1) or Exit(any key): ");
						scanf("%d", &ch);
						getchar();
						if(ch==1){
							goto back;
						}else{
							goto exit;
						}
						break;
					}
					case 2:{
						system("cls");
						printListInformation(students, n);
						printf("Go back(1) or Exit(any key): ");
						scanf("%d", &ch);
						getchar();
						if(ch==1){
							goto back;
						}else{
							goto exit;
						}
						break;
					}
					case 3:{
						break;
					}
					case 4:{
						system("cls");
						editInformation(students, n);						
						printf("Go back(1) or Exit(any key): ");
						scanf("%d", &ch);
						getchar();
						if(ch==1){
							goto back;
						}else{
							goto exit;
						}
						break;
					}
					case 5:{
						break;
					}
					case 0:{
						exit:
						printf("Ket thuc Menu Student\n");
						break;
					}
					default:{
						printf("Lua chon cua ban khong hop le!!!");
						break;
					}
				}
				break;
			}
			case 3:{
				break;
			}
			case 0:{
				printf("Thoat chuong trinh!!");
				break;
			}
			default:{
				printf("Lua chon cua ban khong phu hop!!!\n");
				break;
			}
		}
	}while(choice!=0);
	return 0;
}
