#ifndef _STACK_H_
#define _STACK_H_

struct StackNode;
typedef struct StackNode *PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);
Stack CreateStack(void); 
void MakeEmpty(Stack S);
void Pop(Stack S);
void Push(char x, Stack S);
char Top(Stack S);
#endif

