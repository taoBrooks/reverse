//
//  main.c
//  reverse
//
//  Created by wangyu on 14-8-6.
//  Copyright (c) 2014年 tz. All rights reserved.
//

#include <stdio.h>

void reverse(char *str){
    char *end = str;
    char temp;
    if(str){
        while (*end) {
            ++end;
        }
        --end;
    while(str < end){
        temp = *str;
        *str++ = *end;
        *end-- = temp;
        }
    }
}
int main(int argc, const char * argv[])
{
    char str[] = "helloworld";
    reverse(str);
    printf("%s\n",str);
    
    return 0;
}

