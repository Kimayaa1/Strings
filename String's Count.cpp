long long int countStr(long long int n){
    long long int result = 1 + 2*n + n*(n-1) + n*(n-1)/2 + n*(n-1)*(n-2)/2;
    return result;
}
