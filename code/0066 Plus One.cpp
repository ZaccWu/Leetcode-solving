/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int n = digitsSize + 1;
    int *ret = (int*)malloc(sizeof(int) * n);
   
    int carry = 1;
    for(int i = digitsSize - 1; i >= 0; i--){
        int sum = digits[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ret[i + 1] = sum;
    }
    if(carry){
        ret[0] = carry;
        *returnSize = digitsSize + 1;
        return ret;
    }
    *returnSize = digitsSize;
    return ret + 1;
}
