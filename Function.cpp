#include<graphics.h>
#include"data.h"
#include<conio.h>
#include<stdio.h>

//������ͼ
void DrawBackground()
{
	setbkcolor(WHITE);   //���ñ�����ɫΪ��ɫ
	cleardevice();		//�ñ�����ɫ�������������
	char topic_1[] = "�󹤽ܳ�У�ѹ���ϵͳ";    //�������һ
	char topic_2[] = "���ɰٴ� ��ǿ��Ϣ �����ѧ ֪�к�һ";   //��������
	settextstyle(40, 0, "����");     //����������ʽ
	settextcolor(COLORREF RGB(134, 235, 246));  // ����������ɫ,���� RGB��x,y,z�����ϳ���ɫ
	outtextxy(10, 10, topic_1);//�������,ǰ���������ֱ��ʾͷ��ĸ��x��y����
	settextstyle(30, 0, "��������"); //����������ʽ
	settextcolor(LIGHTRED);  // ����������ɫΪǳ��
	outtextxy(500, 550, topic_2);//�������,ǰ���������ֱ��ʾͷ��ĸ��x��y����
	setlinecolor(RED);    //������������ɫΪ��ɫ
	line(10, 50, 400, 50);  //�������
	setlinecolor(COLORREF RGB(134, 235, 246));//����������ɫ
	line(500, 590, 1000, 590); //�������
}

