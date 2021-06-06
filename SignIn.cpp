#include<graphics.h>
#include"data.h"

int password = 1234;//初始密码

char PreLogIn(void)
{
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	char topic[] = "大工杰出校友管理系统";
	settextstyle(80, 0, "仿宋");
	//setbkmode(TRANSPARENT);
	settextcolor(COLORREF RGB(134, 235, 246));  // RGB（x,y,z）来合成颜色
	outtextxy(100, 100, topic);//头字母的x和y坐标
	setfillcolor(RGB(134, 235, 246));        //这个函数用于设置当前设备填充颜色。
	//这个函数用于画有边框的填充矩形,该函数使用当前线形和当前填充样式绘制有外框的填充矩形
	fillrectangle(300, 350, 700, 400);//上面的按钮
	fillrectangle(300, 450, 700, 500);//下面的按钮
	fillrectangle(300, 250, 700, 300);
	settextstyle(40, 0, "仿宋");//这个函数用于设置当前字体样式
	settextcolor(GREEN);
	setbkmode(TRANSPARENT);//将背景设置为透明，可以写字
	outtextxy(400, 350, "管理员登录");
	outtextxy(450, 450, "退出");
	outtextxy(415, 250, "用户登录");
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 400)
		{
			setlinecolor(LIGHTGREEN);//这个函数用于设置当前设备画线颜色。
			rectangle(290, 340, 710, 410);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '1';        //管理员登录
			}
		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 450 && msg.y <= 500)
		{
			setlinecolor(LIGHTGREEN);
			rectangle(290, 440, 710, 510);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '0';          //退出系统
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 250 && msg.y <= 300)
		{
			setlinecolor(LIGHTGREEN);
			rectangle(290, 240, 710, 310);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				return '2';      //用户登录
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

bool LogIn(void)// 密码4位数  包含在头文件data.h中
{
	char STRanswer[5];
	for (int i = 1; i <= 3; i++)
	{
		// 输密码时按取消直接退出程序
		if (InputBox(STRanswer, 5, "请输入登录密码,三次输入错误后将自动退出系统", "登录", NULL, 0, 0, false) == false)
		{
			break;
		}
		else
		{
			int answer = atoi(STRanswer);
			if (answer == password)
			{
				HWND wnd = GetHWnd();
				MessageBox(wnd, "登入成功", "提示", NULL);
				return true;
			}
			else
			{
				HWND wnd = GetHWnd();
				MessageBox(wnd, "密码错误", NULL, MB_ICONHAND);
			}
		}
	}
	return false;
}

