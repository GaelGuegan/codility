#include <string.h>
#include <cstdlib>
#include <vector>
#include <climits>
#include <cstdint>
#include <iostream>
#include <cmath>
#include <array>
#include <algorithm>

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
    vector<int> A = {2, 3, 1, 5};
    int result = 0;
    
    cout << "Input: ";
    print_1d(A);

    sort(A.begin(), A.end());

    for (int i = 0; i < A.size(); i++) {
        if (A[i] != i+1) {
            result = i+1;
            break;
        }
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}
