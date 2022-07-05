#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> aaa;
	for (int i = 0; i < 10; ++i)
	{
		aaa.push_back(i);
	}
	vector<float> bbb;
	for (float a = 10; a < 50; a++)
	{
		bbb.push_back(a);
	}
	for (float s : bbb)
	{
		cout << s << endl;
	}
	vector<int> asd;
	for (int c = 10; c < 100; c++);
	{

	}
}