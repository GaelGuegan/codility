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
    vector<int> A = {1, 2, 3};//{-1, -3};//{1, 3, 6, 4, 1, 2};
    int min = 0;

    cout << "Input: ";
    print_1d(A);
  
    sort(A.begin(), A.end());

    for (int i = 1; i < A.size() ; i++) {
        if (A[i] > A[i-1]+1) {
            min = A[i-1]+1;
            break;
        } else {
            min = A[i]+1;
        }
    }

 
    if (min <= 0)
        min = 1;
    cout << "Result: " << min << endl;

    return 0;
}
