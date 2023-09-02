// input
// 1
// 2
// 3
// 4
// -1
// Output 1 :
// Linked List: 1 2 3 4 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" ";

class node{
public:
    int val;
    node*next;
    node*prev;
    node()
    {
        this->val=0;
        this->next=NULL;
        this->prev=NULL;
    }
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    node*head=NULL;
    node*curr=NULL;
    node*prev=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val<0) break;
        node*newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            curr=newnode;
        }
        else
        {
            curr->next=newnode;
            newnode->prev=curr;
            curr=newnode;
        }
    }
    if(head==NULL)
    {
        cout<<"Linked List is empty.";
    }
    else
    {
        cout<<"Linked List: ";
        print(head);
    }
}

