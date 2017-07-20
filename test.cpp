#include "test.h"
#include "windows.h"
#include <iostream>
using namespace std;
int main(){
	//auto p=DOCONSTRUCT("A");
	//auto p=DOCONSTRUCT("B");
	REGISTE(A)
	REGISTE(B)
	for(auto& iter:XC.classNameVec){
		cout<<iter;
	}
	system("pause");
	return 0;
}