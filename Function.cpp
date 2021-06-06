#include<graphics.h>
#include"data.h"
#include<conio.h>
#include<stdio.h>

//画背景图
void DrawBackground()
{
	setbkcolor(WHITE);   //设置背景颜色为白色
	cleardevice();		//用背景颜色填充整个界面内
	char topic_1[] = "大工杰出校友管理系统";    //定义标题一
	char topic_2[] = "海纳百川 自强不息 厚德笃学 知行合一";   //定义标题二
	settextstyle(40, 0, "仿宋");     //设置字体样式
	settextcolor(COLORREF RGB(134, 235, 246));  // 设置字体颜色,利用 RGB（x,y,z）来合成颜色
	outtextxy(10, 10, topic_1);//输出字体,前两个参数分别表示头字母的x和y坐标
	settextstyle(30, 0, "华文琥珀"); //设置字体样式
	settextcolor(LIGHTRED);  // 设置字体颜色为浅红
	outtextxy(500, 550, topic_2);//输出字体,前两个参数分别表示头字母的x和y坐标
	setlinecolor(RED);    //设置线条的颜色为红色
	line(10, 50, 400, 50);  //输出线条
	setlinecolor(COLORREF RGB(134, 235, 246));//设置线条颜色
	line(500, 590, 1000, 590); //输出线条
}

