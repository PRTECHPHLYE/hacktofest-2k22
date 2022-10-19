#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename t>
class treenode
{
public:
    t data;
    vector<treenode<t> *> children;
    treenode(t data)
    {
        this->data = data;
    }
};
treenode<int> *takeinput()
{
    int data;
    cout << "enter the root data" << endl;
    cin >> data;
    treenode<int> *root = new treenode<int>(data);
    queue<treenode<int>*>q;
    q.push(root);
    while(q.size()!=0)
    {
        treenode<int>*front=q.front();
        q.pop();
        int x;
        cout<<"how many child of "<<front->data<<endl;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cout<<"enter the "<<i<<"th child data of "<<front->data<<endl;
            cin>>data;
            treenode<int>*child=new treenode<int>(data);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}
void depth(treenode<int>*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
       depth(root->children[i],k-1);
    }
}
int main()
{
    treenode<int>*root=takeinput();
    depth(root,3);
}