/*
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

示例 1：
输入：s = "We are happy."
输出："We%20are%20happy."
 
限制：
0 <= s 的长度 <= 10000
*/

char* replaceSpace(char* s){
    char *news=malloc(sizeof(char)*10000);//要足够大，不然不能通过
    int i=0;
    while(*s!='\0'){
        if(*s==' '){
            news[i++]='%';
            news[i++]='2';
            news[i++]='0';
        }else{
            news[i++]=*s;
        }
        s++;
    }
    news[i]='\0'; // C语言可不要忘了加这个
    return news;
}
/*
简单粗暴的办法，就是遍历一遍然后替换就行，时间复杂度O(n)，但是空间上用了一个新的数组
*/
