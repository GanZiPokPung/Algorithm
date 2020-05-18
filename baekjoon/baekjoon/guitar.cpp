// ������ ��Ÿ�� N�� �귣�� M��
// ���� �귣�忡�� �Ĵ� ŰŸ�� 6�� ����
// ������ �춧�� ����
// �ʿ��� ���� �ּ�

#include <iostream>
#include <algorithm>
using namespace std;

struct price
{
	int package;
	int each;
};

bool cmp1(price& a, price& b)
{
	return a.package < b.package;
}

bool cmp2(price& a, price& b)
{
	return a.each < b.each;
}

int main()
{
	int guitarLine;
	int brands;

	cin >> guitarLine >> brands;

	price* priceInfo = new price[brands];

	for (int i = 0; i < brands; ++i)
	{
		cin >> priceInfo[i].package >> priceInfo[i].each;
	}

	// ��Ű�� ���� �������� ����
	sort(priceInfo, priceInfo + brands, cmp1);
	int minPackage = priceInfo[0].package;
	// ���� ���� �������� ����
	sort(priceInfo, priceInfo + brands, cmp2);
	int minEach = priceInfo[0].each;

	int result = 0;

	// 6���� �Ѵ� ���
	if (6 <= guitarLine)
	{
		// ������ ��°� ��Ű�� ���ݺ��� ��� ���
		if (6 * minEach > minPackage)
		{
			// ��Ű���� ���.
			result += (guitarLine / 6) * minPackage;
			guitarLine %= 6;
		}
		else
		{
			// ������ ���.
			result += guitarLine * minEach;
			guitarLine = 0;
		}
	}

	// ��Ű���� ��� ����� ��Ÿ�� ���� ���ų�
	// Ȥ�� ����� ��Ÿ�� ���� 6�� ���� ���� ���
	if (0 < guitarLine)
	{
		// ������ ��°� ��Ű�� ���ݺ��� ��� ���
		if (guitarLine * minEach > minPackage)
			result += minPackage;
		else
			result += guitarLine * minEach;
	}

	cout << result << endl;
	delete[] priceInfo;
}