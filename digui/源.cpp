#include<iostream>
#define MAX 100
using namespace std;
/*引例，求斐波那契数列中的第n项
可以使用递归和递推两种思想解决。*/

int fib(int n);
int arr[MAX];

int fib(int n)
{
	/*当n=1或n=2时,项为1*/
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
	/*函数的等价关系式：f(n)=f(n-1)+f(n-2)*/
	

}

int main()
{
	int n;
	cin >> n;
	memset(arr, -1, sizeof(arr));
	
	cout << "斐波那契数列的第n项为：" << fib(n);

	return 0;
}