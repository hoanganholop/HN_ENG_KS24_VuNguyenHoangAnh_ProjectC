#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int subChoice;
	struct Student students[100]={
		{"1", "ENG24C", "Hoang Anh",{7,2,2005}, true, "test@gmail.com", "9890982241", "9837487"},
	};
	int n=1;
	do{
		startMenu();
		printf("\tENTER THE CHOICE: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:{
				
				break;
			}
			case 2:{
				printMenuStudent();
				printf("\tEnter the Choice: ");
				scanf("%d", &subChoice);
				switch(subChoice){
					case 1:{
						addStudent(students, &n);
						break;
					}
					case 2:{
						printListInformation(students, n);
						break;
					}
					case 3:{
						break;
					}
					case 4:{
						break;
					}
					case 5:{
						break;
					}
					case 0:{
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
	}while(choice!=8);
	return 0;
}
