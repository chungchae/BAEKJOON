#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <deque>

using namespace std;

int main() {
	//vector�� Ǯ�� �ð� �ʰ�!! vector�� �� ���Ұ� �߰��� �� �޸� ���Ҵ� �� ���� ���Ҹ� ����, ���� ���� �� ������ ���ϵ�
	deque<int> v;
	int N, i, temp;
	cin >> N;

	//N���� ���ʴ�� deque�� �߰�
	for (i = N; i > 0; i--)
		v.push_back(i);
	while (v.size() != 1)
	{
		//�� ���� ī�带 ����
		v.pop_back();
		if (v.size() == 1)
			break;

		//�� �� ī�带 �� �Ʒ��� ��ġ
		temp = v.back();
		v.pop_back();
		v.insert(v.begin(), temp);
		if (v.size() == 1)
			break;
	}
	//���� ī�尡 1���̸� �ݺ� ���� �� ������ ī�带 ���
	cout << v.front();
}