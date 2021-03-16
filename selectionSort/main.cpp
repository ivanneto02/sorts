#include <iostream>

#include <vector>

using namespace std;

void displayVctr(const vector<int>&);
void selectionSort(vector<int>&);

int main() {

	vector<int> unsorted = {4, 1, 2, 7, 3, 6};

	vector<int> sorted;

	selectionSort(unsorted);

	sorted = unsorted;

	displayVctr(sorted);

}

void selectionSort(vector<int>& vctr) {
	
	for (unsigned int i = 0; i < vctr.size() - 1; i++) {

		unsigned int index = i;
		for (unsigned int j = i + 1; j < vctr.size(); j++) {

			if (vctr.at(index) >= vctr.at(j)) {

				index = j;
			}

		}

		int tmp = vctr.at(i);
		vctr.at(i) = vctr.at(index);
		vctr.at(index) = tmp;

	}
}

void displayVctr(const vector<int>& vctr) {

	for (unsigned int i = 0; i < vctr.size(); i++) {

		cout << vctr.at(i) << " ";
	}
	cout << endl;

}
