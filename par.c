#include <stdio.h>

#define RUN(x, y) case x: return check(y) && check(waitfor)

int check(char waitfor)
{
    int a = getchar();

    if (waitfor == '"')
    {
        while (a = getchar() != '"')
            if (a == -1) return 0;
        return 1;
    }
    else
    {
        switch(a)
        {
            RUN('[', ']'); RUN('(', ')'); RUN('<', '>'); RUN('{', '}'); RUN('"', '"');
            case '}': case '>': case ')': case ']': case '\n': return a == waitfor;
        }
    }
}

int main()
{
    printf("%s\n", check('\n')?"OK":"FALSE");
    return 0;
}