// ���˽���,��Ҫʵ�ֻ�ͼ����
char OnePersonalInterface(Stu* Student)   // ʵ��Ϊһλѧ������Ϣ
{
	initgraph(1000, 600);
	DrawBackground();
	// Student[0]Ϊ��������
	/*strcpy(Student[0].Name, "�ϵ���");
	strcpy(Student[0].Sex, "��");
	strcpy(Student[0].Hometown, "ɽ��");
	//Student[0].InSchoolYear = 1949;
	strcpy(Student[0].InSchoolYear, "1949");
	strcpy(Student[0].Identity ,"���������ϵ����");
	strcpy(Student[0].Profession, "���������ϵ");
	strcpy(Student[0].Field, "����ͨ��");
	strcpy(Student[0].Introduction, "�й���ѧԺѧ��ίԱ���й���ѧԺԺʿ�����������ڹ���ͨ�ŵĽ�ѧ�����е��쵼�����������������߼����Ӽ����˲ţ�Ϊ�й������ž�ͨ���ִ�����ָ���Զ���������������Ҫ���ס����й����紴�����״﹤��רҵ�����Ƚ��Զ����Ƽ��������弼����΢�������ͼ�����۵�Ӧ�����״﹤��רҵ�Ľ�ѧ�����У�Ϊ����Ϣ���ռ���ͨ�š��״���������˿�����̽����");//const char[325]
	strcpy(Student[0].Achievement.Ach_1, "����˳���ս��ʱ�ڵĿӵ�ͨ������");
	strcpy(Student[0].Achievement.Ach_2, "����������Ŵ�����Ϊ���ջ�ǰ��������״����ܵ����˼��");
	strcpy(Student[0].Achievement.Ach_3, "����״�������ٶ�ģ�������еı��뷽ʽ");
	*/
	setlinecolor(COLORREF RGB(0, 0, 139));  // RGB��x,y,z�����ϳ���ɫ
	line(10, 100, 70, 100);//����
	line(400, 100, 460, 100);//�Ա�
	line(780, 100, 840, 100);//����
	line(10, 175, 100, 175);//��У���
	line(180, 175, 280, 175);//�о�����
	line(430, 175, 490, 175);//ϵ��
	line(660, 175, 760, 175);//��У���
	line(10, 250, 100, 250);//���˼��
	line(10, 400, 100, 400);//�ɾ�1
	line(10, 450, 100, 450);//�ɾ�2
	line(10, 500, 100, 500);//�ɾ�3
	setbkmode(TRANSPARENT);//�����ֲ�ȥ���� 
	settextcolor(COLORREF RGB(28, 28, 28));

	settextstyle(30, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(10,70 , "����");   // ����ָ�����ֵ���ͷ������
	settextstyle(30, 0, "����");
	outtextxy(100, 70, Student->Name);
	
	settextstyle(30, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(400, 70, "�Ա�");   // ����ָ�����ֵ���ͷ������
	settextstyle(30, 0, "����");
	outtextxy(490, 70, Student->Sex);

	settextstyle(30, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(780, 70, "����");   // ����ָ�����ֵ���ͷ������
	settextstyle(30, 0, "����");
	outtextxy(870, 70, Student->Hometown);

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(10, 150, "��У���");   // ����ָ�����ֵ���ͷ������
	settextstyle(25, 0, "����");
	//itoa(Student[0].InSchoolYear, _Year, 10);// ������ֵת��Ϊ�ַ���������ͼ��
	outtextxy(110, 150, Student->InSchoolYear);

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(180, 150, "�о�����");   // ����ָ�����ֵ���ͷ������
	settextstyle(25, 0, "����");
	outtextxy(300, 150, Student->Field);

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(430, 150, "ϵ��");   // ����ָ�����ֵ���ͷ������
	settextstyle(25, 0, "����");
	outtextxy(500, 150, Student->Profession);

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(660, 150, "��У���");   // ����ָ�����ֵ���ͷ������
	settextstyle(25, 0, "����");
	outtextxy(780, 150, Student->Identity);

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(10, 225, "���˼��");   // ����ָ�����ֵ���ͷ������
	settextstyle(20, 0, "����");
	
	/*outtextxy(130, 230, "�й���ѧԺѧ��ίԱ���й���ѧԺԺʿ�����������ڹ���ͨ�ŵĽ�ѧ�����е��쵼��������������");
	//һ�����char [87]  ����Ϊ85
	outtextxy(130, 255, "���߼����Ӽ����˲ţ�Ϊ�й������ž�ͨ���ִ�����ָ���Զ���������������Ҫ���ס����й�");
	outtextxy(130, 280, "���紴�����״﹤��רҵ�����Ƚ��Զ����Ƽ��������弼����΢�������ͼ�����۵�Ӧ�����״�");
	outtextxy(130, 305, "����רҵ�Ľ�ѧ�����У�Ϊ����Ϣ���ռ���ͨ�š��״���������˿�����̽����");
	*/
	RECT rec = { 130,230,990,370 };   //�������������
	//��һ������Ϊ��������ַ���ָ��,�ڶ�������Ϊ���������ָ��,������������ʾ�������������|���ֶ�������|�Զ�����
	drawtext(Student->Introduction, &rec, DT_LEFT | DT_TOP | DT_WORDBREAK);
	//rectangle(130, 230, 990, 370);

	//����5���ı����� һ��������ʾ85���ַ�������\0��
	//һ����������5*84/2=210����
	//�ɾ�ÿ����������80��ASCII�ַ�

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(20, 375, "�ɾ�1");   // ����ָ�����ֵ���ͷ������
	settextstyle(20, 0, "����");
	outtextxy(130, 380, Student->Achievement.Ach_1);

	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(20, 425, "�ɾ�2");   // ����ָ�����ֵ���ͷ������
	settextstyle(20, 0, "����");
	outtextxy(130, 430, Student->Achievement.Ach_2);
	
	settextstyle(25, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(20, 475, "�ɾ�3");   // ����ָ�����ֵ���ͷ������
	settextstyle(20, 0, "����");
	outtextxy(130, 480, Student->Achievement.Ach_3);

	// ����ǰ�����˰�ť
	setfillcolor(COLORREF RGB(135, 206, 250));
	solidroundrect(550, 510, 650, 540, 25, 25);
	solidroundrect(700, 510, 800, 540, 25, 25);
	solidroundrect(850, 510, 950, 540, 25, 25);
	settextstyle(20, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(570, 515, "��һλ");
	outtextxy(720, 515, "��һλ");
	outtextxy(880, 515, "�˳�");
	
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 550 && msg.x <= 650 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(545, 505, 655, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '1';       //����1��ʾ��ʾ��һ���˵Ľ���
			}
		}
		else if (msg.x >= 700 && msg.x <= 800 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 505, 805, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '2';       //����2��ʾ��ʾ��һ���˵Ľ���
			}
		}
		else if(msg.x >= 850 && msg.x <= 950 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(845, 505, 955, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '0';       //����0��ʾ�˳������˵�����
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(545, 505, 655, 545, 25, 25);
			roundrect(695, 505, 805, 545, 25, 25);
			roundrect(845, 505, 955, 545, 25, 25);
		}
	}
	
}

// ��Ϣ����ĺ���,��ȡ�ļ�,��ת
void PersonalInterface(Stu* Student)
{
	//AllMessage Ϊ n ��ʾ���Ϊ0~n-1��У����Ϣ����,�ܼƴ���n��У����Ϣ
	int AllMessage = 0;   // ��ʾ�Ѿ����ļ��е�ѧ������������ÿ�����������ˢ�£���Ϊȫ�ֱ������ã���ÿ��Ҫ��ʱ�ȶ�ȡ����¼�ñ�����ֵ���ں�������
	FILE* fp;//�����ļ�ָ��
	if ((fp = fopen("data.txt", "rb")) == NULL)//��ָ���ļ�
	{
		HWND wnd = GetHWnd();//�����Ӵ���
		MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
		//fclose(fp);//�����������ȹر��ļ�
		return;//û�гɹ���,��ص��˵�����
	}
	while (!feof(fp)) // ˳���ȡ�ļ�������
	{
		if (fread(&Student[AllMessage], LEN, 1, fp) == 1)
			AllMessage++;//ͳ�Ƶ�ǰ��¼����
	}
	if (AllMessage == 0)
	{
		HWND wnd = GetHWnd();//�����Ӵ���
		MessageBox(wnd, "û������", "��ʾ", MB_ICONINFORMATION);
		fclose(fp);//�����������ȹر��ļ�
		return;//û�еõ�����,��ص��˵�����
	}
	fclose(fp);
	int i;//ѭ������
	for (i = 0;;)
	{
		char flag = OnePersonalInterface(&Student[i]);
		if (flag == '0')
		{
			return;
		}
		else if (flag == '1')
		{
			i--;
		}
		else if (flag == '2')
		{
			i++;
		}
		if (i < 0 || i >= AllMessage)
		{
			HWND wnd = GetHWnd();//�����Ӵ���
			MessageBox(wnd, "����߽�", "��ʾ", MB_ICONINFORMATION);
			if (i < 0)
				i++;
			if (i >= AllMessage)
				i--;
		}

	}

}

void AddStudent(Stu* Student)
{
	initgraph(1000, 600);
	DrawBackground();
	setfillcolor(COLORREF RGB(255 ,236, 139));
	solidroundrect(300, 150, 700, 250, 100, 100);
	solidroundrect(300, 350, 700, 450, 100, 100);
	setbkmode(TRANSPARENT);//�����ֲ�ȥ���� 
	settextcolor(COLORREF RGB(100 ,149, 237));
	settextstyle(65, 0, "����");
	outtextxy(440, 170, "���");
	outtextxy(440, 370, "�˳�");
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				int SavedMessage = 0;   // ��ʾ�Ѿ����ļ��е�ѧ������������ÿ�����������ˢ�£���Ϊȫ�ֱ������ã���ÿ��Ҫ��ʱ�ȶ�ȡ����¼�ñ�����ֵ���ں�������
				FILE* fp;//�����ļ�ָ��
				if ((fp = fopen("data.txt", "ab+")) == NULL)//��ָ���ļ������û���򴴽�
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
					//fclose(fp);//�����������ȹر��ļ� fp==NULL ʱ˵���ļ�������,���ùر�һ�������ڵ��ļ�
					continue;//�ص�ԭ����
				}
				while (!feof(fp)) // ˳���ȡ�ļ�������
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//ͳ�Ƶ�ǰ��¼����
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "û������","��ʾ", MB_ICONINFORMATION);
				}
				fp = fopen("data.txt", "ab+");
				// ������������,��ȡ�û����������
				InputBox(Student[SavedMessage].Name, 9, "����У������,����ĸ�����", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Sex, 3, "����У���Ա�", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Hometown, 7, "����У�Ѽ���,�����������", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].InSchoolYear, 5, "����У����У���", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Field, 9, "����У���о�����,����ĸ�����", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Profession, 13, "����У��ϵ��,�����������", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Identity, 17, "����У����У���,���˸�����", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Introduction, 425, "����У�Ѹ��˼��", "¼��", NULL, 0, 0, true);  
				InputBox(Student[SavedMessage].Achievement.Ach_1, 79, "����У�ѳɾ�1,���29������", "¼��", NULL, 0, 0, true);  //�Ե�����ʽ����
				InputBox(Student[SavedMessage].Achievement.Ach_2, 79, "����У�ѳɾ�2,���29������", "¼��", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Achievement.Ach_3, 79, "����У�ѳɾ�3,���29������", "¼��", NULL, 0, 0, true);

				if (fwrite(&Student[SavedMessage], LEN, 1, fp) != 1)    //����¼�����Ϣд��ָ���Ĵ����ļ�
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "¼��ʧ��", NULL, MB_ICONHAND);
					fclose(fp);//�����������ȹر��ļ�
					continue;//�ص�ԭ����
				}
				else
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "¼��ɹ�", "��ʾ", MB_ICONINFORMATION);
					fclose(fp);//�����������ȹر��ļ�
					continue;//�ص�ԭ����
				}
				
			}
			
		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return;    //�����˳�,���ص�������
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(295, 145, 705, 255, 100, 100);
			roundrect(295, 345, 705, 455, 100, 100);
		}	

	}
}

