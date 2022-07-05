#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

struct student
{
	string name = "";
	int age = 0;
	float score = 0;
};

void StringCutHalfwithKey(const string& source, char key, string& leftstr, string& rightstr)
{
	int index = source.find(key);
	leftstr = source.substr(0, index);
	rightstr = source.substr(index + 1);
}

int main()
{
	ofstream file("writeFile.txt");
	if (file.is_open()) {
		file << "aaaaaaaaaa";
		file << "bbbbbbbbbb";
		file.close();
	}
	else {
		cout << "파일 저장을실패했습니다." << endl;
	}
	
	vector<student> arrSd;
	string line;
	ifstream file("writeFile.txt");
	if (file.is_open()) {
		while (getline(file, line))
		{
			cout << line << endl;
			//	arrSd.push_back(line);
		}
		file.close();
	}

	else {
		cout << "파일 읽기를 실패했습니다." << endl;
	}

	for (student s : arrSd)
	{
		cout << s.name << endl;
	}


}
