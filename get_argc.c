#include "main.h"
/**
 * get_argc - number of arguments for a command line
 * 
*/
int get_argc(char *buffer, int nread)
{
        int count = 0;
        char *buffer2;
        char *token;

        if (buffer == NULL)
                return(0);
        
        buffer2 = malloc((nread +1 ) * sizeof(char));
        if (buffer2 == NULL)
                return(0);
        
        buffer2 = strncpy(buffer2, buffer, nread);
        buffer2[nread] = '\0';

        if ((token = strtok(buffer2, " ")) != NULL )
                count++;
        while((token = strtok(NULL, " ")) != NULL)
        {
                count++;
        }
        free(buffer2);

        return (count);
}