void DeleteStudent(Stu* Student)
{
	initgraph(1000, 600);
	DrawBackground();
	setfillcolor(COLORREF RGB(255, 236, 139));
	solidroundrect(300, 150, 700, 250, 100, 100);
	solidroundrect(300, 350, 700, 450, 100, 100);
	setbkmode(TRANSPARENT);//�����ֲ�ȥ���� 
	settextcolor(COLORREF RGB(100, 149, 237));
	settextstyle(65, 0, "����");
	outtextxy(440, 170, "ɾ��");
	outtextxy(440, 370, "�˳�");
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				int SavedMessage = 0;   // ��ʾ�Ѿ����ļ��е�ѧ������������ÿ�����������ˢ�£���Ϊȫ�ֱ������ã���ÿ��Ҫ��ʱ�ȶ�ȡ����¼�ñ�����ֵ���ں�������
				char FindName[10] = "";
				bool flag = true;
				bool Judge = false; //�ж��Ƿ��ҵ�
				int i, j;//����ѭ������
				FILE* fp;//�����ļ�ָ��
				if ((fp = fopen("data.txt", "r+")) == NULL)//��ָ���ļ�
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
					//fclose(fp);//�����������ȹر��ļ� fp==NULL ʱ˵���ļ�������,���ùر�һ�������ڵ��ļ�
					continue;//�ص�ԭ����
				}
				while (!feof(fp)) // ˳���ȡ�ļ�������
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//ͳ�Ƶ�ǰ��¼����
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "û������", "��ʾ", MB_ICONINFORMATION);
					return;
				}
				// ������������,��ȡ�û����������
				InputBox(FindName, 9, "������Ҫɾ����У������", "ɾ��", NULL, 0, 0, true);
				for (i = 0; i < SavedMessage; i++)
				{
					if (!strcmp(FindName, Student[i].Name))
					{
						Judge = true;
						for (j = i; j < SavedMessage; j++)
						{
							Student[j] = Student[j + 1];
						}
						SavedMessage--;
						if ((fp = fopen("data.txt", "wb")) == NULL)  // ������a+, ��ΪҪ��ͷ��ʼд 
						{
							HWND wnd = GetHWnd();//�����Ӵ���
							MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
							//fclose(fp);//�����������ȹر��ļ� fp==NULL ʱ˵���ļ�������,���ùر�һ�������ڵ��ļ�
							return;//�ص�ԭ����
						}
						for (j = 0; j < SavedMessage; j++)
						{//�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���
							if (fwrite(&Student[j], LEN, 1, fp) != 1)
							{
								HWND wnd = GetHWnd();//�����Ӵ���
								MessageBox(wnd, "�޷�д���ļ�", NULL, MB_ICONHAND);
								flag = false;
								break;
							}
						}
						if (flag)
						{
							HWND wnd = GetHWnd();//�����Ӵ���
							MessageBox(wnd, "ɾ���ɹ�", "��ʾ", MB_ICONINFORMATION);
						}
						break;
					}
				}
				if (!Judge)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "δ�ҵ���У��", NULL, MB_ICONINFORMATION);
				}
				fclose(fp);
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return;    //�����˳�,���ص�������
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(295, 145, 705, 255, 100, 100);
			roundrect(295, 345, 705, 455, 100, 100);
		}

	}

}

