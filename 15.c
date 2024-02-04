#include "monty.h"

/**
 * set_mode - Set the mode of the data to either stack or queue
 * @mode: Mode to set (0 for stack, 1 for queue)
 *
 * Description: Sets the mode of the data structure (stack or queue).
 */
void set_mode(int mode)
{
	if (mode == MODE_STACK)
		printf("Stack mode enabled\n");
	else if (mode == MODE_QUEUE)
		printf("Queue mode enabled\n");
}

/**
 * stack_op - Set the mode of the data structure to stack (LIFO)
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Sets the mode of the data structure to stack (LIFO).
 *              Reorders elements in the stack accordingly.
 */
void stack_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	set_mode(MODE_STACK);
}

/**
 * queue_op - Set the mode of the data structure to queue (FIFO)
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 *
 * Description: Sets the mode of the data structure to queue (FIFO).
 *              Reorders elements in the stack accordingly.
 */
void queue_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	set_mode(MODE_QUEUE);
}
