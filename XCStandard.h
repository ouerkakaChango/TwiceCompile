#include <iostream>
#include <vector>
#include <string>
using namespace std;
class XCStandard{
private:
	XCStandard() {}
public:
    vector<string> classNameVec;

	XCStandard(const XCStandard& x) = delete;
	XCStandard(XCStandard&&) = delete;
	XCStandard& operator=(const XCStandard& x) = delete;
	XCStandard& operator=(XCStandard&& x) = delete;
	
	static XCStandard& GetInstance();
};
#define XC XCStandard::GetInstance()

#define REGISTE(_class) XC.classNameVec.push_back(#_class);
