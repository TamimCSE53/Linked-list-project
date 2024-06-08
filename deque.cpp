#include <bits/stdc++.h>
using namespace std;

#define      ll       long long
#define     allok()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// Deque implementation using linked list;

struct node
{
    ll data;
    struct node *next;
};

struct node *fr=NULL;
struct node *bk=NULL;

void push_fr ( ll x )
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

void push_bk ( ll x )
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
        bk->next = newnode;
        bk = newnode;
    }
}

void display ( )
{
    struct node *tmp;
    if ( fr == NULL && bk == NULL ) {
        cout << "Deque is empty.\n";
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

void pop_fr ( )
{
    struct node *tmp;
    tmp = fr;
    if ( fr == NULL && bk == NULL ) {
        cout << "No node in deque to pop.\n";
    }
    else {
        fr = fr->next;
        free ( tmp );
    }
}

void pop_bk ( )
{
    struct node *tmp;
    tmp = fr;
    if ( fr == NULL && bk == NULL ) {
        cout << "No node in deque to pop.\n";
    }
    else if ( fr->next == bk ) {
        free ( bk );
        fr->next = NULL;
        bk = fr;
    }
    else {
        while ( tmp->next != bk ) {
            tmp = tmp->next;
        }
        free ( bk );
        bk = tmp;
        bk->next = NULL;
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

    // queue
    // enq(10);
    // enq(30);
    // enq(20);
    // enq(40);


    //   stack
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


     // dequeue
  //   push_fr(10);
   //  push_fr(30);
   //  push_fr(20);
   //  push_bk(40);
    // push_bk(60);
   //  push_bk(50);
    // pop_fr();
    // pop_fr();
    // pop_bk();
    // pop_bk();
    // display();




 return 0;
}