// 个人界面,主要实现画图功能
char OnePersonalInterface(Stu* Student)   // 实参为一位学生的信息
{
	initgraph(1000, 600);
	DrawBackground();
	// Student[0]为测试数据
	/*strcpy(Student[0].Name, "毕德显");
	strcpy(Student[0].Sex, "男");
	strcpy(Student[0].Hometown, "山东");
	//Student[0].InSchoolYear = 1949;
	strcpy(Student[0].InSchoolYear, "1949");
	strcpy(Student[0].Identity ,"电机及电气系主任");
	strcpy(Student[0].Profession, "电机及电气系");
	strcpy(Student[0].Field, "国防通信");
	strcpy(Student[0].Introduction, "中国科学院学部委员，中国科学院院士，长期致力于国防通信的教学、科研的领导工作，培养出大批高级电子技术人才，为中国人民解放军通信现代化和指挥自动化建设作出了重要贡献。在中国最早创建了雷达工程专业，率先将自动控制技术、脉冲技术、微波技术和检测理论等应用于雷达工程专业的教学工作中，为把信息论普及到通信、雷达领域进行了开创性探索。");//const char[325]
	strcpy(Student[0].Achievement.Ach_1, "解决了朝鲜战争时期的坑道通信难题");
	strcpy(Student[0].Achievement.Ach_2, "提出将参量放大器作为接收机前端以提高雷达性能的设计思想");
	strcpy(Student[0].Achievement.Ach_3, "提出雷达距离与速度模糊问题中的编码方式");
	*/
	setlinecolor(COLORREF RGB(0, 0, 139));  // RGB（x,y,z）来合成颜色
	line(10, 100, 70, 100);//姓名
	line(400, 100, 460, 100);//性别
	line(780, 100, 840, 100);//籍贯
	line(10, 175, 100, 175);//入校年份
	line(180, 175, 280, 175);//研究领域
	line(430, 175, 490, 175);//系别
	line(660, 175, 760, 175);//在校身份
	line(10, 250, 100, 250);//个人简介
	line(10, 400, 100, 400);//成就1
	line(10, 450, 100, 450);//成就2
	line(10, 500, 100, 500);//成就3
	setbkmode(TRANSPARENT);//避免字擦去背景 
	settextcolor(COLORREF RGB(28, 28, 28));

	settextstyle(30, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(10,70 , "姓名");   // 坐标指的是字的上头的坐标
	settextstyle(30, 0, "仿宋");
	outtextxy(100, 70, Student->Name);
	
	settextstyle(30, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(400, 70, "性别");   // 坐标指的是字的上头的坐标
	settextstyle(30, 0, "仿宋");
	outtextxy(490, 70, Student->Sex);

	settextstyle(30, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(780, 70, "籍贯");   // 坐标指的是字的上头的坐标
	settextstyle(30, 0, "仿宋");
	outtextxy(870, 70, Student->Hometown);

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(10, 150, "入校年份");   // 坐标指的是字的上头的坐标
	settextstyle(25, 0, "仿宋");
	//itoa(Student[0].InSchoolYear, _Year, 10);// 将整形值转化为字符串并绘制图像
	outtextxy(110, 150, Student->InSchoolYear);

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(180, 150, "研究领域");   // 坐标指的是字的上头的坐标
	settextstyle(25, 0, "仿宋");
	outtextxy(300, 150, Student->Field);

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(430, 150, "系别");   // 坐标指的是字的上头的坐标
	settextstyle(25, 0, "仿宋");
	outtextxy(500, 150, Student->Profession);

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(660, 150, "在校身份");   // 坐标指的是字的上头的坐标
	settextstyle(25, 0, "仿宋");
	outtextxy(780, 150, Student->Identity);

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(10, 225, "个人简介");   // 坐标指的是字的上头的坐标
	settextstyle(20, 0, "仿宋");
	
	/*outtextxy(130, 230, "中国科学院学部委员，中国科学院院士，长期致力于国防通信的教学、科研的领导工作，培养出大");
	//一行最多char [87]  设置为85
	outtextxy(130, 255, "批高级电子技术人才，为中国人民解放军通信现代化和指挥自动化建设作出了重要贡献。在中国");
	outtextxy(130, 280, "最早创建了雷达工程专业，率先将自动控制技术、脉冲技术、微波技术和检测理论等应用于雷达");
	outtextxy(130, 305, "工程专业的教学工作中，为把信息论普及到通信、雷达领域进行了开创性探索。");
	*/
	RECT rec = { 130,230,990,370 };   //定义矩形区域类
	//第一个参数为待输出的字符串指针,第二个参数为矩形区域的指针,第三个参数表示采用文字左对齐|文字顶部对齐|自动换行
	drawtext(Student->Introduction, &rec, DT_LEFT | DT_TOP | DT_WORDBREAK);
	//rectangle(130, 230, 990, 370);

	//设置5行文本输入 一行限制显示85个字符（包含\0）
	//一共限制输入5*84/2=210个字
	//成就每行限制输入80个ASCII字符

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(20, 375, "成就1");   // 坐标指的是字的上头的坐标
	settextstyle(20, 0, "仿宋");
	outtextxy(130, 380, Student->Achievement.Ach_1);

	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(20, 425, "成就2");   // 坐标指的是字的上头的坐标
	settextstyle(20, 0, "仿宋");
	outtextxy(130, 430, Student->Achievement.Ach_2);
	
	settextstyle(25, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(20, 475, "成就3");   // 坐标指的是字的上头的坐标
	settextstyle(20, 0, "仿宋");
	outtextxy(130, 480, Student->Achievement.Ach_3);

	// 制作前进后退按钮
	setfillcolor(COLORREF RGB(135, 206, 250));
	solidroundrect(550, 510, 650, 540, 25, 25);
	solidroundrect(700, 510, 800, 540, 25, 25);
	solidroundrect(850, 510, 950, 540, 25, 25);
	settextstyle(20, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(570, 515, "上一位");
	outtextxy(720, 515, "下一位");
	outtextxy(880, 515, "退出");
	
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 550 && msg.x <= 650 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(545, 505, 655, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '1';       //返回1表示显示上一个人的界面
			}
		}
		else if (msg.x >= 700 && msg.x <= 800 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 505, 805, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '2';       //返回2表示显示下一个人的界面
			}
		}
		else if(msg.x >= 850 && msg.x <= 950 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(845, 505, 955, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '0';       //返回0表示退出到主菜单界面
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

// 信息界面的核心,读取文件,跳转
void PersonalInterface(Stu* Student)
{
	//AllMessage 为 n 表示序号为0~n-1的校友信息存入,总计存入n名校友信息
	int AllMessage = 0;   // 表示已经在文件中的学生数量，由于每次启动程序后都刷新，设为全局变量无用，故每次要用时先读取，记录该变量的值便于后续操作
	FILE* fp;//定义文件指针
	if ((fp = fopen("data.txt", "rb")) == NULL)//打开指定文件
	{
		HWND wnd = GetHWnd();//创建子窗口
		MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
		//fclose(fp);//返回主界面先关闭文件
		return;//没有成功打开,则回到菜单界面
	}
	while (!feof(fp)) // 顺序读取文件中数据
	{
		if (fread(&Student[AllMessage], LEN, 1, fp) == 1)
			AllMessage++;//统计当前记录条数
	}
	if (AllMessage == 0)
	{
		HWND wnd = GetHWnd();//创建子窗口
		MessageBox(wnd, "没有数据", "提示", MB_ICONINFORMATION);
		fclose(fp);//返回主界面先关闭文件
		return;//没有得到数据,则回到菜单界面
	}
	fclose(fp);
	int i;//循环变量
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
			HWND wnd = GetHWnd();//创建子窗口
			MessageBox(wnd, "到达边界", "提示", MB_ICONINFORMATION);
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
	setbkmode(TRANSPARENT);//避免字擦去背景 
	settextcolor(COLORREF RGB(100 ,149, 237));
	settextstyle(65, 0, "宋体");
	outtextxy(440, 170, "添加");
	outtextxy(440, 370, "退出");
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				int SavedMessage = 0;   // 表示已经在文件中的学生数量，由于每次启动程序后都刷新，设为全局变量无用，故每次要用时先读取，记录该变量的值便于后续操作
				FILE* fp;//定义文件指针
				if ((fp = fopen("data.txt", "ab+")) == NULL)//打开指定文件，如果没有则创建
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
					//fclose(fp);//返回主界面先关闭文件 fp==NULL 时说明文件不存在,不用关闭一个不存在的文件
					continue;//回到原界面
				}
				while (!feof(fp)) // 顺序读取文件中数据
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//统计当前记录条数
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "没有数据","提示", MB_ICONINFORMATION);
				}
				fp = fopen("data.txt", "ab+");
				// 创建交互界面,获取用户输入的数据
				InputBox(Student[SavedMessage].Name, 9, "输入校友姓名,最多四个汉字", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Sex, 3, "输入校友性别", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Hometown, 7, "输入校友籍贯,最多三个汉字", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].InSchoolYear, 5, "输入校友入校年份", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Field, 9, "输入校友研究领域,最多四个汉字", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Profession, 13, "输入校友系别,最多六个汉字", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Identity, 17, "输入校友在校身份,最多八个汉字", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Introduction, 425, "输入校友个人简介", "录入", NULL, 0, 0, true);  
				InputBox(Student[SavedMessage].Achievement.Ach_1, 79, "输入校友成就1,最多29个汉字", "录入", NULL, 0, 0, true);  //以单行形式输入
				InputBox(Student[SavedMessage].Achievement.Ach_2, 79, "输入校友成就2,最多29个汉字", "录入", NULL, 0, 0, true);
				InputBox(Student[SavedMessage].Achievement.Ach_3, 79, "输入校友成就3,最多29个汉字", "录入", NULL, 0, 0, true);

				if (fwrite(&Student[SavedMessage], LEN, 1, fp) != 1)    //将新录入的信息写入指定的磁盘文件
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "录入失败", NULL, MB_ICONHAND);
					fclose(fp);//返回主界面先关闭文件
					continue;//回到原界面
				}
				else
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "录入成功", "提示", MB_ICONINFORMATION);
					fclose(fp);//返回主界面先关闭文件
					continue;//回到原界面
				}
				
			}
			
		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return;    //按下退出,返回到主界面
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
	setbkmode(TRANSPARENT);//避免字擦去背景 
	settextcolor(COLORREF RGB(100, 149, 237));
	settextstyle(65, 0, "宋体");
	outtextxy(440, 170, "删除");
	outtextxy(440, 370, "退出");
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				int SavedMessage = 0;   // 表示已经在文件中的学生数量，由于每次启动程序后都刷新，设为全局变量无用，故每次要用时先读取，记录该变量的值便于后续操作
				char FindName[10] = "";
				bool flag = true;
				bool Judge = false; //判定是否找到
				int i, j;//定义循环变量
				FILE* fp;//定义文件指针
				if ((fp = fopen("data.txt", "r+")) == NULL)//打开指定文件
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
					//fclose(fp);//返回主界面先关闭文件 fp==NULL 时说明文件不存在,不用关闭一个不存在的文件
					continue;//回到原界面
				}
				while (!feof(fp)) // 顺序读取文件中数据
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//统计当前记录条数
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "没有数据", "提示", MB_ICONINFORMATION);
					return;
				}
				// 创建交互界面,获取用户输入的数据
				InputBox(FindName, 9, "输入需要删除的校友姓名", "删除", NULL, 0, 0, true);
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
						if ((fp = fopen("data.txt", "wb")) == NULL)  // 不能用a+, 因为要从头开始写 
						{
							HWND wnd = GetHWnd();//创建子窗口
							MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
							//fclose(fp);//返回主界面先关闭文件 fp==NULL 时说明文件不存在,不用关闭一个不存在的文件
							return;//回到原界面
						}
						for (j = 0; j < SavedMessage; j++)
						{//将更改后的记录重新写入指定的磁盘文件中
							if (fwrite(&Student[j], LEN, 1, fp) != 1)
							{
								HWND wnd = GetHWnd();//创建子窗口
								MessageBox(wnd, "无法写入文件", NULL, MB_ICONHAND);
								flag = false;
								break;
							}
						}
						if (flag)
						{
							HWND wnd = GetHWnd();//创建子窗口
							MessageBox(wnd, "删除成功", "提示", MB_ICONINFORMATION);
						}
						break;
					}
				}
				if (!Judge)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "未找到该校友", NULL, MB_ICONINFORMATION);
				}
				fclose(fp);
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return;    //按下退出,返回到主界面
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
	setbkmode(TRANSPARENT);//避免字擦去背景 
	settextcolor(COLORREF RGB(100, 149, 237));
	settextstyle(50, 0, "宋体");
	outtextxy(360, 170, "入校年份升序");
	outtextxy(360, 370, "入校年份降序");
	settextstyle(30, 0, "宋体");
	outtextxy(870, 490, "退出");
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				int SavedMessage = 0;   // 表示已经在文件中的学生数量，由于每次启动程序后都刷新，设为全局变量无用，故每次要用时先读取，记录该变量的值便于后续操作
				int i;//定义循环变量
				bool flag=true;
				FILE* fp;//定义文件指针
				if ((fp = fopen("data.txt", "r+")) == NULL)//打开指定文件
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
					//fclose(fp);//返回主界面先关闭文件 fp==NULL 时说明文件不存在,不用关闭一个不存在的文件
					continue;//回到原界面
				}
				while (!feof(fp)) // 顺序读取文件中数据
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//统计当前记录条数
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "没有数据", "提示", MB_ICONINFORMATION);//没有数据,直接返回
					return;
				}
				// 执行算法
				UpQsort(Student, 0, SavedMessage - 1);
				if ((fp = fopen("data.txt", "wb")) == NULL)  // 不能用a+, 因为要从头开始写 
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);		
					return;//回到原界面
				}
				for (i = 0; i < SavedMessage; i++)
				{//将更改后的记录重新写入指定的磁盘文件中
					if (fwrite(&Student[i], LEN, 1, fp) != 1)
					{
						HWND wnd = GetHWnd();//创建子窗口
						MessageBox(wnd, "无法写入文件", NULL, MB_ICONHAND);
						flag = false;
						break;
					}
				}
				if (flag)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "排序成功", "提示", MB_ICONINFORMATION);
				}
				fclose(fp);
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				int SavedMessage = 0;   // 表示已经在文件中的学生数量，由于每次启动程序后都刷新，设为全局变量无用，故每次要用时先读取，记录该变量的值便于后续操作
				int i;//定义循环变量
				bool flag = true;
				FILE* fp;//定义文件指针
				if ((fp = fopen("data.txt", "r+")) == NULL)//打开指定文件
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
					//fclose(fp);//返回主界面先关闭文件 fp==NULL 时说明文件不存在,不用关闭一个不存在的文件
					continue;//回到原界面
				}
				while (!feof(fp)) // 顺序读取文件中数据
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//统计当前记录条数
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "没有数据", "提示", MB_ICONINFORMATION);//没有数据,直接返回
					return;
				}
				// 执行算法
				DownQsort(Student, 0, SavedMessage - 1);
				if ((fp = fopen("data.txt", "wb")) == NULL)  // 不能用a+, 因为要从头开始写，在此之前先清空原有文件，从头开始写
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
					return;//回到原界面
				}
				for (i = 0; i < SavedMessage; i++)
				{//将更改后的记录重新写入指定的磁盘文件中
					if (fwrite(&Student[i], LEN, 1, fp) != 1)
					{
						HWND wnd = GetHWnd();//创建子窗口
						MessageBox(wnd, "无法写入文件", NULL, MB_ICONHAND);
						flag = false;
						break;
					}
				}
				if (flag)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "排序成功", "提示", MB_ICONINFORMATION);
				}
				fclose(fp);
			}
		}
		else if (msg.x >= 850 && msg.x <= 950 && msg.y >= 480 && msg.y <= 530)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(845, 475, 955, 535, 50, 50);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return;    //按下退出,返回到主界面
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
	setbkmode(TRANSPARENT);//避免字擦去背景 
	settextcolor(COLORREF RGB(100, 149, 237));
	settextstyle(65, 0, "宋体");
	outtextxy(440, 170, "查找");
	outtextxy(440, 370, "退出");
	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 300 && msg.x <= 700 && msg.y >= 150 && msg.y <= 250)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 145, 705, 255, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				int SavedMessage = 0;   // 表示已经在文件中的学生数量，由于每次启动程序后都刷新，设为全局变量无用，故每次要用时先读取，记录该变量的值便于后续操作
				char FindName[10] = "";
				bool Judge = false; //判定是否找到
				int i, j;//定义循环变量
				FILE* fp;//定义文件指针
				if ((fp = fopen("data.txt", "r+")) == NULL)//打开指定文件
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
					//fclose(fp);//返回主界面先关闭文件 fp==NULL 时说明文件不存在,不用关闭一个不存在的文件
					continue;//回到原界面
				}
				while (!feof(fp)) // 顺序读取文件中数据
				{
					if (fread(&Student[SavedMessage], LEN, 1, fp) == 1)
						SavedMessage++;//统计当前记录条数
				}
				fclose(fp);
				if (SavedMessage == 0)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "没有数据", "提示", MB_ICONINFORMATION);
					return;
				}
				// 创建交互界面,获取用户输入的数据
				InputBox(FindName, 9, "输入需要查找的校友姓名", "查找", NULL, 0, 0, true);
				for (i = 0; i < SavedMessage; i++)
				{
					if (!strcmp(FindName, Student[i].Name))
					{
						Judge = true;
						HWND wnd = GetHWnd();//创建子窗口
						MessageBox(wnd, "找到该校友", "提示", MB_ICONINFORMATION);
						OnePersonalInterface(&Student[i]);
						initgraph(1000, 600);
						DrawBackground();
						setfillcolor(COLORREF RGB(255, 236, 139));
						solidroundrect(300, 150, 700, 250, 100, 100);
						solidroundrect(300, 350, 700, 450, 100, 100);
						setbkmode(TRANSPARENT);//避免字擦去背景 
						settextcolor(COLORREF RGB(100, 149, 237));
						settextstyle(65, 0, "宋体");
						outtextxy(440, 170, "查找");
						outtextxy(440, 370, "退出");
						break;
					}
				}
				if (!Judge)
				{
					HWND wnd = GetHWnd();//创建子窗口
					MessageBox(wnd, "未找到该校友", NULL, MB_ICONINFORMATION);
				}	
				
			}

		}
		else if (msg.x >= 300 && msg.x <= 700 && msg.y >= 350 && msg.y <= 450)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(295, 345, 705, 455, 100, 100);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return;    //按下退出,返回到主界面
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

