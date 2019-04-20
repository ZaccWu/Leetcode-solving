bool backspaceCompare(char* S, char* T) {
    int i = strlen(S);
    int j = strlen(T);
    //going from back to front;
    int countS = 0, countT = 0;
    //any i or j should be considered
    while (i >= 0 || j >= 0) {
        //# +1, other but has remaining # -1, note --i
        while (i >= 0 && (S[i] == '#' || countS > 0)) 
            countS += S[i--] == '#' ? +1 : -1;
        
        while (j >= 0 && (T[j] == '#' || countT > 0))
            countT += T[j--] == '#' ? +1 : -1;
        
        //i and j could be netagive
        if (i < 0 || j < 0)
            return i == j;//posible true if i == j
        
        if (S[i--] != T[j--])
            return false;
    }
    
    return i == j; //only when i == j
}
