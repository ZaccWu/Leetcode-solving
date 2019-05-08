bool lemonadeChange(int* bills, int billsSize){
    int f5=0,f10=0,f20=0;
    for(int i=0;i<billsSize;i++){
        if(bills[i]==5) f5++;
        if(bills[i]==10){
            f10++;
            if(f5>=1) f5--;
            else return false;
        }
        if(bills[i]==20){
            f20++;
            if(f5>0 && f10>0) f5--,f10--;
            else if(f5>=3) f5-=3;
            else return false;
        }
    }
    return true;
}

