#include "main.h"
/**
 * get_command
*/
char **get_command(char *buffer, int argcount)
{
        char *token = NULL;
        char **command;
        int i = 1;

        command = malloc(argcount * sizeof(char *));
        token = strtok(buffer, " $\n");
        if (token == NULL)
        {
                command[0] = NULL;
                return (command);
        }
        command[0] = malloc((strlen(token)) * sizeof(char));
        strcpy(command[0], token);
        while ((token = strtok(NULL, " $\n")) != NULL)
        {
        command[i] = malloc((strlen(token)) * sizeof(char));
        strcpy(command[i], token);
        i++;
        }
        command[i] = NULL;
        return(command);
}