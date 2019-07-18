// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"
#include "Enums.cpp"
#include "Expressions.cpp"
#include "Decisions.cpp"
#include "Questions1.cpp"
#include "Loops.cpp"
#include "Questions2.cpp"
#include "Arrays.cpp"

#include <string>
using namespace std;

int main()
{
	//cout << "Hello C++" << endl;
	
	string str = "Hello C++";
	cout << str << endl;

	enumsSample();

	expressionsSample();

	decisionsSample();

	questions1();

	loopsSample();

	questions2();

	arraysSample();

	return 0;
}
