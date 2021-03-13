#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>&);
void displayVctr(const vector<int>&);

// https://www.geeksforgeeks.org/insertion-sort/

int main() {
	
	vector<int> sortVector = {4, 2, 6, 2, 3, -5, -9, 9, 1, 0, 2, 7};
	
	insertionSort(sortVector);
	
	displayVctr(sortVector);
	
	return 0;
}

/// Sorts a vector using the insertion sort algorithm
void insertionSort(vector<int>& vctr) {
	
	int j;
	for (unsigned int i = 1; i < vctr.size(); i++) {
		
		j = i - 1;
		int num = vctr.at(i);
		
		// Check for numbers below i
		while (j >= 0 && num < vctr.at(j)) {
			
			vctr.at(static_cast<unsigned>(j + 1)) = vctr.at(static_cast<unsigned>(j));
			j--;
			
		}
		
		vctr.at(static_cast<unsigned>(j + 1)) = num;
		
	}
	
}

/* WORKS BUT IS NOT INSERTION SORT
void insertionSort(vector<int>& vctr) {
	
	for (unsigned int i = 1; i < vctr.size(); i++) {
		
		for (unsigned int j = 0; j < i; j++) {
			
			if (vctr.at(i - j) < vctr.at(i - 1 - j)) {
				
				int tmp = vctr.at(i - j);
				vctr.at(i - j) = vctr.at(i - 1 - j);
				vctr.at(i - 1 - j) = tmp;
				
			}
			
		}
		
	}
	
}
*/

/* WORKS BUT IS NOT INSERTION SORT
void insertionSort(vector<int>& vctr) {
	
	for (unsigned int i = 1; i < vctr.size(); i++) {
		
		for (unsigned int j = i - 1; j >= 0; j--) {
	
			displayVctr(vctr);
			
			if (vctr.at(j + 1) < vctr.at(j)) {
				
				if (j == 0) {
				
					int tmp = vctr.at(j + 1);
					vctr.at(j + 1) = vctr.at(j);
					vctr.at(j) = tmp;
					
					break;
				}
				
				int tmp = vctr.at(j + 1);
				vctr.at(j + 1) = vctr.at(j);
				vctr.at(j) = tmp;
				
				continue;
			}
			
			break;
			
		}
		
	}
	
}
*/

void displayVctr(const vector<int>& vctr) {
	
	for (unsigned int i = 0; i < vctr.size(); i++) {
		
		cout << vctr.at(i) << " ";
	}
	cout << endl;
	
}
