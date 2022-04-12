#include <stdio.h>
#include <stdint.h>
#include "stack.h"
void *Stack;
uint8_t StacKType = 0;
uint8_t Init_Stack_Type(int Type)
{
    if(Stack == NULL)
    {
        return ACTION_NOT_OK;
    }
    else
    {
        switch (Type)
        {
        case INT_TYPE_STACK:
            {
                Type = INT_TYPE_STACK;
                break;
            }
        case DOUBLE_TYPE_STACK:
            {
                Type = DOUBLE_TYPE_STACK;
                break;
            }
        case CHAR_TYPE_STACK:
            {
                Type = CHAR_TYPE_STACK;
                break;
            }    
        default:
            {
                return ACTION_NOT_OK;
            }
        }
    }
    return ACTION_OK;
}
uint8_t Return(void)
{
    int a = 1;
    int b = 2;
    return ACTION_NOT_OK;
    return 10;
}
uint8_t PushBack(void *value)
{
    if(Stack == NULL)
    {
        if(StacKType == INT_TYPE_STACK)
        Stack = malloc();
        
    }
}