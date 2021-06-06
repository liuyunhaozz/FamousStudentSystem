#include <cstdio>
#include <cstdlib>
#include"data.h"

using namespace std;

// ���������㷨

//����
void UpQsort(Stu* a, int L, int R)   //L R Ϊ������±귶Χ
{
    if (L >= R)
        return;   //�ݹ���ֹ
    Stu temp= a[L]; //����a[L]��ֵ,��Ϊ�˺��Ҳ���ԭ����a[L]
    int x = atoi(a[L].InSchoolYear); // ����Ԫ��(�ֽ��)
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
    UpQsort(a, L, i - 1); //�������ݹ����
    UpQsort(a, i + 1, R); //�Ұ�����ݹ����
}

//����
void DownQsort(Stu* a, int L, int R)   //L R Ϊ������±귶Χ
{
    if (L >= R)
        return;   //�ݹ���ֹ
    Stu temp = a[L]; //����a[L]��ֵ,��Ϊ�˺��Ҳ���ԭ����a[L]
    int x = atoi(a[L].InSchoolYear); // ����Ԫ��(�ֽ��)
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
    DownQsort(a, L, i - 1); //�������ݹ����
    DownQsort(a, i + 1, R); //�Ұ�����ݹ����
}

