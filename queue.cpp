#include <bits/stdc++.h>
using namespace std;

#define      ll       long long
#define     allok()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// Queue implementation using linked list

struct node
{
    ll data;
    struct node *next;
};

struct node *fr=NULL;
struct node *bk=NULL;

void enq ( ll x )
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
        cout << "Queue is empty.\n";
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

void dqu ( )
{
    struct node *tmp;
    tmp = fr;
    if ( fr == NULL && bk == NULL ) {
        cout << "No node in queue\n";
    }
    else {
        fr = fr->next;
        free ( tmp );
    }
}

ll peak ()
{
    if ( fr == NULL && bk == NULL ) {
        cout << "No node in queue\n";
        return 0;
    }
    return fr->data;
}

int main ( ) {

    // enq(10);
    // enq(30);
    // enq(20);
    // enq(40);




 return 0;
}