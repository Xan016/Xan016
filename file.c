#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
typedef struct Node 
{
    int data;
    struct Node* next;
} Node;

// Stack structure
typedef struct Stack
 {
    Node* top;
 }  Stack;

// Function prototypes

// Function to push an element onto the stack

void push(Stack* stack, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop an element from the stack
int pop(Stack* stack)
{
    if (stack->top == NULL) {
        printf("Stack is empty.\n");
        exit(EXIT_FAILURE);
    }
    int data = stack->top->data;
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

// Function to swap the top two elements of the stack
void swap(Stack* stack) {
    if (stack->top == NULL || stack->top->next == NULL){
        return; // Do nothing if there is only one or no elements
    }
    int temp = stack->top->data;
    stack->top->data = stack->top->next->data;
    stack->top->next->data = temp;
}

// Function to rotate the stack
void rotate(Stack* stack)
{
    if (stack->top == NULL || stack->top->next == NULL) {
        return; // Do nothing if there is only one or no elements
    }
    Node* last = stack->top;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = stack->top;
    stack->top = stack->top->next;
    last->next->next = NULL;
}

// Function to push the top element of one stack onto the other stack
void push_to_other(Stack* from, Stack* to)
{
    if (from->top == NULL)
    {
        return; // Do nothing if 'from' stack is empty
    }
    push(to, pop(from));
}

int main(int argc, char* argv[]) 
{
    // Create stacks a and b
             Stack a;
             Stack b;    // Declare variables a and b of type Stack

         a.top = NULL;
         b.top = NULL; 

    // Push integers from command line arguments to stack b
    for (int i = argc - 1; i >= 1; i--)
    {
        push(&b, atoi(argv[i]));
    }

         // Example moves
        //    swap(&b);
             swap(&b);
             rotate(&b);
             rotate(&b);
             rotate(&b);
             push_to_other(&b, &a);
             push_to_other(&b, &a);
             push_to_other(&b, &a);

        
       
        //  rotate(&b); 
        //  rotate(&b);
        //  rotate(&b);
        //  rotate(&b);
        //  rotate(&b);
       //   rotate(&b);
       //  rotate(&b);

    // Print the contents of stacks a and b (for demonstration)
    printf("Stack a: ");
    while (a.top != NULL) {
        printf("%d ", pop(&a));
    }
    printf("\n");

    printf("Stack b: ");
    while (b.top != NULL) {
        printf("%d ", pop(&b));
    }
    printf("\n");

    return 0;
}

/*
int main(int argc, char* argv[])
 {
    // Create stacks a and b
    Stack a = { .top = NULL };
    Stack b = { .top = NULL };

    // Push integers from command line arguments to stack b
    for (int i = argc - 1; i >= 1; i--) {
        push(&b, atoi(argv[i]));
    }

    // Example moves
    swap(&a);
    push_to_other(&b, &a);
    rotate(&a);

    // Print the contents of stacks a and b (for demonstration)
    printf("Stack a: ");
    while (a.top != NULL) {
        printf("%d ", pop(&a));
    }
    printf("\n");

    printf("Stack b: ");
    while (b.top != NULL) {
        printf("%d ", pop(&b));
    }
    printf("\n");

    return 0;
}
*/









- 👋 Hi, I’m @Xan016
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...

<!---
Xan016/Xan016 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
