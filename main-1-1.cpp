#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
//extern int count(int[], int);
extern int array_sum(int array[], int n);


/*int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}*/

int main(){

    int test_array[1] = {1};
    cout << "total is " << array_sum(test_array, 1) << end1;

    return 0;
}