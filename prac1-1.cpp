#include <iostream>
using namespace std;

int array_sum(int array[], int n){
    int total = 0;
    
    for( int i = 0; i < n; i ++){
        total += array[i];
    }

    return total;
}

