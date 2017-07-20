#include <iostream>
#include "XCStandard.h"
using namespace std;

class A{
	public:
	A(){
		cout<<"\nA con\n";
		}
};


class B{
	public:
	b(){
		cout<<"\nB con\n";
		}
};

#define DOCONSTRUCT(_classname) \
$$$PATTERN$$$$ if(_classname=="$$$CLASSNAME$$$"){auto temp=new $$$CLASSNAME$$$;} $$$PATTERN$$$$
