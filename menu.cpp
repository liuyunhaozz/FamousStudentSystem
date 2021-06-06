#include<graphics.h>

char Admin_menu(void)
{
	// 制作主菜单界面
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	char topic_1[] = "大工杰出校友管理系统";
	char topic_2[] = "海纳百川 自强不息 厚德笃学 知行合一";
	settextstyle(40, 0, "仿宋");
	settextcolor(COLORREF RGB(134, 235, 246));  // RGB（x,y,z）来合成颜色
	outtextxy(10, 10, topic_1);//头字母的x和y坐标
	settextstyle(30, 0, "华文琥珀");
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
	settextstyle(40, 0, "宋体");//这个函数用于设置当前字体样式
	settextcolor(COLORREF RGB(147, 112, 219));
	setbkmode(TRANSPARENT);//写字而不影响背景
	outtextxy(120, 165, "个人界面");
	outtextxy(155, 340, "添加");
	outtextxy(460, 165, "查找");
	outtextxy(760, 165, "排序");
	outtextxy(760, 340, "展示");
	outtextxy(465, 340, "删除");
	settextstyle(25, 0, "宋体");//这个函数用于设置当前字体样式
	outtextxy(825, 490, "退出");
	//setlinecolor(COLORREF RGB(221, 160, 221));//这个函数用于设置当前设备画线颜色。不行,必须紧接在上面
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 100 && msg.x <= 300 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(95, 120, 305, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '1';       //返回1表示进行第一个功能
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
	// 制作主菜单界面
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	char topic_1[] = "大工杰出校友管理系统";
	char topic_2[] = "海纳百川 自强不息 厚德笃学 知行合一";
	settextstyle(40, 0, "仿宋");
	settextcolor(COLORREF RGB(134, 235, 246));  // RGB（x,y,z）来合成颜色
	outtextxy(10, 10, topic_1);//头字母的x和y坐标
	settextstyle(30, 0, "华文琥珀");
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
	settextstyle(40, 0, "宋体");//这个函数用于设置当前字体样式
	settextcolor(COLORREF RGB(147, 112, 219));
	setbkmode(TRANSPARENT);//写字而不影响背景
	outtextxy(120, 165, "个人界面");
	outtextxy(460, 165, "查找");
	outtextxy(760, 165, "展示");
	settextstyle(25, 0, "宋体");//这个函数用于设置当前字体样式
	outtextxy(825, 490, "退出");
	//setlinecolor(COLORREF RGB(221, 160, 221));//这个函数用于设置当前设备画线颜色。不行,必须紧接在上面
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 100 && msg.x <= 300 && msg.y >= 125 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(95, 120, 305, 255, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '1';       //返回1表示进行第一个功能
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

