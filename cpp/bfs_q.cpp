// breath first search
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> answer;

void bfs(vector<vector<int>> &v, int s)
{
	vector<bool> c(10, false);
	queue<int> q;

	q.push(s);
	c[s] = true;

	while (!q.empty()) {
		int idx = q.front();
		q.pop();

		cout << idx << " ";

		for (const int &node : v[idx]) {
			if (c[node] == false) {
				q.push(node);
				c[node] = true;
			}
		}
	}
}

int main()
{
	vector<vector<int>> v(10);

	v[1].push_back(2);
	v[2].push_back(1);

	v[1].push_back(3);
	v[3].push_back(1);

	v[2].push_back(3);
	v[3].push_back(2);

	v[2].push_back(4);
	v[4].push_back(2);

	v[2].push_back(5);
	v[5].push_back(2);

	v[3].push_back(6);
	v[6].push_back(3);

	v[3].push_back(7);
	v[7].push_back(3);

	v[4].push_back(5);
	v[5].push_back(4);

	v[6].push_back(7);
	v[7].push_back(6);

	bfs(v, 1);
}