// Online C compiler to run C program online
/*
請設計一段程式碼輸出如下:
    1
   121
  12321
 1234321
123454321
*/
#include <stdio.h>


int main()
{         
    int input = 0;
    scanf("%d", &input);
    for(int i=1; i<=input; i++){
        for(int j=input-i; j>0; j--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int j=i-1; j>0; j--)printf("%d", j);
        printf("\n");
    }
}
              