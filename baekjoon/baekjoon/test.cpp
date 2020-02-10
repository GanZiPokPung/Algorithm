#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define VISITED 1
#define UNVISITED 0
#define CONNECTED 1

using namespace std;

// ������ķ� ������ ǥ���Ѱ�
vector<vector<int>> edge =
{
	{0, 1, 1, 0, 0, 0, 0},
	{1, 0, 0, 1, 1, 0, 0},
	{1, 0, 0, 0, 0, 0, 1},
	{0, 1, 0, 0, 0, 1, 0},
	{0, 1, 0, 0, 0, 1, 0},
	{0, 0, 0, 1, 1, 0, 1},
	{0, 0, 1, 0, 0, 1, 0}
};

vector<int> vertices;

// �ʺ� �켱 Ž��
void BFS(int index)
{
	// ������ ���� �湮ó���� �Ѵ�.
	vertices[index] = VISITED;

	// ���� ������ ť�� �ִ´�.
	queue<int> q;
	q.push(index);
	cout << index + 1 << " ";

	// ť�� �������� �ݺ��Ѵ�.
	while (false == q.empty())
	{
		// ť�� �� ���� ���� ������� �湮�� �������� �ݺ��Ѵ�.
		int sub_index = q.front();
		q.pop();

		for (size_t i = 0; i < edge.size(); ++i)
		{
			// ����Ǿ� �ְ� �湮�� ���� ���� ������ �ִ� ���
			if (CONNECTED == edge[i][sub_index] &&
				UNVISITED == vertices[i])
			{
				cout << i + 1 << " ";
				q.push(i);

				vertices[i] = VISITED;
			}
		}
	}
}

int main()
{
	vertices = vector<int>(edge.size(), UNVISITED);
	
	// ��� ������ �湮�� ������ �ʺ� �켱Ž���� �ݺ��Ѵ�.
	for (size_t i = 0; i < edge.size(); ++i)
	{
		if (UNVISITED == vertices[i])
			BFS(i);
	}

	cout << endl;
}