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


bool cmp(string str1, string str2)
{
	//���̰� ���ٸ� ������ ��
	if (str1.length() == str2.length())
		return str1 < str2;
	//���̰� �ٸ��ٸ� ª�� �ܾ� �켱
	else
		return str1.length() < str2.length();
}
int main() {
	int N, i;
	cin >> N;
	string* str = new string[N];
	for (int i = 0; i < N; i++)
		cin >> str[i];
	//����
	sort(str, str + N, cmp);
	for (int i = 0; i < N; i++)
	{
		//�ߺ� �ܾ� ����
		if ( i!=0 && str[i] == str[i - 1])
			continue;
		cout << str[i] << endl;
	}

}