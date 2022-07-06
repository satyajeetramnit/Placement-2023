#include <iostream>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
};
Node* getNode(int data){
   Node *newNode = new Node;
   newNode->data = data;
   newNode->next = NULL;
   return newNode;
}
bool isCircularList(Node *start){
   if(start == NULL)
      return true;
   Node *node = start->next;
   while(node != NULL && node != start){
      node = node->next;
   }
   if(node == start)
      return true;
      return false;
}
int main() {
   Node *start = getNode(10);
   start->next = getNode(20);
   start->next->next = getNode(30);
   start->next->next->next = getNode(40);
   start->next->next->next->next = getNode(50);
   start->next->next->next->next->next = start;
   if (isCircularList(start))
      cout << "The list is circular list";
   else
      cout << "The list is not circular list";
}