char ShowaGroupofStudent(Stu* Student,int num,int x)  //展示一页的学生信息  num表示具体展示第几个学生  x表示从第几名学生开始展示
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
	setbkmode(TRANSPARENT);//写字而不影响背景
	settextstyle(20, 0, "宋体");
	outtextxy(25, 80, "姓名");
	outtextxy(115, 80, "性别");
	outtextxy(205, 80, "籍贯");
	outtextxy(345, 80, "研究领域");   //最多4个汉字,最好就写4个汉字

	//line(10, 140, 80, 140);   // 纵向横线距离为40
	int i, j;
	for (i = 140, j = x; i <= 500; i = i + 40, j++) //i表示纵向伸缩距离.对每一个信息都适用
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

	//画右半部分的统计图
	line(550, 100, 620, 100);
	line(640, 100, 710, 100);
	line(730, 100, 800, 100);
	line(880, 100, 970, 100);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);//写字而不影响背景
	settextstyle(20, 0, "宋体");
	outtextxy(565, 80, "姓名");
	outtextxy(655, 80, "性别");
	outtextxy(745, 80, "籍贯");
	outtextxy(885, 80, "研究领域");   //最多4个汉字,最好就写4个汉字

	//line(10, 140, 80, 140);   // 纵向横线距离为40
	if (num >= 10)
	{
		for ( i = 140,  j = x + 10; i <= 500; i = i + 40, j++) //i表示纵向伸缩距离.对每一个信息都适用
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

	//制作前进后退按钮
	setfillcolor(COLORREF RGB(135, 206, 250));
	solidroundrect(550, 510, 650, 540, 25, 25);
	solidroundrect(700, 510, 800, 540, 25, 25);
	solidroundrect(850, 510, 950, 540, 25, 25);
	settextstyle(20, 0, "宋体");// 第一个参数表示字的高度
	outtextxy(570, 515, "上一页");
	outtextxy(720, 515, "下一页");
	outtextxy(880, 515, "退出");

	MOUSEMSG msg;//定义鼠标消息
	while (true)
	{
		msg = GetMouseMsg();
		// 鼠标触及目标区域后显示
		if (msg.x >= 550 && msg.x <= 650 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(545, 505, 655, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '1';       //返回1表示显示上一页的界面
			}
		}
		else if (msg.x >= 700 && msg.x <= 800 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(695, 505, 805, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '2';       //返回2表示显示下一页的界面
			}
		}
		else if (msg.x >= 850 && msg.x <= 950 && msg.y >= 510 && msg.y <= 540)
		{
			setlinecolor(COLORREF RGB(221, 160, 221));
			roundrect(845, 505, 955, 545, 25, 25);
			if (msg.uMsg == WM_LBUTTONDOWN)
			{		//如果按下鼠标左键实现相应功能.
				return '0';       //返回0表示退出到主菜单界面
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

void ShowAllStudent(Stu* Student)    //学生展示功能的核心,读取文件并跳转到每一页的展示界面
{
	int SavedMessage = 0;        // 表示已在文件中的学生数量,等待后续处理
	FILE* fp;// 定义文件指针
	if ((fp = fopen("data.txt", "rb")) == NULL)
	{
		HWND wnd = GetHWnd();
		MessageBox(wnd, "无法打开文件", NULL, MB_ICONHAND);
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
		MessageBox(wnd, "没有数据", "提示", MB_ICONINFORMATION);
		fclose(fp);
		return;
	}
	fclose(fp);  //关闭文件
	int i;
	for (i = 0;;)
	{
		//当且仅当SavedMessage>=20时大于20名学生,返回值才有意义
		char flag = ShowaGroupofStudent(Student, SavedMessage,i);// i表示以第几名学生开头   不用改变SavedMessage的值,因为不会遇前一页不足一半,后一页超过一半的情况
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
			HWND wnd = GetHWnd();//创建子窗口
			MessageBox(wnd, "到达边界", "提示", MB_ICONINFORMATION);
			if (i < 0)
				i += 20;
			if (i >= SavedMessage)
				i -= 20;
		}
		
	}
}

