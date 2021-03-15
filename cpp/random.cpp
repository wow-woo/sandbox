#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	class Human
	{
	public:
		string name = "default name";
	};

	Human kim;
	printf("%s", kim.name);
}