void SortStudent(Stu* Student)
{
	initgraph(1000, 600);
	DrawBackground();
	setfillcolor(COLORREF RGB(255, 236, 139));
	solidroundrect(300, 150, 700, 250, 100, 100);
	solidroundrect(300, 350, 700, 450, 100, 100);
	solidroundrect(850, 480, 950, 530, 50, 50);
	setbkmode(TRANSPARENT);//�����ֲ�ȥ���� 
	settextcolor(COLORREF RGB(100, 149, 237));
	settextstyle(50, 0, "����");
	outtextxy(360, 170, "��У�������");
	outtextxy(360, 370, "��У��ݽ���");
	settextstyle(30, 0, "����");
	outtextxy(870, 490, "�˳�");
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				int SavedMessage = 0;   // ��ʾ�Ѿ����ļ��е�ѧ������������ÿ�����������ˢ�£���Ϊȫ�ֱ������ã���ÿ��Ҫ��ʱ�ȶ�ȡ����¼�ñ�����ֵ���ں�������
				int i;//����ѭ������
				bool flag=true;
				FILE* fp;//�����ļ�ָ��
				if ((fp = fopen("data.txt", "r+")) == NULL)//��ָ���ļ�
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
					//fclose(fp);//�����������ȹر��ļ� fp==NULL ʱ˵���ļ�������,���ùر�һ�������ڵ��ļ�
					continue;//�ص�ԭ����
				}
				while (!feof(fp)) // ˳���ȡ�ļ�������
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//ͳ�Ƶ�ǰ��¼����
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "û������", "��ʾ", MB_ICONINFORMATION);//û������,ֱ�ӷ���
					return;
				}
				// ִ���㷨
				UpQsort(Student, 0, SavedMessage - 1);
				if ((fp = fopen("data.txt", "wb")) == NULL)  // ������a+, ��ΪҪ��ͷ��ʼд 
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);		
					return;//�ص�ԭ����
				}
				for (i = 0; i < SavedMessage; i++)
				{//�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���
					if (fwrite(&Student[i], LEN, 1, fp) != 1)
					{
						HWND wnd = GetHWnd();//�����Ӵ���
						MessageBox(wnd, "�޷�д���ļ�", NULL, MB_ICONHAND);
						flag = false;
						break;
					}
				}
				if (flag)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "����ɹ�", "��ʾ", MB_ICONINFORMATION);
				}
				fclose(fp);
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				int SavedMessage = 0;   // ��ʾ�Ѿ����ļ��е�ѧ������������ÿ�����������ˢ�£���Ϊȫ�ֱ������ã���ÿ��Ҫ��ʱ�ȶ�ȡ����¼�ñ�����ֵ���ں�������
				int i;//����ѭ������
				bool flag = true;
				FILE* fp;//�����ļ�ָ��
				if ((fp = fopen("data.txt", "r+")) == NULL)//��ָ���ļ�
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
					//fclose(fp);//�����������ȹر��ļ� fp==NULL ʱ˵���ļ�������,���ùر�һ�������ڵ��ļ�
					continue;//�ص�ԭ����
				}
				while (!feof(fp)) // ˳���ȡ�ļ�������
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//ͳ�Ƶ�ǰ��¼����
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "û������", "��ʾ", MB_ICONINFORMATION);//û������,ֱ�ӷ���
					return;
				}
				// ִ���㷨
				DownQsort(Student, 0, SavedMessage - 1);
				if ((fp = fopen("data.txt", "wb")) == NULL)  // ������a+, ��ΪҪ��ͷ��ʼд���ڴ�֮ǰ�����ԭ���ļ�����ͷ��ʼд
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
					return;//�ص�ԭ����
				}
				for (i = 0; i < SavedMessage; i++)
				{//�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���
					if (fwrite(&Student[i], LEN, 1, fp) != 1)
					{
						HWND wnd = GetHWnd();//�����Ӵ���
						MessageBox(wnd, "�޷�д���ļ�", NULL, MB_ICONHAND);
						flag = false;
						break;
					}
				}
				if (flag)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "����ɹ�", "��ʾ", MB_ICONINFORMATION);
				}
				fclose(fp);
			}
		}
		else if (msg.x >= 850 && msg.x <= 950 && msg.y >= 480 && msg.y <= 530)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(845, 475, 955, 535, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return;    //�����˳�,���ص�������
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(295, 145, 705, 255, 100, 100);
			roundrect(295, 345, 705, 455, 100, 100);
			roundrect(845, 475, 955, 535, 50, 50);
		}

	}
}

