// Input 1 :
// 5
// 2 3 9 6 1
// 3
// 8
// Output 1 :
// 2 3 8 9 6 1 


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
void insertathead(node*&head,int val)
{
    node*newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
void insert_at_pos(node*&head,int val,int pos)
{
    node*temp=head;
    node*newnode=new node(val);
    if(pos==1)
    {
        insertathead(head,val);
    }
    pos=pos-1;
    while(pos--)
    {
        temp=temp->next;
    }
    node*pre=temp->prev;
    newnode->next=pre->next;
    pre->next=newnode;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    node*head=NULL;
    node*curr=NULL;
    node*prev=NULL;
    while(n--)
    {
        int val;
        cin>>val;
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
    //print(head);
    //cout<<endl;
    int va,pos;
    cin>>pos>>va;
    insert_at_pos(head,va,pos);
    print(head);
    
}

