#include<stdio.h>
#include<string.h>
int flag;
int checker(char stg[]){
    for (int i = 1; stg[i] != '\0'; i++){
        if(!(stg[i] == '0' || stg[i] == '1')){
            return 1;
        }
    }
  return 0;
} 
void state(char stg[]){
    char current_state = 'A';
    for(int i = 0; stg[i] != '\0'; i++){
        switch (current_state)
        {
        case 'A':
            if(stg[i] == '0'){
                current_state = 'B';
            }else{
                flag = 1;
            }
            break;
        case 'B':
            if (stg[i] == '1')
            {
                current_state = 'C';
            }else{
                flag = 1;
            }
            break;
        case 'C':
            if (stg[i] == '0' || stg[i] == '1')
            {
                current_state = 'C';
            }
            break;
        }
        if(flag)
           break;
    }
    (current_state == 'C')?
    printf("String is Accepted\n"):
    printf("String is Rejected\n");
}
int main()
   {
    char stg[100];
    printf("Enter the string:");
    scanf("%s",&stg);
    while (checker(stg) != 0){
        printf("...........Not a Valid String.........\n");
        printf("Again enter the string:");
        scanf("%s",&stg);
    }
    state(stg);
    return 0;
    }
