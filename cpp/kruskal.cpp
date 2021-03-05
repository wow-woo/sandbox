//kruskal algorithm
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int get_root(int *nodes, int x)
{
	if (nodes[x] == x) {
		return x;
	}
	return nodes[x] = get_root(nodes, nodes[x]);
}

void union_node(int *nodes, int a, int b)
{

	a = get_root(nodes, a);
	b = get_root(nodes, b);

	if (a > b) {
		nodes[a] = b;
	} else {
		nodes[b] = a;
	}
}

bool find_parent(int *nodes, int a, int b)
{
	a = get_root(nodes, a);
	b = get_root(nodes, b);

	if (a == b)
		return 1;
	else
		return 0;
}

class Edge
{
public:
	int node[2];
	int distance;

	Edge(int a, int b, int distance)
	{
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}

	bool operator<(Edge &edge)
	{
		return this->distance < edge.distance;
	}
};

int main()
{
	const int n = 7;
	int m = 11;

	vector<Edge> v;
	v.push_back(Edge(1, 7, 12));
	v.push_back(Edge(1, 4, 28));
	v.push_back(Edge(1, 2, 67));
	v.push_back(Edge(1, 5, 17));
	v.push_back(Edge(2, 4, 24));
	v.push_back(Edge(2, 5, 62));
	v.push_back(Edge(3, 5, 20));
	v.push_back(Edge(3, 6, 37));
	v.push_back(Edge(4, 7, 13));
	v.push_back(Edge(5, 6, 45));
	v.push_back(Edge(5, 7, 73));

	sort(begin(v), end(v));

	int parent[n];
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}

	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		//사이클 확인
		if (!find_parent(parent, v[i].node[0] - 1, v[i].node[1] - 1)) {
			sum += v[i].distance;
			union_node(parent, v[i].node[0] - 1, v[i].node[1] - 1);
		}
	}

	cout << sum;
}
