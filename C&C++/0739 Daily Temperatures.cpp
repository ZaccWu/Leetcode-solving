/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* T, int TSize, int* returnSize) {
    *returnSize=TSize;
    int temp=0;
    int count=TSize-2;
    int *ret=(int*)malloc(sizeof(int)*TSize);
    ret[TSize-1]=0;
    for(int i=TSize-2;i>=0;i--){
        for(int j=1;j+i<TSize;j=j+temp){
            if(T[i]<T[i+j]){
                ret[count--]=j;
                break;
            }
            else if(ret[i+j]==0){
                ret[count--]=0;
                break;
            }           
            temp=ret[i+j];          
        }   
    }
    return ret;
}
