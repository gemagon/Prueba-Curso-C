#include <iostream>

int max(int x, int y) {
	return (x > y ? x : y);
}

int min(int x, int y) {
	return (x < y ? x : y);
}

void print( int (*fn)(int,int), int a, int b){
    std::cout << (*fn)(a,b) << std::endl;
}

int main()
{
	print(max,3,4);
    print(min,3,4);
}