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

vector<int> rotate_array(vector<int> &A, int K)
{
    vector<int> rotate(A.size());
    vector<int> tmp;

    tmp = A;
    
    for (int j = 1; j < K+1; j++) {
        for (int i = 0; i < A.size(); i++) {
            if (i == 0)
                rotate[i] = tmp[A.size()-1];
            else
                rotate[i] = tmp[i-1];
        }
        tmp = rotate;
    }

    return rotate;
}

int main(int argc, char* argv[])
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> rotate;
    int K = 3;

    cout << "Input: ";
    print_1d(a);
    cout << "K: "<< K << endl;

    rotate = rotate_array(a, K);
    
    cout << "Result: ";
    print_1d(rotate);
    
    return 0;
}
