#pragma once
class BB
{
public:
	BB(int n);
	~BB();
	void read();
	int** paths;
	int** paths2;
	int* route;
	int* route2;
	int* LBr;
	int* LBl;
	int LB;
	//bool** blocked;
	bool* removed_col;
	bool* removed_row;
	string name;
	int size, size2;
	void rmvRow(int n);
	void rmvColumn(int n);
	void algorithm();
};

