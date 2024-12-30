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
	printf("\t[0] Exit the Program.\n");
	printf("\t================\n");
}
void printInformation(struct Student students){
    printf("|\t%s", students.studentId);
    printf("\t|%s\t", students.classroomId);
    printf("\t|%s\t\t\t", students.name);
    printf("|%s\t\t", students.email);
    printf("\t|%s\t\t", students.phone);
}

void printListInformation(struct Student students[], int n){
	int i;
	printf("\n\t***All Students***\n");
	printf("|======================================================================================================================|\n");
	printf("|\tID\t|ClassroomID\t|Name\t\t\t\t|Email\t\t\t\t|Phone\n");
	printf("|======================================================================================================================|\n");
	for( i=0; i<n;i++){
		printInformation(students[i]);
		printf(" |----------------------------------------------------------------------------------------------------------------------|\n");
	}
}

void addStudent(struct Student students[100], int *n){
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
