void swap(int* nums, int size)
{
    for(int i = 0; i < size/2; i++)
    {
        int t = nums[i];
        nums[i] = nums[size-i-1];
        nums[size-i-1] = t;
    }
}

void rotate(int* nums, int Numsize, int k)
{
    k %= Numsize;
    swap(nums, Numsize);
    swap(nums, k);
    swap(nums+k, Numsize-k);
}