void FindStudent(Stu* Student)
{
	initgraph(1000, 600);
	DrawBackground();
	setfillcolor(COLORREF RGB(255, 236, 139));
	solidroundrect(300, 150, 700, 250, 100, 100);
	solidroundrect(300, 350, 700, 450, 100, 100);
	setbkmode(TRANSPARENT);//�����ֲ�ȥ���� 
	settextcolor(COLORREF RGB(100, 149, 237));
	settextstyle(65, 0, "����");
	outtextxy(440, 170, "����");
	outtextxy(440, 370, "�˳�");
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				int SavedMessage = 0;   // ��ʾ�Ѿ����ļ��е�ѧ������������ÿ�����������ˢ�£���Ϊȫ�ֱ������ã���ÿ��Ҫ��ʱ�ȶ�ȡ����¼�ñ�����ֵ���ں�������
				char FindName[10] = "";
				bool Judge = false; //�ж��Ƿ��ҵ�
				int i, j;//����ѭ������
				FILE* fp;//�����ļ�ָ��
				if ((fp = fopen("data.txt", "r+")) == NULL)//��ָ���ļ�
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
					//fclose(fp);//�����������ȹر��ļ� fp==NULL ʱ˵���ļ�������,���ùر�һ�������ڵ��ļ�
					continue;//�ص�ԭ����
				}
				while (!feof(fp)) // ˳���ȡ�ļ�������
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//ͳ�Ƶ�ǰ��¼����
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "û������", "��ʾ", MB_ICONINFORMATION);
					return;
				}
				// ������������,��ȡ�û����������
				InputBox(FindName, 9, "������Ҫ���ҵ�У������", "����", NULL, 0, 0, true);
				for (i = 0; i < SavedMessage; i++)
				{
					if (!strcmp(FindName, Student[i].Name))
					{
						Judge = true;
						HWND wnd = GetHWnd();//�����Ӵ���
						MessageBox(wnd, "�ҵ���У��", "��ʾ", MB_ICONINFORMATION);
						OnePersonalInterface(&Student[i]);
						initgraph(1000, 600);
						DrawBackground();
						setfillcolor(COLORREF RGB(255, 236, 139));
						solidroundrect(300, 150, 700, 250, 100, 100);
						solidroundrect(300, 350, 700, 450, 100, 100);
						setbkmode(TRANSPARENT);//�����ֲ�ȥ���� 
						settextcolor(COLORREF RGB(100, 149, 237));
						settextstyle(65, 0, "����");
						outtextxy(440, 170, "����");
						outtextxy(440, 370, "�˳�");
						break;
					}
				}
				if (!Judge)
				{
					HWND wnd = GetHWnd();//�����Ӵ���
					MessageBox(wnd, "δ�ҵ���У��", NULL, MB_ICONINFORMATION);
				}	
				
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return;    //�����˳�,���ص�������
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(295, 145, 705, 255, 100, 100);
			roundrect(295, 345, 705, 455, 100, 100);
		}

	}

}

