#include<iostream>
#define MAX 100
using namespace std;
/*��������쳲����������еĵ�n��
����ʹ�õݹ�͵�������˼������*/

int fib(int n);
int arr[MAX];

int fib(int n)
{
	/*��n=1��n=2ʱ,��Ϊ1*/
	if (n <= 1)
		return n;
	
	if (arr[n] != -1)
	{
		return arr[n];
	}
	else
	{
		
		return arr[n] = fib(n - 1) + fib(n - 2);
	}
	/*�����ĵȼ۹�ϵʽ��f(n)=f(n-1)+f(n-2)*/
	

}

int main()
{
	int n;
	cin >> n;
	memset(arr, -1, sizeof(arr));
	
	cout << "쳲��������еĵ�n��Ϊ��" << fib(n);

	return 0;
}