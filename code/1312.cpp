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

int main() {
    int A, B, N, ans = 0;
    cin >> A >> B >> N;
    
    //�����������ٸ� 0 ���
    if (A % B == 0)
    {
        cout << 0;
        return 0;
    }
    else
        A %= B;

    for (int i = 0; i < N; i++)
    {
        A *= 10;
        ans = (int)A / B;
        A %= B;
    }
    cout << ans;
}