char ShowaGroupofStudent(Stu* Student,int num,int x)  //չʾһҳ��ѧ����Ϣ  num��ʾ����չʾ�ڼ���ѧ��  x��ʾ�ӵڼ���ѧ����ʼչʾ
{
	initgraph(1000, 600);
	DrawBackground();
	setlinecolor(BLUE);
	line(500, 60, 500, 540);
	line(10, 100, 80, 100);
	line(100, 100, 170, 100);
	line(190, 100, 260, 100);
	line(340, 100, 430, 100);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);//д�ֶ���Ӱ�챳��
	settextstyle(20, 0, "����");
	outtextxy(25, 80, "����");
	outtextxy(115, 80, "�Ա�");
	outtextxy(205, 80, "����");
	outtextxy(345, 80, "�о�����");   //���4������,��þ�д4������

	//line(10, 140, 80, 140);   // ������߾���Ϊ40
	int i, j;
	for (i = 140, j = x; i <= 500; i = i + 40, j++) //i��ʾ������������.��ÿһ����Ϣ������
	{
		//line(10, i, 80, i);
		outtextxy(25, i - 20, Student[j].Name);
	}
	for (i = 140, j = x; i <= 500; i = i + 40, j++)
	{
		//line(100, i, 170, i);
		outtextxy(125, i - 20, Student[j].Sex);
	}
	for (i = 140, j = x; i <= 500; i = i + 40, j++)
	{
		//line(190, i, 260, i);
		outtextxy(200, i - 20,Student[j].Hometown );
	}
	for (i = 140, j = x; i <= 500; i = i + 40, j++)
	{
		//line(340, i, 430, i);
		outtextxy(345, i - 20, Student[j].Field);
	}

	//���Ұ벿�ֵ�ͳ��ͼ
	line(550, 100, 620, 100);
	line(640, 100, 710, 100);
	line(730, 100, 800, 100);
	line(880, 100, 970, 100);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);//д�ֶ���Ӱ�챳��
	settextstyle(20, 0, "����");
	outtextxy(565, 80, "����");
	outtextxy(655, 80, "�Ա�");
	outtextxy(745, 80, "����");
	outtextxy(885, 80, "�о�����");   //���4������,��þ�д4������

	//line(10, 140, 80, 140);   // ������߾���Ϊ40
	if (num >= 10)
	{
		for ( i = 140,  j = x + 10; i <= 500; i = i + 40, j++) //i��ʾ������������.��ÿһ����Ϣ������
		{
			//line(550, i, 620, i);
			outtextxy(565, i - 20, Student[j].Name);
		}
		for ( i = 140,  j = x + 10; i <= 500; i = i + 40, j++)
		{
			//line(640, i, 710, i);
			outtextxy(665, i - 20, Student[j].Sex);
		}
		for ( i = 140,  j = x + 10; i <= 500; i = i + 40, j++)
		{
			//line(730, i, 800, i);
			outtextxy(740, i - 20, Student[j].Hometown);
		}
		for ( i = 140,  j = x + 10; i <= 500; i = i + 40, j++)
		{
			//line(880, i, 970, i);
			outtextxy(885, i - 20, Student[j].Field);
		}
	}

	//����ǰ�����˰�ť
	setfillcolor(COLORREF RGB(135, 206, 250));
	solidroundrect(550, 510, 650, 540, 25, 25);
	solidroundrect(700, 510, 800, 540, 25, 25);
	solidroundrect(850, 510, 950, 540, 25, 25);
	settextstyle(20, 0, "����");// ��һ��������ʾ�ֵĸ߶�
	outtextxy(570, 515, "��һҳ");
	outtextxy(720, 515, "��һҳ");
	outtextxy(880, 515, "�˳�");

	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 550 && msg.x <= 650 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(545, 505, 655, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '1';       //����1��ʾ��ʾ��һҳ�Ľ���
			}
		}
		else if (msg.x >= 700 && msg.x <= 800 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 505, 805, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '2';       //����2��ʾ��ʾ��һҳ�Ľ���
			}
		}
		else if (msg.x >= 850 && msg.x <= 950 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(845, 505, 955, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '0';       //����0��ʾ�˳������˵�����
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(545, 505, 655, 545, 25, 25);
			roundrect(695, 505, 805, 545, 25, 25);
			roundrect(845, 505, 955, 545, 25, 25);
		}
	}
	
}

