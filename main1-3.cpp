#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int array[], int n, int number);

int main(){

    int test_array[5] = {5,5,4,2,1};
    cout << "total is " << num_count(test_array, 5, 5) << endl;

    return 0;
}