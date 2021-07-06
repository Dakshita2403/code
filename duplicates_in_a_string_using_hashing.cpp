#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int H[26] = { 0 }, H1[26] = {0};
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			H[s[i] - 65] += 1;
		}
		if (s[i] >= 97 && s[i] <= 122)
		{
			H1[s[i] - 97] += 1;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (H[i] > 1)
			cout << H[i] << endl;
		if (H1[i] > 1)
			cout << H1[i] << endl;
	}

	return 0;
}
