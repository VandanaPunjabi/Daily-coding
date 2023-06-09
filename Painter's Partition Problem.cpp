bool isPossible(vector<int> &arr, int k, int mid)
{

       int boardCount = 0;
        int kUnit = 1;

    for(int i=0;i<arr.size();i++){

        if(boardCount + arr[i] <= mid){

            boardCount += arr[i];
        }
        else{
            kUnit++;
            if(kUnit > k || arr[i] > mid){
                return false;
            }
            else{
                boardCount = arr[i];
            }
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &arr, int k)
{
    //    Write your code here.


    int sum = 0;
    for(int i=0;i<arr.size();i++){

        sum += arr[i];
    }


    int s = 0;
    int e = sum;
    int ans = -1;
    int mid = s + (e -s)/2;

    while(s <= e){

        if(isPossible(arr,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e -s)/2;
    }

    return ans;
}
