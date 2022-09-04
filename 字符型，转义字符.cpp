/*#include<iostream>
using namespace std;
int main() {
  
	//1,字符型变量创建方式
	char ch = 'a';
    cout << ch << endl;
	//2.创建字符变量时候要用单引号
	//  创建字符变量的时候，单引号内只能有一个字符
	cout << "占内存容量：" << sizeof(char) << endl;
	//3,字符变量占内存容量为1
	cout << (int)ch << endl;
	//4,字符变量对应的ASCII编码
	//a-97
	//A-65 
	
	
	//转义字符
	//转义字符\n
	cout << "hello word\n" << endl;
	//反斜杠 \\
    
	cout << "\\" << endl;
	//水平制表符\t    占用四个字节，可以整齐输出数据
	cout << "aaa\thello world" << endl;
	cout << "aaaaa\thello world" << endl;
	cout << "aaaaaaa\thello world" << endl;   

	//1,C风格字符串
	//注意事项 char 字符串名[]
	//注意事项2  等号后面要用双引号 包含起来字符串
	char str[] = "hello world";
	cout << str << endl;

	//2，C++风格字符串
	//包含一个头文件 string头文件
	string str2 = "hello world";
	cout << str2 << endl;
	
	system("pause");
	return 0;

}
*/