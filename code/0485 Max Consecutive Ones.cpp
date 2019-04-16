int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int j=0,max=0;
    for(int i=0;i<numsSize;i++){
        j++;
        if(nums[i]==0){
            j=0;
        }
        if(j>max){
            max=j;
        }
    }
    return max;
}
