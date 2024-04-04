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
    //필요한 랜선 N, 기존 랜선 K
    unsigned int N, K, i, maxi;
    cin >> K >> N;
    unsigned int sum = 0;
    unsigned int* arr = new unsigned int[K];

    for (i = 0; i < K; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
    unsigned int left = 1, mid, right = maxi, ans = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;
        unsigned int now = 0;

        for (i = 0; i < K; i++)
        {
            now += arr[i] / mid;
        }
        if (now >= N)
        {
            left = mid + 1;
            ans = max(ans, mid);
        }
        else
            right = mid - 1;
    }
    cout << ans;
}