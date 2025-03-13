class Solution {
public:
    string addBinary(string a, string b) {
        int indexA = a.length() - 1;
        int indexB = b.length() - 1;
        int valueA = 0;
        int valueB = 0;
        int sum = 0;
        int carry = 0;
        string result = "";

        while(indexA < a.length() || indexB < b.length() || carry!= 0){
            if(indexA >= 0) valueA = a[indexA] - '0';
            if(indexB >= 0) valueB = b[indexB] - '0';
            sum = valueA + valueB + carry;

            carry = sum/2;
            sum = sum%2;
            char newchar = sum + '0';
            // 注意: 如果是 result = result + newchar; 則輸出會是反過來的
            result = newchar + result;

            indexA--;
            indexB--;
            valueA=0;
            valueB=0;
        }
        return result;
    }
};
