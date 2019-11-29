//stack
#include <stdio.h>
int top;
void  check (char str[ ], int n, char stack [ ])
{
    for(int i = 0 ; i < n ; i++ )
    {
        if (str [ i ] == '(')
        {
            top = top + 1;
            stack[ top ] = '(';
        }
        if(str[ i ] == ')' )
        {
            if(top == -1 )
            {
                top = top -1 ;
                break ;
             }
            else
            {
                 top = top -1 ;
            }
        }
    }
    if(top == -1)
        printf("Bieu thuc hop le!\n");
    else
        printf("Bieu thuc khong hop le!\n");
}

int main ( )
{
    char str[50];
    printf("Nhap vao mot bieu thuc!\n");
    scanf("%s",str);
    char stack [50];
    top = -1;
    check(str , 50 , stack) ;
    return 0;
}
