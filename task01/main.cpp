#include "logic.h"

int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "input size of square matrix: ";
	cin >> size;
	
	
	init(matrix, size, 0, 100);
	cout << "matrix:\n" << convert(matrix, size);
	
	cout << "sum matrix elements above main diagonal: " <<
	sum_elements_up_main_diagonale(matrix, size) << endl;

	cout << "sum matrix elements below main diagonal: " <<
	sum_elements_down_main_diagonale(matrix, size) << endl;

	cout << "sum matrix elements above additional diagonal:  " <<
		sum_elements_up_additional_diagonale( matrix, size) << endl;

	cout << "sum matrix elements below additional diagonal:  " <<
		sum_elements_down_additional_diagonale(matrix, size) << endl;


	system("pause");

	return 0;
}