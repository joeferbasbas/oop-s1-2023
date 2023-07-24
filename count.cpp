#include <stdio.h>

int sum_positive(int array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            total += array[i];
        }
    }

    return total;
}
int main(void){
    int test_array[5] = {2,1,1,1,1};
    int sum = sum_positive(test_array,5);
    printf("%d \n", sum);
    return 0;


}