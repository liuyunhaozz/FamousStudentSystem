#include<graphics.h>
#include"data.h"

int password = 1234;//��ʼ����

char PreLogIn(void)
{
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	char topic[] = "�󹤽ܳ�У�ѹ���ϵͳ";
	settextstyle(80, 0, "����");
	//setbkmode(TRANSPARENT);
	settextcolor(COLORREF RGB(134, 235, 246));  // RGB��x,y,z�����ϳ���ɫ
	outtextxy(100, 100, topic);//ͷ��ĸ��x��y����
	setfillcolor(RGB(134, 235, 246));        //��������������õ�ǰ�豸�����ɫ��
	//����������ڻ��б߿��������,�ú���ʹ�õ�ǰ���κ͵�ǰ�����ʽ����������������
	fillrectangle(300, 350, 700, 400);//����İ�ť
	fillrectangle(300, 450, 700, 500);//����İ�ť
	fillrectangle(300, 250, 700, 300);
	settextstyle(40, 0, "����");//��������������õ�ǰ������ʽ
	settextcolor(GREEN);
	setbkmode(TRANSPARENT);//����������Ϊ͸��������д��
	outtextxy(400, 350, "����Ա��¼");
	outtextxy(450, 450, "�˳�");
	outtextxy(415, 250, "�û���¼");
	MOUSEMSG msg;//���������Ϣ
	while (true)
	{
		msg = GetMouseMsg();
		// ��괥��Ŀ���������ʾ
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 400)
		{
			setlinecolor(LIGHTGREEN);//��������������õ�ǰ�豸������ɫ��
			rectangle(290, 340, 710, 410);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//�������������ʵ����Ӧ����.
				return '1';        //����Ա��¼
			}
		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 450 && msg.y <= 500)
		{
			setlinecolor(LIGHTGREEN);
			rectangle(290, 440, 710, 510);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '0';          //�˳�ϵͳ
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 250 && msg.y <= 300)
		{
			setlinecolor(LIGHTGREEN);
			rectangle(290, 240, 710, 310);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '2';      //�û���¼
			}

		}
		else
		{
			setlinecolor(WHITE);
			rectangle(290, 340, 710, 410);
			rectangle(290, 440, 710, 510);
			rectangle(290, 240, 710, 310);
		}
	}

}

bool LogIn(void)// ����4λ��  ������ͷ�ļ�data.h��
{
	char STRanswer[5];
	for (int i = 1; i <= 3; i++)
	{
		// ������ʱ��ȡ��ֱ���˳�����
		if (InputBox(STRanswer, 5, "�������¼����,�������������Զ��˳�ϵͳ", "��¼", NULL, 0, 0, false) == false)
		{
			break;
		}
		else
		{
			int answer = atoi(STRanswer);
			if (answer == password)
			{
				HWND wnd = GetHWnd();
				MessageBox(wnd, "����ɹ�", "��ʾ", NULL);
				return true;
			}
			else
			{
				HWND wnd = GetHWnd();
				MessageBox(wnd, "�������", NULL, MB_ICONHAND);
			}
		}
	}
	return false;
}

