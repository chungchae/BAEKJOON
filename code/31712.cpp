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
    int A1, A2, B1, B2, C1, C2, HP;
    cin >> A1 >> A2;
    cin >> B1 >> B2;
    cin >> C1 >> C2;
    cin >> HP;

    int time = 0;

    while (1)
    {
        if (time % A1 == 0)
        {
            HP -= A2;
            if (HP <= 0)
                break;
        }
        if (time % B1 == 0)
        {
            HP -= B2;
            if (HP <= 0)
                break;
        }
        if (time % C1 == 0)
        {
            HP -= C2;
            if (HP <= 0)
                break;
        }
        time++;
    }
    cout << time;
}