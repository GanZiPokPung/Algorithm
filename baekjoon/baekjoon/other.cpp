#include <iostream>
using namespace std;

int main()
{
	cout << "10����->16���� ��ȯ ���α׷��̴�." << endl;
	cout << "10������ 16������ �ٲٷ��� [A] Ű�� ������, " << endl
		<< "16������ 10������ �ٲٷ��� [B] Ű�� ��������." << endl;
	cout << "a�� b�� �������� : ";

	char input;
	cin >> input;

	cout << "��ȯ�� ���ڸ� �Է��ϼ��� : ";
	
	int num;
	switch (input)
	{
	case 'a':
		cin >> num;
		cout << "10���� �� : " << std::dec << num << " --> ";
		cout << "16���� �� : " << std::hex << num << endl;
		break;
	case 'b':
		cin >> std::hex >> num;
		cout << "16���� �� : " << std::hex << num << " --> ";
		cout << "10���� �� : " << std::dec << num << endl;
		break;
	}
}