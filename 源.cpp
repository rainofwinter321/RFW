#include <iostream>
#include<string>


using namespace std;

int fib(int input);

int main() {
		int input = 0;
		cin >> input;
		printf("第%d位斐波那契数为:%d", input, fib(input));
	   
}

int fib(int input) {
	int f1 = 1, f2 = 1, f3 = 1;
	for (int i = 2; i < input; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}