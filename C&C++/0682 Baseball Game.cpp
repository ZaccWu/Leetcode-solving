int calPoints(char** ops, int opsSize) {
    int* pint = malloc(sizeof(int)*opsSize), idx = -1, mark = 0;
    char c;
    for(int i = 0; i < opsSize; i++){
        c = *(ops[i]);
        if(c == 'C'){
            mark -= pint[idx--]; 
        }else{
            if(isdigit(c) || c == '-' ) 
                pint[++idx] = atoi(ops[i]);     /* Converts a string to an integer */
            else if(c == 'D') 
                pint[++idx] = pint[idx]*2; 
            else if(c == '+')
                pint[++idx] = pint[idx] + pint[idx - 1];
            else
                return 0;
            mark += pint[idx];
        }
    }
    free(pint);
    return mark;
}
