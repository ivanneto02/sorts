#include <iostream>
#include <vector>
#include <string>

using namespace std;

// https://www.geeksforgeeks.org/quick-sort/

template<typename T>
void sort(vector<T>&, unsigned int);

template<typename S>
void displayVctr(const vector<S>&);

int main() {
	
	vector<int> unsortedVector = {1, 4, 3, 0, 7, 9, 2, 2};
	
	sort(unsortedVector, unsortedVector.size());
	
	displayVctr(unsortedVector);
	
	vector<string> unsortedVector2 = {"Abe", "Manson", "Jacob", "Jack"};
	
	sort(unsortedVector2, unsortedVector2.size());
	
	displayVctr(unsortedVector2);
	
	vector<char> unsortedVector3 = {'b', 'd', 'e', 'q', 'g', 'h', 'l', 't'};
	
	sort(unsortedVector3, unsortedVector3.size());
	
	displayVctr(unsortedVector3);
}

// Sorts by using recursion
template<typename T>
void sort(vector<T>& vctr, unsigned int n) {

	if (n == 1) {
	
		return;
	}
	
	// Iterates through
	for (unsigned int i = 0; i < n - 1; i++) {
		
		// In the case we have to swap
		if (vctr.at(i) > vctr.at(i + 1)) {
			
			T tmp = vctr.at(i);
			vctr.at(i) = vctr.at(i + 1);
			vctr.at(i + 1) = tmp;
				
		}
		
	}
	
	sort(vctr, n - 1);
	
}

// Displays the vector
template<typename S>
void displayVctr(const vector<S>& vctr) {
	
	for (unsigned int i = 0; i < vctr.size(); i++) {
		
		cout << vctr.at(i) << " ";
	}
	cout << endl;
	
}
