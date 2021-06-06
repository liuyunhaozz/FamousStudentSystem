#pragma once
// 声明一些函数、结构体、类和宏

#define Max_Student 50   // 预设置的最大学生数
#define LEN sizeof(Stu)  // 学生结构的字节长度

typedef struct
{
	char Ach_1[100];//校友成就1
	char Ach_2[100];//校友成就2
	char Ach_3[100];//校友成就3
}Ach;

typedef struct
{
	char Name[10];//姓名
	char Sex[5];//性别
	char Hometown[8];//籍贯
	char InSchoolYear[6];     //入校年份
	char Identity[20];    //在校身份
	char Profession[20];  //系别
	char Field[20];       //研究领域
	char Introduction[580];//个人简介
	Ach Achievement;//成就

}Stu;

bool LogIn();
char Admin_menu();
char Users_menu();
char OnePersonalInterface(Stu* Student);
void PersonalInterface(Stu* Student);
void FindStudent(Stu* Student);
void SortStudent(Stu* Student);
void AddStudent(Stu* Student);
void DeleteStudent(Stu* Student);
void ShowAllStudent(Stu* Student);        //提供一个展示所有学生以便于快速浏览的界面
void UpQsort(Stu* a, int L, int R);
void DownQsort(Stu* a, int L, int R);
char PreLogIn(void);





