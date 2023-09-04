#include<iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
link *start=NULL,*start1=NULL;
link *current,*node;
void create(link *&start)
{
    int n;
    cout<<"how many nodes u want to create:";
    cin>>n;
    cout<<"enter all elements:";
    for(int i=0;i<n;i++)
    {
        node=new link();
        cin>>node->data;
        node->next=NULL;
        if(start==NULL)
        {
            start=node;
            current=node;
        }
        {
            current->next=node;
            current=node;
        }
    }
}
void display(link *&ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;

}
int main()
{
    cout<<"Enter first linked list \n";

    create(start);

    cout<<"Enter 2nd linked list\n ";

    create(start1);
    cout<<"Displaying first linked list: ";
    display(start);
    cout<<"Displaying 2nd linked list: ";
    display(start1);

    return 0;
}
//takundanashe
