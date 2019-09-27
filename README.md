# 0x19. C - Stacks, Queues - LIFO, FIFO
 -  **Stack**: In the pushdown stacks only two operations are allowed: push the item into the stack, and pop the item out of the stack.
 -  **Queues** :An excellent example of a queue is a line of students in the food court of the UC. New additions to a line made to the back of the queue, while removal (or serving) happens in the front. In the queue only two operations are allowed enqueue and dequeue.

## General
-   What do LIFO and FIFO mean
-   What is a stack, and when to use it
-   What is a queue, and when to use it
-   What are the common implementations of stacks and queues
-   What are the most common use cases of stacks and queues
-   What is the proper way to use global variables
-   How to work with git submodules

## Data structures
Please use the following data structures for this project. Don’t forget to include them in your header file.
```
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
```

```
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

## Compilation & Output
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Tests
We strongly encourage you to work all together on a set of tests 
-  ****The Monty language****
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
-  ****Monty byte code files**** 
Files containing Monty byte codes usually have the  `.m`  extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$
```
****The monty program****
-   Usage:  `monty file`
    -   where  `file`  is the path to the file containing Monty byte code
-   If the user does not give any file or more than one argument to your program, print the error message  `USAGE: monty file`, followed by a new line, and exit with the status  `EXIT_FAILURE`
-   If, for any reason, it’s not possible to open the file, print the error message  `Error: Can't open file <file>`, followed by a new line, and exit with the status  `EXIT_FAILURE`
    -   where  `<file>`  is the name of the file
-   If the file contains an invalid instruction, print the error message  `L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status  `EXIT_FAILURE`
    -   where  is the line number where the instruction appears.
    -   Line numbers always start at 1
-   The monty program runs the bytecodes line by line and stop if either:
    -   it executed properly every line of the file
    -   it finds an error in the file
    -   an error occured.
-   If you can’t malloc anymore, print the error message  `Error: malloc failed`, followed by a new line, and exit with status  `EXIT_FAILURE`.
-   You have to use  `malloc`  and  `free`  and are not allowed to use any other function from  `man malloc`  (realloc, calloc, …)

# Main functions
-  **monty.h:** add advanced functions.
-  **int main():** Main function.
-  **void add():** Adds the top two elements of the stack.
-  **void sub():** Subtracts the top element of the stack from the second   top element of the stack.
-  **void mul():** Multiplies the second top element of the stack with the top element of the stack.
-  **void div():** Divides the second top element of the stack by the top element of the stack.
-  **void mod():** Computes the rest of the division of the second top element of the stack by the top element of the stack.
-  **void swap():** Swaps the top two elements of the stack.
-  **void nop():**  Does nothing.
-  **void  pall():** Prints all the values on the stack, starting from the top of the stack.
-  **void  push():** Pushes an element to the stack.
-  **void  pint():** Prints the value at the top of the stack, followed by a new line.
-  **void  pop():** Removes the top element of the stack.
-  **void make_free_error():** Free memory stack

## Authors
-  Maribel Serna A
-  Luiz Ramirez
