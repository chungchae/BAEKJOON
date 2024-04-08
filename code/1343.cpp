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
	string first;
	cin >> first;

	int left, right;
	left = 0; right = 0;

	int i = 0;

	while (right < first.length())
	{
		if (first[right] == '.')
		{
			right++;
		}
		else
		{//문자가 나오면, .이 나올때까지 right 증가
			left = right;
			while (first[right] != '.' && right < first.length())
			{
				right++;
			}
			//문자의 개수가 홀수라면 -1 출력 후 종료
			if ((right - left) % 2 == 1)
			{
				cout << "-1";
				return 0;
			}
			else
			{
				//2개 이하로 남을때까지 AAAA를 채움
				while (right - left > 2)
				{
					first.replace(left, 4, "AAAA");
					left += 4;
				}
				//2개 남았다면 BB로 채움
				if (right - left == 2)
				{
					first.replace(left, 2, "BB");
					left += 2;
				}
			}
		}
	}
	cout << first;
	return 0;
}