int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int expectedSum = (N*(N+1))/2;
        int actualSum = 0;
        for(int i=0;i<N-1;i++)
        {
            actualSum +=a[i];
        }
        return expectedSum-actualSum;
}
