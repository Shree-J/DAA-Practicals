#include <iostream>  
using namespace std;  
struct Node {  
   int data;  
   struct Node* next;  
   };  
Node* deletingFirstNode ( struct Node* head )  
{  
   if ( head == NULL )  
   return NULL;  
   Node* tempNode = head;  
   head = head -> next;  
   delete tempNode;  
   
   return head;  
}  
Node* removingLastNode ( struct Node* head )  
{  
   if ( head == NULL )  
   return NULL;  
   
   if ( head -> next == NULL ) {  
      delete head;  
      return NULL;  
   }  
Node* secondLast = head;  
while ( secondLast -> next -> next != NULL )  
secondLast = secondLast->next;  
delete ( secondLast -> next );  
secondLast -> next = NULL;  
   
return head;  
}  
void push ( struct Node** head, int newData )  
{  
   struct Node* newNode1 = new Node;  
   newNode1 -> data = newData;  
   newNode1 -> next = ( *head );  
   ( *head ) = newNode1;  
}  
int main()  
{  
   Node* head = NULL;  
   push ( &head, 25 );  
   push ( &head, 45 );  
   push ( &head, 65);  
   push ( &head, 85 );  
   push ( &head, 95 );  
   
         Node* temp;  
   
   cout << "Linked list created " << endl; for ( temp = head; temp != NULL; temp = temp -> next )  
   cout << temp->data << "-->";  
   if ( temp == NULL )  
   cout << "NULL" << endl;  
   head = deletingFirstNode (head);  
   cout << "Linked list after deleting head node" << endl; for ( temp = head; temp != NULL; temp = temp -> next )  
   cout << temp->data << "-->";  
   if ( temp == NULL )  
   cout<<"NULL"<<endl;  
   head = removingLastNode (head);  
   cout << "Linked list after deleting last node" << endl; for ( temp = head; temp != NULL; temp = temp -> next )  
   cout << temp -> data << "-->";  
   if ( temp == NULL )  
   cout << "NULL";  
   
   return 0;  
}
