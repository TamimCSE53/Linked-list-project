#include <bits/stdc++.h>
using namespace std;

#define      ll       long long
#define     allok()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// Stack implementation using linked list;

struct node
{
    ll data;
    struct node *next;
};

struct node *fr=NULL;
struct node *bk=NULL;

void push ( ll x )
{
    struct node *newnode;
    newnode = ( struct node* ) malloc ( sizeof ( struct node ) );
    newnode->data = x;
    newnode->next = NULL;

    if ( fr == NULL && bk == NULL ) {
        fr = newnode;
        bk = newnode;
    }
    else {
        newnode->next = fr;
        fr = newnode;
    }
}

void display ( )
{
    struct node *tmp;
    if ( fr == NULL && bk == NULL ) {
        cout << "Stack is empty.\n";
    }
    else {
        tmp = fr;
        while ( tmp != NULL ) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
}

void pop ( )
{
    struct node *tmp;
    tmp = fr;
    if ( fr == NULL && bk == NULL ) {
        cout << "No node in stack to pop.\n";
    }
    else {
        fr = fr->next;
        free ( tmp );
    }
}

ll top ()
{
    if ( fr == NULL && bk == NULL ) {
        cout << "No node in Stack.\n";
        return 0;
    }
    return fr->data;
}

int main ( ) {

    // enq(10);
    // enq(30);
    // enq(20);
    // enq(40);

    //   push ( 10 );
    //   push ( 30 );
    //   push ( 20 );
    //   push ( 40 );
     //  pop();
    //   cout << top() << endl;
    //   pop();
    //   cout << top() << endl;
     //  display();
     //  pop();




 return 0;
}