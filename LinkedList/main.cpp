#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class LinkedList
{
    private:
    Node * head;

    public:
        LinkedList(){
        head=NULL;
        }
        void display()
        {
            Node *p=head;
            while(p!=NULL)
            {
                cout<<p->data<<" ";
                p=p->next;
            }
        }
      void InsertTail(int value)
      {
          Node *newNode=new Node();
          newNode->data=value;
          newNode->next=NULL;

          if(head==NULL)
          {
              head=newNode;
              return;
          }
          Node *last=head;
          while(last->next!=NULL)
          {
              last=last->next;
          }
          last->next=newNode;
      }
        void InsertHead(int value)
        {
            Node *newNode=new Node();
            newNode->data=value;
            newNode->next=head;
            head=newNode;

        }
        int length()
        {
            Node *p=head;
            int l=0;
            while(p!=NULL)
            {
                p=p->next;
                l++;
            }
            return l;
        }
        void position(int p,int v)
        {

            Node *temp=new Node();
            temp->data=v;
            temp->next=NULL;
            if(p<0||p>length()){
                cout<<"Cant be zero or greater than size of list"<<" ";
            }
            if(p==0)
            {
                temp->next=head;
                head=temp;
            }
            else{
                    Node *temp2=head;

               for(int i=0;i<p-1;i++)
                {
                    temp2=temp2->next;
                }
                temp->next=temp2->next;
                temp2->next=temp;
            }
        }


};
int main()
{
LinkedList l;

l.InsertTail(2);
l.InsertTail(3);
l.InsertTail(4);
l.position(2,7);
l.position(3,12);

l.display();


    return 0;
}
