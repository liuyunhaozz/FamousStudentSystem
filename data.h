#pragma once
// ����һЩ�������ṹ�塢��ͺ�

#define Max_Student 50   // Ԥ���õ����ѧ����
#define LEN sizeof(Stu)  // ѧ���ṹ���ֽڳ���

typedef struct
{
	char Ach_1[100];//У�ѳɾ�1
	char Ach_2[100];//У�ѳɾ�2
	char Ach_3[100];//У�ѳɾ�3
}Ach;

typedef struct
{
	char Name[10];//����
	char Sex[5];//�Ա�
	char Hometown[8];//����
	char InSchoolYear[6];     //��У���
	char Identity[20];    //��У���
	char Profession[20];  //ϵ��
	char Field[20];       //�о�����
	char Introduction[580];//���˼��
	Ach Achievement;//�ɾ�

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
void ShowAllStudent(Stu* Student);        //�ṩһ��չʾ����ѧ���Ա��ڿ�������Ľ���
void UpQsort(Stu* a, int L, int R);
void DownQsort(Stu* a, int L, int R);
char PreLogIn(void);





