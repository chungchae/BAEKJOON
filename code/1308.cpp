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

//윤년을 체크하는 함수
bool Ycheck(int Y)
{
    if ((Y % 4 == 0 && Y % 100 != 0) || Y%400 == 0)
        return true;
    else
        return false;
}
//월별 일수를 리턴하는 함수
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
    //두 개의 날짜를 입력받음
    int Y1, M1, D1;
    cin >> Y1 >> M1 >> D1;

    int Y2, M2, D2;
    cin >> Y2 >> M2 >> D2;

    //천년 이상 차이가 나면 "gg" 출력
    if ((Y2 - Y1 > 1000) || ((Y2 - Y1 == 1000)&&(M1<M2)) || ((Y2 - Y1 == 1000)&&(M1==M2)&&(D1<=D2)))
    {
        cout << "gg";
        return 0;
    }

    //첫 번째 날짜의 총 일수를 계산
    int i, sum1 = 0, sum2 = 0;
    for (i = 1; i < Y1; i++)
    {
        //윤년이라면 366, 아니라면 365일을 더하기
        if (Ycheck(i))
            sum1 += 366;
        else
            sum1 += 365;
    }
    //직전달까지 총 일수 더하기
    for (i = 1; i < M1; i++)
        sum1 += Mcheck(i, Y1);
    //남은 일수 더하기
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