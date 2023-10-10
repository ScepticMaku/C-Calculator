#include <stdio.h>
int main(){
    int num[1],result;
    char op;
    printf("Simple Calculator"
           "\nEnter numbers and operators (i.e 2+4):\n");
    scanf("%d %c %d",&num[0],&op,&num[1]);
    switch(op){
    case '+': result=num[0]+num[1];
        break;
    case '-': result=num[0]-num[1];
        break;
    case '*': result=num[0]*num[1];
        break;
    case '/': result=num[0]/num[1];
        break;
    default:
        printf("---------------------------------------"
           "\nOutput: Syntax error");
        return 0;
    }
    printf("---------------------------------------"
           "\nOutput: %d",result);
    return 0;
}
