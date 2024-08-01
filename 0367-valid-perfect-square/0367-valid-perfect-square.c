bool isPerfectSquare(int num) {
    if(num<=2) return true;
    long low =0,high = num -1;
    while(low<=high)
    {
        long mid = low + (high - low) /2;
        if(mid * mid == num) return true;
        else if(mid*mid<num)
        {
            if((mid+1)*(mid+1)>num) return false;
            low = mid + 1;
        }
        else high = mid -1;
    }
    return 0;
}