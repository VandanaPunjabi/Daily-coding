vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    int d = k % n;
    vector<int>ans;

    for(int i=0;i<d;i++){
        ans.push_back(arr[i]);
    }

    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }

    for(int i=n-d;i<n;i++){
        arr[i]  = ans[i-(n-d)];
    }

    return arr;
}
