#include "Str.h"
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	Str a("I'm a girl");
	cout<<a.contents();
	a="I'm a boy\n";
	cout<<a.contents();
	cout<<a.compare("I'm a a")<<endl;
	Str b("I'm a d");
	cout<<b.contents()<<endl;
	cout<<b.compare(a)<<endl;
	return 0;
}
