double array_mean(int array[], int n){
    int total = 0;
    int avg = 0;
    for(int i = 0; i < n; i ++){
        total += array[i];
    }
    avg = total / n;

    return avg;
}