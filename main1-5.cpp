#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int number);

int main(){

    cout << "total is " << count_evens(10) << endl;

    return 0;
}