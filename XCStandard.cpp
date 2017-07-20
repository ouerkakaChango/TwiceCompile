#include "XCStandard.h"
XCStandard& XCStandard::GetInstance() {
	static XCStandard x;
	return x;
}