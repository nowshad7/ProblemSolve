#include <bits/stdc++.h>
using namespace std;

void stringCompression(string str)
{
	int n = str.length();
	for (int i = 0; i < n; i++) {
		int count = 1;
		while (i < n - 1 && str[i] == str[i + 1]) {
			count++;
			i++;
		}
		cout << str[i] << count;
	}
}

int main()
{
	string str = "aabccaaa";
	stringCompression(str);
	return 0;
}
