// SetKCovering.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;
int n;
int m;
int *cost;
int **AMatrix;
void ReadFIle(char *filename)
{
	ifstream inf(filename);
	inf >> m >> n;
	cost = new int[n];
	AMatrix = new int *[m];
	for (int i = 0; i < n; ++) {
		inf >> inf[i];
	}
	int RowSum;
	int Columni;
	for (int i = 0; i < m; i++) {
		inf >> RowSum;
		AMatrix[i] = new int[n](0);
		for (int j = 0; j < RowSum; j++) {
			inf >> Columni;
			AMatrix[i][Columni] = 1;
		}
	}
}
int main()
{

    return 0;
}

