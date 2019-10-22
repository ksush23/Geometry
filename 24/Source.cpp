#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;

string filepath();

int main()
{
	cout << "Gavryliuk Oksana\n" << "The arrangement of a line and convex polygon\n";

	const int N = 10001;
	Dot arrd[N];
	const int M = 10000;
	Segment arrs[M];

	string inpath, outpath;
	bool ok = 0;

	ifstream fin;
	ofstream fout;

	do
	{
		inpath = filepath();
		if (inpath == "")
			fin.open("input.txt");
		else
			fin.open(inpath);
	} while (!fin);

	do
	{
		outpath = filepath();
		if (outpath == "")
			fout.open("output.txt");
		else
			fout.open(outpath);
	} while (!fout);

	cout << inpath << endl << outpath << endl;
	geom(fin, arrd);
	system("pause");

	return 0;
}
string filepath()
{
	string fipath;
	cout << "Enter filepath: " << endl;
	getline(cin, fipath);
	return fipath;
}