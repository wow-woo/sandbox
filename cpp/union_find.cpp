// union&find
#include <iostream>

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
	// return nodes[a] == nodes[b];
}

int nodes[8];

int main()
{
	nodes[1] = 1;
	nodes[2] = 2;
	nodes[3] = 3;
	nodes[4] = 4;
	nodes[5] = 5;
	nodes[6] = 6;
	nodes[7] = 7;
	nodes[8] = 8;

	union_node(nodes, 1, 2);
	union_node(nodes, 2, 3);
	union_node(nodes, 3, 4);
	union_node(nodes, 5, 6);
	union_node(nodes, 6, 7);
	union_node(nodes, 7, 8);

	cout << "1 to 5 : " << find_parent(nodes, 1, 5) << endl;

	union_node(nodes, 1, 5);

	cout << "1 to 5 : " << find_parent(nodes, 1, 5) << endl;

	for (int i = 0; i < 9; i++) {
		cout << " header " << endl;
		cout << i << endl;
		cout << nodes[i] << endl;
	}
}