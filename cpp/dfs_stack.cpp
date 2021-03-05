// deep first search

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<vector<int>> v {10};
int c[10] {false};
stack<int> st;

void dfs(int s)
{
	cout << s << " ";

	c[s] = true;
	st.push(s);

	while (!st.empty()) {
		int idx = st.top();
		st.pop();

		for (const int adj : v[idx]) {
			if (c[adj] == false) {
				st.push(adj);
				c[adj] = true;

				cout << adj << " ";
			}
		}
	}
}

int main()
{
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

	dfs(1);
}