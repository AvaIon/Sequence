#include"Sequence.h"
#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{       
        clock_t begin ,finish;
	begin=clock();
	Sequence test("/data/dna.txt");
        cout<<test.length()<<endl;
	cout<<test.numberOf('T')<<endl;
	cout<<test.longestConsecutive()<<endl;
        cout<<test.longestRepeated()<<endl;
	finish=clock();
        cout<<(finish-begin)/1000000.00<<endl;
	return 0;
}
