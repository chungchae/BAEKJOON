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
		{//���ڰ� ������, .�� ���ö����� right ����
			left = right;
			while (first[right] != '.' && right < first.length())
			{
				right++;
			}
			//������ ������ Ȧ����� -1 ��� �� ����
			if ((right - left) % 2 == 1)
			{
				cout << "-1";
				return 0;
			}
			else
			{
				//2�� ���Ϸ� ���������� AAAA�� ä��
				while (right - left > 2)
				{
					first.replace(left, 4, "AAAA");
					left += 4;
				}
				//2�� ���Ҵٸ� BB�� ä��
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