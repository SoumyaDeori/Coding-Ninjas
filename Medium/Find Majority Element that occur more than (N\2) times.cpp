int majorityElement(vector<int> v) {
	// Write your code here
	int majority=v[0];
	int count=1;
	for(int i=1;i<v.size();i++)
	{
		if(count==0)
		{
			majority=v[i];
			count = 1;
		}
		else if(majority==v[i])
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	return majority;
}
