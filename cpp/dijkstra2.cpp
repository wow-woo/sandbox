#include <stdio.h>

int number = 6;
int INF = 1000000000;

int a[6][6] = {
	{0, 2, 5, 1, INF, INF},
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0}};

bool c[6]; // 방문 노드
int d[6];  //최단 거리

int getSmallIndex()
{
	int min = INF;
	int idx = 0;
	for (int i = 0; i < number; i++) {
		if (d[i] < min && !c[i]) {
			min = d[i];
			idx = i;
		}
	}
	return idx;
}

void dijkstra(int s)
{
	for (int i = 0; i < number; i++) {
		d[i] = a[s][i];
	}

	c[s] = true;

	for (int i = 0; i < number - 2; i++) {
		int current = getSmallIndex();
		c[current] = true;

		for (int j = 0; j < 6; j++) {
			if (!c[j]) {
				if (d[current] + a[current][j] < d[j]) {
					d[j] = d[current] + a[current][j];
				}
			}
		}
	}
}

int main()
{
	dijkstra(0);

	for (auto item : d) {
		printf("%d ", item);
	}
}