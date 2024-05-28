#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>

using namespace std;

//������ üũ�ϴ� �Լ�
bool Ycheck(int Y)
{
    if ((Y % 4 == 0 && Y % 100 != 0) || Y%400 == 0)
        return true;
    else
        return false;
}
//���� �ϼ��� �����ϴ� �Լ�
int Mcheck(int M, int Y)
{
    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
        return 31;
    else if (Ycheck(Y) && M == 2)
        return 29;
    else if (!Ycheck(Y) && M == 2)
        return 28;
    else
        return 30;
}

int main() {
    //�� ���� ��¥�� �Է¹���
    int Y1, M1, D1;
    cin >> Y1 >> M1 >> D1;

    int Y2, M2, D2;
    cin >> Y2 >> M2 >> D2;

    //õ�� �̻� ���̰� ���� "gg" ���
    if ((Y2 - Y1 > 1000) || ((Y2 - Y1 == 1000)&&(M1<M2)) || ((Y2 - Y1 == 1000)&&(M1==M2)&&(D1<=D2)))
    {
        cout << "gg";
        return 0;
    }

    //ù ��° ��¥�� �� �ϼ��� ���
    int i, sum1 = 0, sum2 = 0;
    for (i = 1; i < Y1; i++)
    {
        //�����̶�� 366, �ƴ϶�� 365���� ���ϱ�
        if (Ycheck(i))
            sum1 += 366;
        else
            sum1 += 365;
    }
    //�����ޱ��� �� �ϼ� ���ϱ�
    for (i = 1; i < M1; i++)
        sum1 += Mcheck(i, Y1);
    //���� �ϼ� ���ϱ�
    sum1 += D1;

    for (i = 1; i < Y2; i++)
    {
        if (Ycheck(i))
            sum2 += 366;
        else
            sum2 += 365;
    }
    for (i = 1; i < M2; i++)
        sum2 += Mcheck(i, Y2);
    sum2 += D2;

    cout << "D-" << sum2 - sum1;
    return 0;
}