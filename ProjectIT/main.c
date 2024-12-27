#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int subChoice;
	int currentLength=0;
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
						break;
					}
					case 2:{
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
