#include <iostream>

using namespace std;

void ReverseInt(int x){
	int temp = x;
	int result=0;
	while(temp>0){
		result *= 10;
		result += temp%10;
		temp /= 10;
	}
	cout << result;
}
//int x = ReverseInt (123); // x = 321
//int x = ReverseInt (10); // x = 1

int main(){
	ReverseInt(123);
	return 0;
}
