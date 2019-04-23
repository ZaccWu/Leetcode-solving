/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result =(int*)malloc(nums1Size*sizeof(int));
    *returnSize = nums1Size;
    for (int i = 0; i < nums1Size ; i ++)
        for (int j = 0; j < nums2Size; j ++) {
            if (*(nums2 + j) == *(nums1 + i)) {
                int k = j + 1;
                for (; k < nums2Size; k++) {
                    if (*(nums2 + k) > *(nums2 + j)) {
                        *(result + i) = *(nums2 + k);
                        break;
                    }
                }
                if (k == nums2Size) {
                    *(result + i) = -1;
                }
                break;
            }
        }
    return result;
}
