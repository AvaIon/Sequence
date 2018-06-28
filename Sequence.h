#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#ifndef SEQUENCE_H
#define SEQUENCE_H
using namespace std;
class Sequence
{
public:
	Sequence(string filename)
	{
		all = "";
		sum_line = 0;
		SUM = 0;
		ifstream read;
		read.open(filename.data());
		if (!read)cout << "error" << endl;
		int i = 0;
		string line = "";
		while (getline(read,line))
		{
			all += line;
			sum_line++;
			SUM+=line.size();
		};
			
	};
	int length();
	int numberOf(char bale);
	string longestConsecutive();
	string longestRepeated();
private:
	string all;
	int sum_line;
	int SUM;
};


#endif

