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
    vector<int> A = {3, 1, 2, 4, 3};
    int result = 0;
    int best = 0;
    
    cout << "Input: ";
    print_1d(A);
    
    for (int i = 1; i < A.size() ; i++) {
        vector<int> A1;
        vector<int> A2;

        A1.assign(A.begin(), A.begin() + i);
        A2.assign(A.begin() + i, A.end());
        
        int sum1 = accumulate(A1.begin(), A1.end(), 0);
        int sum2 = accumulate(A2.begin(), A2.end(), 0);
        
        result = abs(sum1-sum2);
        //print_1d(A1);
        //print_1d(A2);
        //cout << "sum1: " << sum1 << " sum2: " << sum2 << endl;
        //cout << "res: " << result << endl;
        if (result < best || best == 0) {
            best = result;
        }
    }

    
    cout << "Result: " << best << endl;
    
    return 0;
}
