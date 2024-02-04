#include "monty.h"

/**
 * process_line - Process each line of the Monty bytecode file
 * @line: Line to be processed
 * @line_number: Line number in the Monty bytecode file
 * @stack: Double pointer to the beginning of the stack
 *
 * Description: Parses each line of the Monty bytecode file and executes the
 *              corresponding opcode.
 */
void process_line(char *line, unsigned int line_number, stack_t **stack)
{
	char *opcode, *arg;
	int arg_val;

	while (*line == ' ' || *line == '\t')
		line++;

	if (*line == '\0' || *line == '#')
		return;

	opcode = strtok(line, " \t\n");
	arg = strtok(NULL, " \t\n");

	if (strcmp(opcode, "push") == 0)
	{

	if (arg == NULL || !is_number(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
		arg_val = atoi(arg);

		push(stack, arg_val);
	}
	else if (strcmp(opcode, "pall") == 0)
	{

		pall(*stack);
	}

	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
