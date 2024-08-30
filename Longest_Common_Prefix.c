char* longestCommonPrefix(char** strs, int strSize) {
    
    char *temp = strs[0];
    for(int i=1; i<strSize; i++){
        int j=0;
        while(temp[j] && strs[i][j] && temp[j] == strs[i][j]){j++;}
        temp[j] = '\0';
    }
    return temp;
}