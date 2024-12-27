#include<stdbool.h>
//kieu du lieu

  //Ngay, thang, nam sinh
struct Date{
	int month, day, year;
};
  //Du lieu thong tin sinh vien
struct Student{
	char studentId[10];
	char classroomId[10];
	char name[20];
	struct Date dateOfBirth;
	bool gender;
	char email[30];
	char phone[20];
	char password[20];
};
  //Du lieu thong tin lop hoc
struct Classroom{
	char classroomId[10];
	char teacherId[10];
	char classroomName[20];
	struct Student students[];
};
  //Du lieu thong tin giao vien
struct Teacher{
	char teacherId[10];
	char classroomId[10];
	char Name[20];
	struct Date dateOfBirth;
	bool gender;
	char Email[30];
	char Phone[20];
	char password[20];
	struct Classroom classrooms[];
};
