#include <string.h>
#include <cstdlib>
#include <vector>
#include <climits>
#include <cstdint>
#include <iostream>
#include <cmath>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

void print_1d(vector<int> v)
{
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
    vector<int> A = {4, 1, 3, 2, 6};

    cout << "Input: ";
    print_1d(A);
   
    sort(A.begin(), A.end());
 
    for (int i = 0; i < A.size() ; i++) {
        if (A[i] != i+1) {
            cout << "A[" << i << "] = " << A[i] << endl;
            cout << "Array is not a permutation" << endl;
            return -1;
        }
    }

    cout << "Array is a permutation" << endl;

    return 0;
}
