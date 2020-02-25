#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a < b ? b : a;
}

int main()
{
	int input;
	cin >> input;

	int* stairs = new int[input];
	int* dp = new int[input];
	for (int i = 0; i < input; ++i)
	{
		cin >> stairs[i];
	}

	// �Ѱ��� ���
	dp[0] = stairs[0];
	// �ѹ��� �ö� ���, �ι� �ö� ���
	dp[1] = max((stairs[0] + stairs[1]), stairs[1]);
	// �ѹ� �ö󰡰� �ι� �ö� ���, �ι� �ö󰡰� �ѹ� �ö� ���
	dp[2] = max((stairs[0] + stairs[2]), (stairs[1] + stairs[2]));

	for (int i = 3; i < input; ++i)
	{
		dp[i] = max(dp[i - 2] + stairs[i], stairs[i - 1] + stairs[i] + dp[i - 3]);
	}

	cout << dp[input - 1] << endl;
	delete[] stairs;
	delete[] dp;
}