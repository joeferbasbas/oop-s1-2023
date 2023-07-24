#include <iostream>
using namespace std;

extern int array_mean(int array[], int n);

int main(){
    int test_array2[3] = {2,2,2};
    cout << "total is " << array_mean(test_array2, 3) << endl;

    return 0;
}