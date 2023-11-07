vector<int> alternateNumbers(vector<int>&arr) {
    // Write your code here.
    vector<int> ans(arr.size(),0);
    int n=arr.size();
    int a=0,b=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ans[a]=arr[i];
            a+=2;
        }
        else
        {
            ans[b]=arr[i];
            b+=2;
        }
    }
    return ans;
}
