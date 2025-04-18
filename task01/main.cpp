#include "logic.h"

int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "input size of square matrix: ";
	cin >> size;
	
	
	init(matrix, size, 0, 100);
	cout << "matrix:\n" << convert(matrix, size);
	
	cout << "sum of square matrix: " <<
	sum_elements_up_main_diagonale(matrix, size) << endl;


	system("pause");

	return 0;
}