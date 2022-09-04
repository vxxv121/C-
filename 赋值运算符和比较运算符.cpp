/*#include<iostream>
using namespace std;
int main() {

	//逻辑运算符  非！
	int a = 10;
	//在c++中除了0都为真
	cout << !a << endl;
	cout << !!a << endl;
 
	//与&&  两个条件都为真，结果为真
	int a = 10;
	int b = 10;
	cout << (a &&b)<< endl;//结果为真，非0的都是真

	a = 0;
	b = 0;
	cout << (a&&b)<< endl; //结果为假
	//同真为真，其余为假

	//或！！  如果有一个为真，则结果为真，都为假时，结果为假
	int a = 10;
	int b = 10;
	cout << (a || b) << endl;
	
	a = 0;
	b = 0;
	cout << (a || b) << endl;
	//逻辑或  同假为假，其余为真




	//比较运算符
	   (0为假1为真）
	==   相等于  案例（4==3）结果0 表示为假
	!=   不相等       4!=3       1
	<     小于
	>     大于
	<=    小于等于
	>=    大于等于
	
	int a = 10;
	int b = 20;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a <b) << endl;
	cout << (a >b) << endl;
	cout << (a <= b) << endl;
	cout << (a >= b) << endl;




	//赋值运算
	//=
	int a = 10;
	a = 10;
	cout << "a=" << a << endl;

	//+=
	a = 10;
	a += 2; //a=a+2
	cout << "a=" << a << endl;
	//-=
	a = 10;
	a -= 2;//a=a-2
	cout << "a=" << a << endl;
	//*=
	// /= 
	// %=  以上同理
	system("pause");
	return 0;

}
*/