vector<int> nextGreaterPermutation(vector<int> &Arr)
 {
    // Write your code here.
    int n = Arr.size(); 
   
    int index = -1; 
    for (int i = n - 2; i >= 0; i--) {
        if (Arr[i] < Arr[i + 1]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        reverse(Arr.begin(), Arr.end());
        return Arr;
    }

    for (int i = n - 1; i > index; i--) {
        if (Arr[i] > Arr[index]) {
            swap(Arr[i], Arr[index]);
            break;
        }
    }

    reverse(Arr.begin() + index + 1, Arr.end());

    return Arr;
}
