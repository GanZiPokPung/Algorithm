#include <iostream>
using namespace std;

int foo(int A, int B, int count, int result)
{
	bool check = false;
	int min = (A < B) ? A : B;
	int resultA, resultB;
	for (int i = 2; i <= min; ++i)
	{
		if (A % i == 0 && B % i == 0)
		{
			result *= i;
			resultA = A / i;
			resultB = B / i;
			check = true;
			break;
		}
	}

	if (check)
	{
		cout << count << "ȸ �����Ѵ�." << endl;
		cout << "x = " << resultA << ", y = " << resultB << endl;
		return foo(resultA, resultB, ++count, result);
	}
	else
		return result;
}

int main()
{
	int A = 0, B = 0;
	cout << "2���� �� �Է�" << endl;
	cout << "�Է� => "; cin >> A >> B;

	cout << "�ִ����� : " << foo(A, B, 1, 1);
}