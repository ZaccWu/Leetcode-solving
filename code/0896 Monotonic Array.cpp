bool isMonotonic(int* A, int ASize) {
    if(A[0]==A[ASize-1]){
        for(int i=1;i<ASize;i++){
            if(A[i]!=A[i-1]){
                return false;
            }
        }
    }
    if(A[0]>A[ASize-1]){
        for(int i=1;i<ASize;i++){
            if(A[i]>A[i-1]){
                return false;
            }
        }
    }
    if(A[0]<A[ASize-1]){
        for(int i=1;i<ASize;i++){
            if(A[i]<A[i-1]){
                return false;
            }
        }
    }
    return true;
}
