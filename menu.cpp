#include<graphics.h>

char Admin_menu(void)
{
	// �������˵�����
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	char topic_1[] = "�󹤽ܳ�У�ѹ���ϵͳ";
	char topic_2[] = "���ɰٴ� ��ǿ��Ϣ �����ѧ ֪�к�һ";
	settextstyle(40, 0, "����");
	settextcolor(COLORREF RGB(134, 235, 246));  // RGB��x,y,z�����ϳ���ɫ
	outtextxy(10, 10, topic_1);//ͷ��ĸ��x��y����
	settextstyle(30, 0, "��������");
	settextcolor(LIGHTRED);
	outtextxy(500, 550, topic_2);
	setlinecolor(RED);
	line(10, 50, 400, 50);
	setlinecolor(COLORREF RGB(134, 235, 246));
	line(500, 590, 1000, 590);
	setfillcolor(COLORREF RGB(238, 232, 170));
	solidroundrect(100, 125, 300, 250, 50, 50);
	solidroundrect(100, 300, 300, 425, 50, 50);
	solidroundrect(400, 125, 600, 250, 50, 50);
	solidroundrect(700, 125, 900, 250, 50, 50);
	solidroundrect(400, 300, 600, 425, 50, 50);
	solidroundrect(700, 300, 900, 425, 50, 50);
	solidroundrect(800, 475, 900, 525, 25, 25);
	settextstyle(40, 0, "����");//��������������õ�ǰ������ʽ
	settextcolor(COLORREF RGB(147, 112, 219));
	setbkmode(TRANSPARENT);//д�ֶ���Ӱ�챳��
	outtextxy(120, 165, "���˽���");
	outtextxy(155, 340, "���");
	outtextxy(460, 165, "����");
	outtextxy(760, 165, "����");
	outtextxy(760, 340, "չʾ");
	outtextxy(465, 340, "ɾ��");
	settextstyle(25, 0, "����");//��������������õ�ǰ������ʽ
	outtextxy(825, 490, "�˳�");
	//setlinecolor(COLORREF RGB(221, 160, 221));//��������������õ�ǰ�豸������ɫ������,�������������
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 100 && msg.x <= 300 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(95, 120, 305, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '1';       //����1��ʾ���е�һ������
			}
		}
		else if (msg.x >= 400 && msg.x <= 600 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(395, 120, 605, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '2';
			}

		}
		else if (msg.x >= 700 && msg.x <= 900 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 120, 905, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '3';
			}
		}
		else if (msg.x >= 100 && msg.x <= 300 && msg.y >= 300 && msg.y <= 425)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(95, 295, 305, 430, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '4';
			}
		}
		else if (msg.x >= 400 && msg.x <= 600 && msg.y >= 300 && msg.y <= 425)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(395, 295, 605, 430, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '5';
			}
		}
		else if (msg.x >= 700 && msg.x <= 900 && msg.y >= 300 && msg.y <= 425)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 295, 905, 430, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '6';
			}
		}
		else if (msg.x >= 800 && msg.x <= 900 && msg.y >= 475 && msg.y <= 525)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(795, 470, 905, 530, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '0';
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(95, 120, 305, 255, 50, 50);
			roundrect(395, 120, 605, 255, 50, 50);
			roundrect(695, 120, 905, 255, 50, 50);
			roundrect(95, 295, 305, 430, 50, 50);
			roundrect(395, 295, 605, 430, 50, 50);
			roundrect(695, 295, 905, 430, 50, 50);
			roundrect(795, 470, 905, 530, 25, 25);
		}
	}

}

char Users_menu(void)
{
	// �������˵�����
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	char topic_1[] = "�󹤽ܳ�У�ѹ���ϵͳ";
	char topic_2[] = "���ɰٴ� ��ǿ��Ϣ �����ѧ ֪�к�һ";
	settextstyle(40, 0, "����");
	settextcolor(COLORREF RGB(134, 235, 246));  // RGB��x,y,z�����ϳ���ɫ
	outtextxy(10, 10, topic_1);//ͷ��ĸ��x��y����
	settextstyle(30, 0, "��������");
	settextcolor(LIGHTRED);
	outtextxy(500, 550, topic_2);
	setlinecolor(RED);
	line(10, 50, 400, 50);
	setlinecolor(COLORREF RGB(134, 235, 246));
	line(500, 590, 1000, 590);
	setfillcolor(COLORREF RGB(238, 232, 170));
	solidroundrect(100, 125, 300, 250, 50, 50);
	solidroundrect(400, 125, 600, 250, 50, 50);
	solidroundrect(700, 125, 900, 250, 50, 50);
	solidroundrect(800, 475, 900, 525, 25, 25);
	settextstyle(40, 0, "����");//��������������õ�ǰ������ʽ
	settextcolor(COLORREF RGB(147, 112, 219));
	setbkmode(TRANSPARENT);//д�ֶ���Ӱ�챳��
	outtextxy(120, 165, "���˽���");
	outtextxy(460, 165, "����");
	outtextxy(760, 165, "չʾ");
	settextstyle(25, 0, "����");//��������������õ�ǰ������ʽ
	outtextxy(825, 490, "�˳�");
	//setlinecolor(COLORREF RGB(221, 160, 221));//��������������õ�ǰ�豸������ɫ������,�������������
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 100 && msg.x <= 300 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(95, 120, 305, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '1';       //����1��ʾ���е�һ������
			}
		}
		else if (msg.x >= 400 && msg.x <= 600 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(395, 120, 605, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '2';
			}

		}
		else if (msg.x >= 700 && msg.x <= 900 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 120, 905, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '3';
			}
		}
	
		else if (msg.x >= 800 && msg.x <= 900 && msg.y >= 475 && msg.y <= 525)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(795, 470, 905, 530, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '0';
			}
		}
		else
		{
			setlinecolor(WHITE);
			roundrect(95, 120, 305, 255, 50, 50);
			roundrect(395, 120, 605, 255, 50, 50);
			roundrect(695, 120, 905, 255, 50, 50);
			roundrect(795, 470, 905, 530, 25, 25);
		}
	}

}

