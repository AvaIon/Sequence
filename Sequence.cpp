#include"Sequence.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;
bool com(char a, char b)
{
	if (a == b)
		return true;
	else
		return false;
}
int Sequence::length()
{ 	
	return SUM;
};
int Sequence::numberOf(char base)
{
	int base_number = 0;
	for (int i = 0; i < SUM; i++)
	{
		if (all[i] == base)
			base_number++;
	};
	return base_number;
}
string Sequence::longestConsecutive()
{	
	int sum = 0, m = 0, last = 0;
	for (int i = 0; i <SUM; i++)
	{
		if (com(all[i], all[i + 1]))
			sum++;
		else
		{
			if (sum > m)
			{
				m = sum;
				last = i;
				sum=0;
			}
				sum=0;
		}
	}
/*	for (int i = last - m; i <= last; i++)
		cout << all[i];
		cout<<endl;
		return a;*/
	string a;
	a=all.substr(last-m,m);
	return a;
}
string Sequence::longestRepeated()
{
        vector<string>a;
	int count = 0, max = 0;
	string answer;
	for (int i = 0; i < SUM - 201; i++)
	{
		string b = all.substr(i, 200);
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	for (int j=0;j<SUM-201;j++)
	{
		string b = a[j];
		string c = a[j + 1];
		for (int k = 0; k < 199; k++)
		{
			if (b[k] == c[k])
				count++;
			else break;
		}
		if (count > max)
		{
		max=count;
		answer = b.substr(0, count);
		}
		count=0;
	}
	return answer;	
}

