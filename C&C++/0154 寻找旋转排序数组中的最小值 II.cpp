/*
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。
例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一个旋转，该数组的最小值为1。  

示例 1：

输入：[3,4,5,1,2]
输出：1
示例 2：

输入：[2,2,2,0,1]
输出：0

*/

int minArray(int* numbers, int numbersSize){
    int idx1=0;
    int idx2=numbersSize-1;
    int idxMid=idx1;    //针对万一数组就是升序的情况，此时返回第一个
    while(numbers[idx1]>=numbers[idx2]){
        if(idx2-idx1==1){ //两个指针相邻的时候，退出查找
            idxMid=idx2;
            break;
        }
        idxMid=(idx1+idx2)/2;   //整除

        //idx1, idx2, idxMid三个指针指的数字相等，只能用顺序查找
        //[1,0,1,1,1], [1,1,1,0,1]这种
        if(numbers[idx1]==numbers[idx2] && numbers[idx1]==numbers[idxMid])
            return Order(numbers, idx1, idx2);
        if(numbers[idx1]<=numbers[idxMid]) idx1=idxMid;
        if(numbers[idx2]>=numbers[idxMid]) idx2=idxMid;
    }
    return numbers[idxMid];
}

//实现独立功能的单独列一个程序
int Order(int* numbers, int idx1, int idx2){
    int result=numbers[idx1];
    for(int i=idx1+1; i<=idx2; i++){
        if(result>numbers[i]) result=numbers[i];
    }
    return result;
}

/*
虽然很简单，但是给旋转数组是有原因的，这题其实是考察二分查找

过程：
[3,4,5,1,2] 中间5大于idx1的，idx1移到中间5的位置
 ↑       ↑
[3,4,5,1,2] 中间1小于idx2的，idx2移到中间1的位置
     ↑   ↑
[3,4,5,1,2] 相邻时，idx2指向最小数字
     ↑ ↑

需要考虑的边际用例：
数组长度为1或三个指针相等（快排）
数组就是升序的
*/
