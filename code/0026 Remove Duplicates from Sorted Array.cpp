int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    int i=1;
    int j=0;
    while(i<numsSize){
        if(nums[i]!=nums[j]){
            nums[j+1]=nums[i];
            j++;
        }
        i++;
    }
    return (j+1);
}
