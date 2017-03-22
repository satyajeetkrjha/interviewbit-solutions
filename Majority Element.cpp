int Solution::majorityElement(const vector<int> &nums) {
    int n=nums.size();
    if(n==1)
    return nums[0];
     int result = 0, count = 0;
 
    for(int i = 0; i<n; i++ ) {
        if(count == 0){
            result = nums[ i ];
            count = 1;
        }else if(result == nums[i]){
           count++;
        }else{
           count--;
        }
    }
 
  return result;
}
