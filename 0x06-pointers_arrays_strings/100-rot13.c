#include "main.h"


char *rot13(char *str)
{

        char *original_str = str;

        for (; *str; )
        {
            if (*str >= 'a' && *str <= 'z')
            {
                if(*str + 13 <= 'z')
                {
                    *str += 13;
                }

                else{
                    *str = 97 + ((*str + 13) - 122 - 1);
                }
            }

            else if(*str >= 'A' && *str <= 'Z')
            {
                if (*str + 13 <= 'Z')
                {
                    *str += 13;
                } 
                else{
                    *str = 65 + ((*str + 13) - 90 - 1);
                }
            }
            str++;
        }

        return (original_str);
}
