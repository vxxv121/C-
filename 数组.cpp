#include<iostream>
using namespace std;
int main() {

	//实现数组元素逆置
	//1，创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前；" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
	while (start < end)
	{
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	//打印逆置后的数组
	cout << "数组元素逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}







/*

	//创建5个数组
	int arr[5] = { 300,200,240,600,400 };
	//数组中找到最大值
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "最大值是：" << max << endl;

*/


	system("pause");
	return 0;
}





/*

	//一维数组组名
	//1，可以统计整个数组在内存中的长度
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2，可以获取数组在内存中的首地址
	cout << "数组首地址为；" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为；" << (int)&arr[1] << endl;
    
	//数组名是常量，不可以进行赋值操作




	//数组名的表达形式
	//1，数据类型 数组名 [数据长度]；
	//2，数据类型 数组名[数组长度]={值1，值2，....};
	//3，数据类型 数组名[] = {值1，值2...};
1，
	int arr[5];
	//给数组中的元素进行赋值
	//数组元素的下标是从0开始索引的
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数据元素
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;


// 2，
	//如果在初始化数据时候，没有全部填写完，会用0填补剩下的
	int arr[5] = { 10,20,30,40,50 };

	/*cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//利用循环 输出数组中的元素
	for (int i= 0; i< 5; i++)
	{
		cout << arr[i] << endl;
	}


//3，//定义数组的时候，必须有初始长度
	int arr2[] = { 90,80,70,60,50,40,30,20,10 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr2[i] << endl;
	}


	 
	system("pause");
	return 0;

}
*/