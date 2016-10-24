//
//  main.c
//  Sk-C Swap using Pointer
//
//  Created by Student P_04 on 24/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include <stdio.h>
void swapnum(int*,int*);
int  main()
    {
        int num1,num2;
        printf("Enter the value Num1:\n");
        scanf("%d",&num1);
        printf("Enter the value Num2:\n");
        scanf("%d",&num2);
        printf("Number1 is %d\n",num1);
        printf("Number2 is %d\n",num2);
        swapnum(&num1,&num2);
        printf("After Swap\n");
        printf("Number1 is %d\n",num1);
        printf("Number2 is %d\n",num2);
        return 0;
        
    
    }
void swapnum(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


