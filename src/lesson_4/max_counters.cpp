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
    vector<int> A = {3, 4, 4, 6, 1, 4, 4};
    int N = 5, X = 0; 
    vector<int> counters(N);

    cout << "Input: ";
    print_1d(A);
    cout << "N: " << N <<endl;
   
    for (int i = 0; i < A.size() ; i++) {
        if (A[i] <= N && A[i] >= 1) {
            counters[A[i]-1]++;
        }
        else if (A[i] == N + 1) {
            for (int j = 0; j < A.size(); j++) {
                counters[j] = *max_element(counters.begin(), counters.end());
            }
        }
    //    print_1d(counters);
    }

    cout << "Result: ";
    print_1d(counters);

    return 0;
}
