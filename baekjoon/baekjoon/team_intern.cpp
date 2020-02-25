// 2���� ���л��� 1���� ���л� <-- �� �Ἲ
// N�� ���л� M���� ���л� <-- �� ã����

// K���� �ݵ�� ���Ͻ� ���α׷��� �����϶�� �б��� ��ħ <-- �� �ο��� ��ȸ ���� �Ұ�

// N, M, K

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int girl, boy;
	int intern;

	cin >> girl >> boy >> intern;

	int maxTeam = 0;

	int tGirl = girl;
	int tBoy = boy;

	while (true)
	{
		tGirl -= 2;
		tBoy -= 1;

		if (0 > tGirl || 0 > tBoy)
			break;
		
		++maxTeam;
	}

	intern -= (girl + boy) - (3 * maxTeam);
	
	int notTeam = 0;
	if (0 < intern)
	{
		notTeam = intern / 3;
		if (0 != intern % 3)
			++notTeam;
	}

	maxTeam -= notTeam;

	cout << maxTeam << endl;
}