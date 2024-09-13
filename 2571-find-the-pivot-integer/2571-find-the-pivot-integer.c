int pivotInteger(int n) {
    int target = n * (n + 1) / 2;
    
    int x = (int)sqrt(target);
    
    if (x * x == target) {
        return x;
    } else {
        return -1;
    }
}