# Singly Linked List Project

## Overview
This project is a set of C programs that implement various operations on a singly linked list data structure. The programs are designed to perform tasks such as printing, adding, deleting, and manipulating elements in a linked list.

## Project Files
- `0-print_listint.c`: Contains a function to print the elements of a linked list.
- `1-listint_len.c`: Contains a function to return the number of elements in a linked list.
- `2-add_nodeint.c`: Contains a function to add a new node at the beginning of a linked list.
- `3-add_nodeint_end.c`: Contains a function to add a new node at the end of a linked list.
- `4-free_listint.c`: Contains a function to free a linked list.
- `5-free_listint2.c`: Contains a function to free a linked list and set the head to NULL.
- `6-pop_listint.c`: Contains a function to delete the head node of a linked list and return its data.
- `7-get_nodeint.c`: Contains a function to return the nth node of a linked list.
- `8-sum_listint.c`: Contains a function to calculate the sum of all data in a linked list.
- `9-insert_nodeint.c`: Contains a function to insert a new node at a given position in the linked list.
- `10-delete_nodeint.c`: Contains a function to delete a node at a specific index in the linked list.

## Compilation
To compile the programs, you can use the provided `main` files along with the corresponding source files. For example, to compile the program that tests the "Print list" function, you can use the following command:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o print_list

