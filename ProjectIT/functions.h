#include "datatypes.h"
//Nguyen mau ham
void startMenu();
void printMenuStudent();
void printInformation(struct Student students);
void printListInformation(struct Student students[], int n);
void addStudent(struct Student students[50], int *n);
void addInformation(struct Student *std);
void editInformation(struct Student students[50], int n);
void deleteStudent(struct Student students[50], int *n); 
void bubblesortStudent(struct Student students[50], int n);
void searchStudent(struct Student students[50],char* searchName, int n); 
