#include <iostream>
using namespace std;

int main()
{
	int num;
	char input;
	cout << "10����->16���� ��ȯ ���α׷��̴�." << endl;
	cout << "10������ 16������ �ٲٷ��� [A] Ű�� ������, " << endl
		<< "16������ 10������ �ٲٷ��� [B] Ű�� ��������." << endl;
	cout << "a�� b�� ��������  : ";
	cin >> input;

	cout << "��ȯ�� ���ڸ� �Է��ϼ���  : ";

	switch (input)
	{
	case 'a':
		cin >> hex >> num;
		cout << "16���� ��  : " << hex << num
			 << " --> " << "10���� ��  : " << dec << num << endl;
		break;
	case 'b':
		cin >> dec >> num;
		cout << "10���� ��  : " << dec << num
			 << " --> " << "10���� ��  : " << hex << num << endl;
		break;
	}
}