#include "functions.h"
#include<stdio.h>
#include<string.h>
//logic ham
void startMenu(){
	printf("\n***Student Management System Using C***\n");
	printf("\tCHOOSE YOUR ROLE\n");
	printf("\t================\n");
	printf("\t[1] Admin.\n");
	printf("\t[2] Student.\n");
	printf("\t[3] Teacher.\n");
	printf("\t[0] Exit the Program.\n");
	printf("\t================\n");
}
void printMenuStudent(){
	printf("\n***Student Management System Using C***\n");
	printf("\t  STUDENT MENU\n");
	printf("\t================\n");
	printf("\t[1] Add A New Student.\n");
	printf("\t[2] Show All Students.\n");
	printf("\t[3] Search A Student.\n");
	printf("\t[4] Edit A Student.\n");
	printf("\t[5] Delete A Student.\n");
	printf("\t[6] Sort List Students.\n");
	printf("\t[0] Exit the Program.\n");
	printf("\t================\n");
}
void printInformation(struct Student students){
    printf("|\t%-8s", students.studentId);
    printf("|%-15s", students.classroomId);
    printf("|%-31s", students.name);
    printf("|%-31s", students.email);
    printf("|%-20s", students.phone);
}

void printListInformation(struct Student students[], int n){
	int i;
	printf("\n\t***All Students***\n");
	printf("|===============|===============|===============================|===============================|==========================|\n");
	printf("|\tID\t|ClassroomID\t|Name\t\t\t\t|Email\t\t\t\t|Phone\n");
	printf("|===============|===============|===============================|===============================|==========================|\n");
	for( i=0; i<n;i++){
		printInformation(students[i]);
		printf("\n|---------------|---------------|-------------------------------|-------------------------------|--------------------------|\n");
	}
}

void addStudent(struct Student students[50], int *n){
	if(*n<100){
        printf("\nNhap thong tin sinh vien thu %d:\n", *n + 1);
        addInformation(&students[*n]);
        (*n)++;
        printf("Them sinh vien thanh cong!\n");
    }else{
    	printf("Danh sach sinh vien da day!\n");
	}
}

