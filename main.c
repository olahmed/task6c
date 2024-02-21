/**
 ******************************************************************************
 * @file           : task 6
 * @author         : ola ahmed
 * @brief          : pointers
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */
    char name[];
    char char_1;
/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declaration Section Start ************ */

/* ********************** Global Declaration  Section End   *********** */

/* ********************** Sub-Program Declarations Section Start ****** *///functions
    char *find_first(char *str, char ch);
/* ********************** Sub-Program Declarations Section End ******** */

/* ********************** Sub-Program Section Start ******************* */
   int main()
{
    char checking_val;
    printf("please enter the character :");
    scanf("%c",&char_1);
    printf("%c \n ",char_1);
    printf("please enter your name :");
    scanf("%s",&name);
    printf("\n %s \n",name);
    checking_val = find_first(&name,char_1);
    printf("returned value = 0x%X",checking_val);
    return 0;
}
/* ********************** Sub-Program Section End ******************** */

/* ********************** Sub-Program definition Section Start ******* */
char *find_first(char *str, char ch)
{
    int i;
    int return_val=0;
    for (i=0; i<10; i++)
    {
        if (ch==*(str++))
        {
           return_val=str;
           break;
        }
        else
        {
           return_val=NULL;
        }
    }
    return &return_val;
}


/* ********************** Sub-Program definitions Section End ******** */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      18 feb 2024           num3
*/
