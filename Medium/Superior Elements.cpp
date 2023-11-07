vector<int> printLeadersBruteForce(int arr[], int n) 
{
       vector<int> ans;
       for (int i = 0; i < n; i++)
       {
          bool leader = true;
           for (int j = i + 1; j < n; j++)
           {
                 if (arr[j] > arr[i])
                  {
                   leader = false;
                    break;
                  }
            }
         if (leader)
         ans.push_back(arr[i]); 
      }
  return ans;
 }
