/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* ret = (int*)malloc(numsSize*sizeof(int));
    int i, j;
    
    memset(ret, 0, numsSize*sizeof(int));
    for(i=0, j=0; i<numsSize; i++){
        if(ret[nums[i]-1]++)
            j++;
    }
    *returnSize = j;
    
    for(i=0, j=0; i<numsSize; i++){
        if(ret[i]>1) 
            ret[j++] = i+1;
    }
    return ret;
}
