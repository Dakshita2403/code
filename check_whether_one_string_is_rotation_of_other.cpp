#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2, temp;
	cin >> s1 >> s2;
	temp = s1 + s1;
	if (s1.length() != s2.length())
	{

		cout << "no";
		return 0;
	}

	if (temp.find(s2) != string::npos)
	{
	
	cout << "yes";
	return 1;
  }
}
