#include<iostream>
using namespace std;
int main() {

	//ʵ������Ԫ������
	//1����������
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;//��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//�����±�
	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	//��ӡ���ú������
	cout << "����Ԫ�����ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}







/*

	//����5������
	int arr[5] = { 300,200,240,600,400 };
	//�������ҵ����ֵ
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "���ֵ�ǣ�" << max << endl;

*/


	system("pause");
	return 0;
}





/*

	//һά��������
	//1������ͳ�������������ڴ��еĳ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//2�����Ի�ȡ�������ڴ��е��׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;
    
	//�������ǳ����������Խ��и�ֵ����




	//�������ı����ʽ
	//1���������� ������ [���ݳ���]��
	//2���������� ������[���鳤��]={ֵ1��ֵ2��....};
	//3���������� ������[] = {ֵ1��ֵ2...};
1��
	int arr[5];
	//�������е�Ԫ�ؽ��и�ֵ
	//����Ԫ�ص��±��Ǵ�0��ʼ������
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//��������Ԫ��
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;


// 2��
	//����ڳ�ʼ������ʱ��û��ȫ����д�꣬����0�ʣ�µ�
	int arr[5] = { 10,20,30,40,50 };

	/*cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//����ѭ�� ��������е�Ԫ��
	for (int i= 0; i< 5; i++)
	{
		cout << arr[i] << endl;
	}


//3��//���������ʱ�򣬱����г�ʼ����
	int arr2[] = { 90,80,70,60,50,40,30,20,10 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr2[i] << endl;
	}


	 
	system("pause");
	return 0;

}
*/