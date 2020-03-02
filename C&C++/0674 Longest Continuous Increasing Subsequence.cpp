int findLengthOfLCIS(int* nums, int numsSize) {
    int j=1,max=1;
    if(numsSize==0){
        return 0;
    }
    for(int i=1;i<numsSize;i++){
        j++;
        if(nums[i]<=nums[i-1]){
            j=1;
        }
        if(max<j){
            max=j;
        }
    }
    return max;
}
