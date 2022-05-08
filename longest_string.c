#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        puts("");
    else if (argc == 2)
        fputs(argv[1], stdout);

    else
    {
        size_t maxLength = 0, length;
        int increment, maxIndex = 0;
        for (increment = 1; increment < argc; increment++)
            {
                length = strlen(argv[increment]);
                if (length > maxLength)
                    {
                        maxLength = length;
                        maxIndex = increment;
                    }
                }
        fputs(argv[maxIndex],stdout);
    }
    return EXIT_SUCCESS;
}