void ShowAllStudent(Stu* Student)    //ѧ��չʾ���ܵĺ���,��ȡ�ļ�����ת��ÿһҳ��չʾ����
{
	int SavedMessage = 0;        // ��ʾ�����ļ��е�ѧ������,�ȴ���������
	FILE* fp;// �����ļ�ָ��
	if ((fp = fopen("data.txt", "rb")) == NULL)
	{
		HWND wnd = GetHWnd();
		MessageBox(wnd, "�޷����ļ�", NULL, MB_ICONHAND);
		return;
	}
	while (!feof(fp))
	{
		if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
		{
			SavedMessage++;
		}
	}
	if (SavedMessage == 0)
	{
		HWND wnd = GetHWnd();
		MessageBox(wnd, "û������", "��ʾ", MB_ICONINFORMATION);
		fclose(fp);
		return;
	}
	fclose(fp);  //�ر��ļ�
	int i;
	for (i = 0;;)
	{
		//���ҽ���SavedMessage>=20ʱ����20��ѧ��,����ֵ��������
		char flag = ShowaGroupofStudent(Student, SavedMessage,i);// i��ʾ�Եڼ���ѧ����ͷ   ���øı�SavedMessage��ֵ,��Ϊ������ǰһҳ����һ��,��һҳ����һ������
		if (flag == '0')
		{
			return;
		}
		else if (flag == '1')
		{
			i -= 20;
		}
		else if (flag == '2')
		{
			i += 20;
		}
		if (i < 0 || i >= SavedMessage)
		{
			HWND wnd = GetHWnd();//�����Ӵ���
			MessageBox(wnd, "����߽�", "��ʾ", MB_ICONINFORMATION);
			if (i < 0)
				i += 20;
			if (i >= SavedMessage)
				i -= 20;
		}
		
	}
}

