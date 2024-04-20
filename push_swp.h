#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct s_list
{
	    int data;
	        struct s_list *next;
} t_list;

/**********************/
typedef struct Node 
{
    int data;
    struct Node* next;
} Node;

/**********************/

void printList(t_list *head);
void ft_lstadd_back(t_list **head, int data);
void  func(int *arr,int arr_size);
char	*ft_itoa(int nb);
int	ft_atoi(const char *str);
/********************************/
typedef struct Stack
 {
    Node* top;
 }  Stack;

/*******************************/
void push(Stack* stack, int data);
int pop(Stack* stack);
void swap(Stack* stack);
void rotate(Stack* stack);
void push_to_other(Stack* from, Stack* to);
#endif
