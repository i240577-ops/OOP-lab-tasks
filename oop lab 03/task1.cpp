#include<iostream>
using namespace std;
int** transposeMatrix(int** matrix, int r, int c) {
	int rows = c;
	int cols = r;

	int** transposed = new int* [rows];
	for(int i =0 ; i < rows; i++) {
		transposed[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transposed[i][j] = matrix[j][i];
		}

	}
	
	return transposed;
}


int main() {
	int rows;
	cout << "enter rows" << endl;
	cin >> rows;
	int cols;
	cout << "enter columns" << endl;
	cin >> cols;
	
	int** arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	cout << "enter the matrix" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}

	int** newarr = transposeMatrix(arr, rows, cols);

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << newarr[i][j] << " ";
		}
		cout << endl;
	}
		return 0;
}