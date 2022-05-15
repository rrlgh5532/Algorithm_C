//
//  [11720번] 숫자의 합.c
//  Algorithm_C
//
//  Created by 이기호 on 2022/05/14.
////
//https://www.acmicpc.net/status?user_id=rrlgh5532&problem_id=11720&from_mine=1

#include <stdio.h>

int main_11720(int argc, const char * argv[]) {
    // insert code here...
    int num1=0;
    int i=0;
    int result = 0;
    char arr[100];
    
    scanf("%d", &num1);
    scanf("%s",arr);
    
    for(i=0;i<num1;i++){
        result+=arr[i]-48;
    }
    
    printf("%d\n",result);
    return 0;
}
