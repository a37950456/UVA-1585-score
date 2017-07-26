//
//  main.cpp
//  score
//
//  Created by Tina Tsai on 2017/7/26.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//有一個O分數可以累加 遇到X從頭計算

#include <cstdio>
#include <cstring>
using namespace std;


int main(){
    
    int i=0;
    char cases[80]={'\0'};  //設空字串
     scanf ("%d",&i);
         while(i--){
             scanf("%s", cases);
             int score = 0;
             int count = 0;
             
            for(int j=0;j<=strlen(cases);j++){ //strlen 取字串長度
                if(cases[j] =='O'){  //遇到Ｏ就繼續做
                   ++count;
                }
                else{
                    count = 0;   //遇到Ｘ counter歸零
                }
                score+= count ;
            }
             printf("%d\n",score);
    }
    return 0;
}
