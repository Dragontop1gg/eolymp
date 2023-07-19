#include<iostream>

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;
	int res = n * (n + 1) + 1;
	std::cout << res;

	return 0;
}