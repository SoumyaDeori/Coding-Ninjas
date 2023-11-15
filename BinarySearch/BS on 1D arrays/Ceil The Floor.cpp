pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x)
{
	int findFloor(vector<int> &arr,int n,int x);
    int findCeil(vector<int> &arr, int n, int x);

	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}
int findFloor(vector<int> &arr,int n,int x)
	{
		int low=0,high=n-1;
		int ans = -1;
		while(low<=high)
		{
			int mid = (low+high)/2;
			if(arr[mid]<=x)
			{
				ans = arr[mid];
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
		return ans;
	}
int findCeil(vector<int> &arr, int n, int x) 
	{
		int low=0,high=n-1;
		int ans=-1;

	    while (low<=high) 
		{
		    int mid=(low+high)/2;
            if(arr[mid]>=x) 
			{
			    ans=arr[mid];
				high=mid-1;
		    }
		    else {
			    low=mid+1; 
		    }
	    }
		return ans;
	}
