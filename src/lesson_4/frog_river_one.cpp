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
    vector<int> A = {1, 3, 1, 4, 2, 3, 5, 4};
    int X = 5;
    vector<int> all(X);
    int res = 0;

    cout << "Input: ";
    print_1d(A);
    
    for (int i = 1; i < A.size() ; i++) {
        all[i-1] = i;
    }

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < all.size(); j++) {
            if (A[i] == all[j])
                all.erase(all.begin() + j);
        }

        if (all.empty()) {
            res = i;
            break;
        }
    }
     
    cout << "Result: " << res << endl;
    
    return 0;
}
