#include "main.h"

void (*run(char *opcode))(unsigned int count, stack_t **stack)
{
        int i = 0;


        instruction_t instruction_s[] = {
		{"pall", pall},
                {"push", push},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nop},
                {NULL, NULL}
        };
        while (instruction_s[i].f != NULL)
        {
                if (strcmp(opcode, instruction_s[i].opcode) == 0)
		{
			return (instruction_s[i].f);
		}
                i++;
        }
        /*try adding a null return here*/
return (NULL);
}

int execute_commands(char *opcode, stack_t **head, unsigned int count)
{
	/**head = NULL;*/
	if (run(opcode))
	{
		run(opcode)(count, head);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instructions %s\n", count, opcode);
		exit(EXIT_FAILURE);
	}
return (0);
}
