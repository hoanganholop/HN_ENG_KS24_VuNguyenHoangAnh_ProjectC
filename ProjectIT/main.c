#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int subChoice;
	struct Student students[50]={
		{"1", "ENG24C", "Hoang Anh",{7,2,2005}, true, "test@gmail.com", "0912378123", "1234235"},
		{"2", "ENG24C", "Phuong Cuc",{10,8,2005}, false, "test2@gmail.com", "09172389123", "4634634"},
		{"3", "ENG24C", "Thanh Huyen",{7,2,2000}, false, "test3@gmail.com", "08791286312", "3253253"},
		{"4", "ENG24C", "Huyen Anh",{7,2,2014}, false, "test4@gmail.com", "0261357121", "23125123"},
		{"5", "ENG24C", "Thanh Vu",{7,2,2000}, true, "test5@gmail.com", "0812736121", "7657856"},
	};
	int n=5;
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
							choice=0;
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
							choice=0;
						}
						break;
					}
					case 3:{
						system("cls");
						fflush(stdin); 
						char searchName[30];
						printf("Nhap ten sinh vien muon tim kiem: ");
						fgets(searchName, 30, stdin);
						searchName[strcspn(searchName, "\n")]='\0';
						searchStudent(students, searchName, n);
						printf("Go back(1) or Exit(any key): ");
						scanf("%d", &ch);
						getchar();
						if(ch==1){
							goto back;
						}else{
							choice=0;
						}
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
							choice=0;
						}
						break;
					}
					case 5:{
						system("cls");
						deleteStudent(students, &n);
						printf("Go back(1) or Exit(any key): ");
						scanf("%d", &ch);
						getchar();
						if(ch==1){
							goto back;
						}else{
							choice=0;
						}
						break;
					}
					case 6:{
						system("cls");
						bubblesortStudent(students, n);
						printf("Go back(1) or Exit(any key): ");
						scanf("%d", &ch);
						getchar();
						if(ch==1){
							goto back;
						}else{
							choice=0;
						}
						break;
					}
					case 0:{
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
