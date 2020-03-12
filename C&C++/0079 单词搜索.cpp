/*
给定一个二维网格和一个单词，找出该单词是否存在于网格中。
单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。

示例:

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

给定 word = "ABCCED", 返回 true.
给定 word = "SEE", 返回 true.
给定 word = "ABCB", 返回 false.

*/

//回溯法的典型例题
//Match函数用来判断word路径上所有字符能否在矩阵中找到相应位置
bool Match(char** board, int boardSize, int boardColSize, int m, int n, char* word, int pathLength, bool** visit){
    if(word[pathLength]=='\0'){
        return true;
    } //全部成功匹配
    bool hasPath=false;
    //行列不越界，元素和路径中的值匹配，没有去过这个格子
    if(m>=0 && m<boardSize && n>=0 && n<(boardColSize) && board[m][n]==word[pathLength] && !visit[m][n]){
        ++pathLength;   //满足条件，匹配成功，去匹配下一个字符
        visit[m][n]=true;
        //搜索周围的格子
        hasPath=Match(board, boardSize, boardColSize, m-1, n, word, pathLength, visit)
            ||Match(board, boardSize, boardColSize, m, n-1, word, pathLength, visit)
            ||Match(board, boardSize, boardColSize, m+1, n, word, pathLength, visit)
            ||Match(board, boardSize, boardColSize, m, n+1, word, pathLength, visit);

        if(!hasPath){
            --pathLength; //此路不通，退回上一个字符
            visit[m][n]=false;
        }
    }
    return hasPath;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word){
    //需要一个空数组来存储去过哪些点
    int **visit = (int **)malloc(sizeof(int *) * boardSize);
    for (int k = 0; k < boardSize; k++) {
        visit[k] = (int *)malloc(sizeof(int) * (*boardColSize));
        memset(visit[k], 0x0, sizeof(int) * (*boardColSize));
    }

    int pathLength = 0;   //输入字符串的下标
    for(int m=0; m<boardSize; m++){
        for(int n=0; n<*boardColSize; n++){
            if(Match(board, boardSize, *boardColSize, m, n, word, pathLength, visit)){
                return true;
            } 
        }
    }
    return false;
}


