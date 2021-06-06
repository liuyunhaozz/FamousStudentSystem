#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include"data.h"


int main(void)
{
	Stu Student[Max_Student];

	//初始化,这一步非常重要
	for (int i = 0; i < Max_Student; i++)
	{
		memset(&Student[i], 0, LEN);
	}
	//   用户登录界面
	char choice = PreLogIn();
	if (choice == '2')
	{
		while (true)
		{
			char flag = Users_menu();
			if (flag == '0')
				break;
			switch (flag)
			{
			case '1':
				PersonalInterface(Student);
				break;
			case '2':
				FindStudent(Student);
				break;
			case'3':
				ShowAllStudent(Student);
				break;
			default:
				break;
			}
		}

	}
	//管理员登录界面
	else if (choice == '1')
	{
		if (LogIn())
		{
			while (true)   //菜单界面
			{
				char flag = Admin_menu();
				if (flag == '0')
					break;
				switch (flag)
				{
				case '1':
					PersonalInterface(Student);
					break;
				case '2':
					FindStudent(Student);
					break;
				case '3':
					SortStudent(Student);
					break;
				case '4':
					AddStudent(Student);
					break;
				case '5':
					DeleteStudent(Student);
					break;
				case '6':
					ShowAllStudent(Student);
					break;
				default:
					break;
				}
			}
		}
	}
	return 0;
}