void addInformation(struct Student *std) {
	fflush(stdin);
    printf("Nhap ma sinh vien: ");
    fgets(std->studentId, sizeof(std->studentId), stdin);
    std->studentId[strcspn(std->studentId, "\n")] = '\0';
    printf("Nhap ma lop hoc: ");
    fgets(std->classroomId, sizeof(std->classroomId), stdin);
    std->classroomId[strcspn(std->classroomId, "\n")] = '\0';
    printf("Nhap ten: ");
    fgets(std->name, sizeof(std->name), stdin);
    std->name[strcspn(std->name, "\n")] = '\0';
    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &std->dateOfBirth.day, &std->dateOfBirth.month, &std->dateOfBirth.year);
    getchar();
    printf("Nhap gioi tinh (1:Nam,0:Nu): ");
    scanf("%d", &std->gender);
    getchar();
    printf("Nhap email: ");
    fgets(std->email, sizeof(std->email), stdin);
    std->email[strcspn(std->email, "\n")] = '\0';
    printf("Nhap so dien thoai: ");
    fgets(std->phone, sizeof(std->phone), stdin);
    std->phone[strcspn(std->phone, "\n")] = '\0';
    printf("Nhap mat khau: ");
    fgets(std->password, sizeof(std->password), stdin);
    std->password[strcspn(std->password, "\n")] = '\0';
}
void editInformation(struct Student students[50], int n) {
    int found = 0;
    int i;
    int j;
    char id[50];
    printf("Nhap ID sinh vien muon sua thong tin: ");
    scanf("%s", id);
    getchar();
    
    for (i=0; i<n; i++) {
        if (strcmp(students[i].studentId, id)==0) {
            found = 1;
            printf("Thong tin cua sinh vien ID %s: \n", id);
            printf("ID: %s\n", students[i].studentId);
            printf("Ma lop hoc: %s\n", students[i].classroomId);
            printf("Ten: %s\n", students[i].name);
            printf("Email: %s\n", students[i].email);
            printf("So dien thoai: %s\n", students[i].phone);
            printf("Nhap ma lop hoc: ");
            fgets(students[i].classroomId, sizeof(students[i].classroomId), stdin);
            students[i].classroomId[strcspn(students[i].classroomId, "\n")]='\0';
            printf("Nhap ten: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")]='\0';
            printf("Nhap ngay sinh (dd mm yyyy): ");
            scanf("%d %d %d", &students[i].dateOfBirth.day, &students[i].dateOfBirth.month, &students[i].dateOfBirth.year);
            getchar();
            printf("Nhap gioi tinh (1:Nam,0:Nu): ");
            scanf("%d", &students[i].gender);
            getchar();
            printf("Nhap email: ");
            fgets(students[i].email, sizeof(students[i].email), stdin);
            students[i].email[strcspn(students[i].email, "\n")]='\0';
            printf("Nhap so dien thoai: ");
            fgets(students[i].phone, sizeof(students[i].phone), stdin);
            students[i].phone[strcspn(students[i].phone, "\n")]='\0';
            printf("Nhap mat khau: ");
            fgets(students[i].password, sizeof(students[i].password), stdin);
            students[i].password[strcspn(students[i].password, "\n")]='\0';
            printf("Thong tin da duoc cap nhat thanh cong\n");
            printf("\n\t***Update The New Student***\n");
            printf("|======================================================================================================================|\n");
            printf("|\tID\t|ClassroomID\t|Name\t\t\t\t|Email\t\t\t\t|Phone\n");
            printf("|======================================================================================================================|\n");
            for (j = 0; j < n; j++) {
                printInformation(students[j]);
                printf(" |----------------------------------------------------------------------------------------------------------------------|\n");
            }
            break;
        }
    }
    if (!found) {
        printf("ID sinh vien khong ton tai hay nhap lai\n");
    }
}
void deleteStudent(struct Student students[50], int *n){
	int i,j;
	char id[10];
	int found=0;
	int choice;
	printf("Nhap ID sinh vien can xoa: ");
	scanf("%s", id);
	for(i=0;i<*n;i++){
		if(strcmp(students[i].studentId,id)==0){
			found=1;
			printf("Xac nhan xoa thong tin(1.Dong y): ");
			scanf("%d",&choice);
			if(choice==1){
				for(j=i;j<*n-1;j++){
					students[j]=students[j+1];
				}
				(*n)--;
				printf("Xoa thanh cong!!\n");
				break;
					
			}else{
				printf("Xac nhan that bai");
			}
		}
	}
	if(!found){
		printf("Khong tim thay ID can xoa!!\n");
	}	
}	
void bubblesortStudent(struct Student students[50], int n){
	struct Student temp;
	int i,j;
	int choice; 
	printf("Lua chon kieu sap xep(1.Tu A-Z; 2.Tu Z-A): ");
	scanf("%d",&choice);
	if(choice==1){ 
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(students[i].name,students[j].name)>0){
					temp=students[i];
					students[i]=students[j];
					students[j]=temp;
				}
			}
		}
	printf("Danh sach sinh vien da duoc sap xep thanh cong!!!");	
	printListInformation(students, n);
	}
	if(choice==2){ 
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(students[i].name,students[j].name)<0){
					temp=students[i];
					students[i]=students[j];
					students[j]=temp;
				}
			}
		}
	printf("Danh sach sinh vien da duoc sap xep thanh cong!!!");
	printListInformation(students, n);
	}
	if(choice!=1&&choice!=2){
		printf("Lua chon sap xep khong hop le!!\n");
	} 
}
void searchStudent(struct Student students[50], char* searchName, int n){
	int found=0;
	int i;
	printf("\n\t***All Students***\n");
	printf("|===============|===============|===============================|===============================|==========================|\n");
	printf("|\tID\t|ClassroomID\t|Name\t\t\t\t|Email\t\t\t\t|Phone\n");
	printf("|===============|===============|===============================|===============================|==========================|\n");
	for( i=0; i<n;i++){
		if(strstr(students[i].name,searchName)!=NULL){
			printInformation(students[i]);
			printf("\n|---------------|---------------|-------------------------------|-------------------------------|--------------------------|\n");
			found=1; 
		}
	if(!found){
		printf("Khong tim thay sinh vien trong danh sach.\n"); 
	}	
    }
}
