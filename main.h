#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#define  _GNU_SOURCE

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(unsigned int line_number, stack_t **head);
} instruction_t;
int execute_commands(char *opcode, stack_t **head, unsigned int count);
void (*run(char *opcode))(unsigned int count, stack_t **stack);
void push(unsigned int count, stack_t **head);
void pall(unsigned int num, stack_t **head);
void push(unsigned int line_num, stack_t **head);
void pint(unsigned int line_num, stack_t **head);
void nop(unsigned int line_num, stack_t **head);
#endif /* MAIN_H */
