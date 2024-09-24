int titleToNumber(char* columnTitle) {
    int length = strlen(columnTitle);
    int val = 0;
    for(int i=0; i<length; i++){
        val = val * 26 + (columnTitle[i] - 'A' + 1);
    }
    return val;
}
