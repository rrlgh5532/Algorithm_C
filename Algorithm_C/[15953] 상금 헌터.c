//
//  [15953] 상금 헌터.c
//  Algorithm_C
//
//  Created by 이기호 on 2022/05/14.
//https://www.acmicpc.net/problem/15953


#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int prize17[]={0,500,300,300,200,200,200,50,50,50,50,30,30,30,30,30,10,10,10,10,10,10};
    int prize18[]={0,512,256,256,128,128,128,128,64,64,64,64,64,64,64,64,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32};
    int T = 0;
    int a = 0;
    int b = 0;
    int i =0;
    int prize =0;
    
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        
        if(a>21){
            a=0;
        }
        if(b>31){
            b=0;
        }
        
        prize = (prize17[a]+prize18[b])*10000;
        printf("%d\n",prize);
    }
    return 0;
}
