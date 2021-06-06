#include <cstdio>
#include <cstdlib>
#include"data.h"

using namespace std;

// 快速排序算法

//升序
void UpQsort(Stu* a, int L, int R)   //L R 为排序的下标范围
{
    if (L >= R)
        return;   //递归终止
    Stu temp= a[L]; //储存a[L]的值,因为此后找不到原来的a[L]
    int x = atoi(a[L].InSchoolYear); // 枢轴元素(分界点)
    int i = L;
    int j = R;

    while (i < j)
    {
        while (i < j && atoi(a[j].InSchoolYear) >= x)
        {
            j--;
        }
        a[i] = a[j];
        while (i < j && atoi(a[i].InSchoolYear) <= x)
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = temp;
    UpQsort(a, L, i - 1); //左半区间递归调用
    UpQsort(a, i + 1, R); //右半区间递归调用
}

//降序
void DownQsort(Stu* a, int L, int R)   //L R 为排序的下标范围
{
    if (L >= R)
        return;   //递归终止
    Stu temp = a[L]; //储存a[L]的值,因为此后找不到原来的a[L]
    int x = atoi(a[L].InSchoolYear); // 枢轴元素(分界点)
    int i = L;
    int j = R;

    while (i < j)
    {
        while (i < j && atoi(a[j].InSchoolYear) <= x)
        {
            j--;
        }
        a[i] = a[j];
        while (i < j && atoi(a[i].InSchoolYear) >= x)
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = temp;
    DownQsort(a, L, i - 1); //左半区间递归调用
    DownQsort(a, i + 1, R); //右半区间递归调用
}

