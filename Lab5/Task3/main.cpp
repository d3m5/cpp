#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <sstream>


using namespace std;

int main()
{
	vector<vector<char>> arr;
	vector<char> charr;
	vector<char> findSt;
	string s = "наступил";
	int poiskP(vector<char>, vector<char>);
	copy(s.begin(), s.end(), back_inserter(findSt));
	setlocale(LC_ALL, "ru");
	void appendC(char*, char);
	char ch, name[50] = "1.txt";
	int empt = 0, unempt = 0, i = 0;
	FILE* in;
	if ((in = fopen(name, "r")) == NULL) {
		printf("Файл %s не открыт", name);
	}
	else
		ch = getc(in);
	while (!feof(in))
	{
		if (ch != '\n')
		{
			charr.push_back(ch);
		}
		else
		{
			arr.push_back(charr);
			charr.clear();
		}
		putchar(ch);
		ch = getc(in);
	}
	arr.push_back(charr);
	cout << endl;
	ofstream out{ "2.txt" };
	ifstream file("1.txt");
	for (string line; getline(file, line);) {
		out << line << endl;
	}
	out << "Строка для поиска:" << s << endl;
	for (int j = 0; j < arr.size(); j++)
	{
		out << "В строке № " << j << " найдено: " <<
			poiskP(arr[j], findSt) << "совпадений" << endl;
		for (i = 0; i < arr[j].size(); i++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}
int poiskP(vector<char> strk, vector<char> linetof)
{
	int j = 0, count = 0, res = 0;
	for (char i : strk)
	{
		if (i != linetof[j])
		{
			count = 0;
			j = 0;
		}
		if (i == linetof[j])
		{
			count++;
			j++;
		}
		if (count == linetof.size()) {
			j = 0;
			count = 0;
			res++;
		}
	}
	return res;
}