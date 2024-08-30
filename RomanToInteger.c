int check(char s){
    if (s == 'I') return 1;
    else if (s == 'V') return 5;
    else if (s == 'X') return 10;
    else if (s == 'L')return 50;
    else if (s == 'C') return 100;
    else if (s == 'D') return 500;
    else if (s == 'M') return 1000;
    return 0;
}

int romanToInt(char* s) {
    int result = 0;
    for(int i=0; i<strlen(s); i++){
        if(s[i] == 'I' && s[i+1] == 'V' || s[i] == 'I' && s[i+1] == 'X'){
            result -= 1;
        }else if(s[i] == 'X' && s[i+1] == 'L' || s[i] == 'X' && s[i+1] == 'C'){
            result -= 10;
        }else if(s[i] == 'C' && s[i+1] == 'D' || s[i] == 'C' && s[i+1] == 'M'){
            result -= 100;
        }else{
            result += check(s[i]);
        }
    }    
    return result;
}