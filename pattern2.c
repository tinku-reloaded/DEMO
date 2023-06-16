#include <stdio.h>

int main()
{
    int i=0,j=0;
    int lines;
    char c;
    printf("enter number of lines ");
    scanf("%d",&lines);
    printf("enter character to print :");
    scanf("\n%c",&c);
    //upper pyramid
    for(i=(lines/2);i>0;i--){
        for(j=0;j<(lines/2);j++){
            if(j<i)
                printf(" ");
            else
                printf("%c ",c);
        }
        printf("\n");
    }
    
    //lower pyramid
    for(i=0;i<(lines/2)+1;i++){
        for(j=0;j<(lines/2);j++){
            if(j>=i)
                printf("%c ",c);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}