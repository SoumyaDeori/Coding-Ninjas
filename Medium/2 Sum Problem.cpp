string read(int n, vector<int> arr, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return "YES";
            }
        }
    }
    return "NO";
}
