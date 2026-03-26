#include <iostream>
#include <string>
#include "String.h"

using namespace std;

int main()
{
	//std::string  s1 = "Hello";
	//std::string  s2("World");

	//std::string s3 = s1 + " " + s2;

	//cout << s3 << endl;

	//String S1("Hello");


	//char Message[1024] = "Hello World";

	String S1 = "Hello";
	String S2 = "World";

	//이 더하기랑 operator쓴게 똑같은거임.
	//String S3 = S1 + " " + S2;
	//String S2 = S1;
	String S3(S1.operator+(" ").operator+(S2));
	

	cout << S3.GetPointer() << endl;

	//cout << (S1 == S2) << endl;

	return 0;
}