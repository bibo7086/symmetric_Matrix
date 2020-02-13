//
//  main.c
//  symmetric_Matrix
//
//  Created by Saeed Aliyu on 29/10/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> 


int main()
{
    int T, n,i, j, stat, count = 1;
    long int a[101][101];
    char string[3];
  
    scanf("%d", &T);
    while ( T--) {
    scanf("%s %s %d",string, string, &n);
        stat = 0;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                scanf("%ld", &a[i][j]);
                if(a[i][j] < 0)
                    stat = 1;
            }
        }
        
        for (i= 0 ; i < n; i++)
        {
            for (j = 0 ; j < n-1; j++)
            {
                if (a[i][j] !=a[n-i-1][n-1-j]){
                stat = 1;
                goto end;
                }
            }
        }
    end:
        printf("Test #%d: ", count++);
        if (stat)
            printf("Non-symmetric.\n");
        else
            printf("Symmetric.\n");
        
    }
return 0;
                }