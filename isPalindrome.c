#include <stdio.h>  
#include <stdbool.h>  
    
struct node
{  
    int data;  
    struct node *next;  
};      
typedef struct node NODE;
  
NODE *head, *tail = NULL,*p;  
int size = 0;  
     
void add(int data)
 {  
      
    p=(NODE*)malloc(sizeof(NODE));  
    p->data = data;  
    p->next = NULL;  
      
    
    if(head == NULL)
	 {  
         
        head = p;  
        tail = p;  
    }  
    else {  
         
        tail->next = p;  
        
        tail = p;  
    }  
     
    size++;  
}  
   
  
NODE* reverseList(NODE *temp)
{  
    NODE *current = temp;  
    NODE *prevNode = NULL, *nextNode = NULL;  
      
   
    while(current != NULL){  
        nextNode = current->next;  
        current->next = prevNode;  
        prevNode = current;  
        current = nextNode;  
    }  
    return prevNode;  
}  
   
  
void checkPalindrome()
{  
    NODE *current = head;  
    bool flag = true;  
      int i;
     
    int mid = (size%2 == 0)? (size/2) : ((size+1)/2);  
      
    
    for(i=1;i<mid;i++)
	{  
        current=current->next;  
    }  
      

    NODE *revHead = reverseList(current->next);  
   
     
    while(head != NULL && revHead != NULL){  
        if(head->data != revHead->data){  
            flag = false;  
            break;  
        }  
        head = head->next;  
        revHead = revHead->next;  
    }  
   
    if(flag)  
        printf("\nlinked list is a palindrome\n");  
    else  
        printf("\nlinked list is not a palindrome\n");  
}  
      
  
void display() {  
   
    NODE *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes Are : \n");  
    while(current != NULL) {  
        
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
     
    add(10);  
    add(30);  
    add(50);  
    add(20);  
    add(10);  
      
    display();  
      
      
    checkPalindrome();  
      
    return 0;  
}
