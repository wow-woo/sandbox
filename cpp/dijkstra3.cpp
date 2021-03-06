#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 6;
int INF = 1000000000;

vector<pair<int, int>> a[7];
int d[7];

struct cmp {
	bool operator()(pair<int, int> &a, pair<int, int> &b)
	{
		if (a.second == b.second) {
			return a.first < b.first;
		}
		return a.second < b.second;
	}
};

void dijkstra(int s)
{
	d[s] = 0;
	// priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
	queue<pair<int, int>> pq;
	pq.push((make_pair(s, 0)));

	while (!pq.empty()) {
		int current = pq.front().first;
		int distance = pq.front().second;

		pq.pop();

		if (d[current] < distance)
			continue;

		for (int i = 0; i < a[current].size(); i++) {
			int next = a[current][i].first;
			int nextDistance = distance + a[current][i].second;

			if (nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push(make_pair(next, nextDistance));
			}
		}
	}
}

int main()
{
	for (int i = 1; i <= number; i++) {
		d[i] = INF;
	}

	a[1].push_back(make_pair(2, 2));
	a[1].push_back(make_pair(3, 5));
	a[1].push_back(make_pair(4, 1));

	a[2].push_back(make_pair(1, 2));
	a[2].push_back(make_pair(3, 3));
	a[2].push_back(make_pair(4, 2));

	a[3].push_back(make_pair(1, 5));
	a[3].push_back(make_pair(2, 3));
	a[3].push_back(make_pair(4, 3));
	a[3].push_back(make_pair(5, 1));
	a[3].push_back(make_pair(6, 5));

	a[4].push_back(make_pair(1, 1));
	a[4].push_back(make_pair(2, 2));
	a[4].push_back(make_pair(3, 3));
	a[4].push_back(make_pair(5, 1));

	a[5].push_back(make_pair(3, 1));
	a[5].push_back(make_pair(4, 1));
	a[5].push_back(make_pair(6, 2));

	a[6].push_back(make_pair(3, 5));
	a[6].push_back(make_pair(5, 2));

	dijkstra(1);

	for (int i = 1; i <= number; i++) {
		printf("%d ", d[i]);
	}
}