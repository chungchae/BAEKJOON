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

int cmp(string str1, string str2)
{//�� ���ڿ��� ��, �ٸ� ���ڸ�ŭ ����
	int i;
	int count = 0;
	for (i = 0; i < str1.length(); i++)
	{
		if (str1[i] == '0')
			continue;
		else if (str1[i] != str2[i])
			count++;
	}
	return count;
}
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	string ans;

	if (str2.length() == str1.length())
	{
		cout << cmp(str1, str2);
		return 0;
	}
	int diff = str2.length() - str1.length();

	//���ڿ� ���� ���̸�ŭ append (shift�Ͽ� ���ϱ� ����)
	str1.append(diff, '0');
	int i, j;
	int min = str2.length();

	for (i = 0; i < diff; i++)
	{
		if (cmp(str1, str2) < min)
		{
			//�ּڰ� ����
			min = cmp(str1, str2);
			ans = str1;
		}
		//���� ���ڸ� �� ������ �̵� (���ڿ��� �� ĭ shift)
		str1 = str1.back() + str1;
		str1.pop_back();
	}
	if (cmp(str1, str2) < min)
	{
		min = cmp(str1, str2);
		ans = str1;
	}
	//���� ���ڿ����� diff�� ���
	cout << cmp(ans, str2);
}