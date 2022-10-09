#include <iostream>
using namespace std;
#define SPACE 10

class TreeNode
{
    public:
    int value;
    TreeNode* left;//This is the pointers 
    TreeNode *right;
    // Here are the  default constructors 
    TreeNode()
    {
        value=0;
        left=NULL;
        right=NULL;
    }
    TreeNode(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }
};

class BST
{
    public:TreeNode* root;

    BST()
    {
        root=NULL;
    }
    
    bool isEmpty()
    {
        if (root==NULL)
        return true;
        else
        return false;
        
    }

    void insertnode(TreeNode *new_node)
    {
        if (root==NULL)
        {
            root=new_node;
            cout<<"Value inserted as root node"<<endl;
            return ;

        }
        else{
            TreeNode *temp=root;
            while(temp!=NULL)
            {
                if(new_node->value==temp->value)
                {
                    cout<<"Value already exist, Try another one"<<endl;
                    return;

                }
                else if((new_node->value<temp->value) && (temp->left==NULL))
                {
                    temp->left=new_node;
                    cout<<"Value inserted to the left"<<endl;
                    break;
                }
                else if(new_node->value<temp->value)
                {
                    temp=temp->left;
                }
                else if((new_node->value>temp->value) && (temp->right==NULL))
                {
                    temp->right=new_node;
                    cout<<"Value inserted to the right"<<endl;
                    break;
                }
                else{
                    temp=temp->right;
                }
            }//End of while 
        }// End of else 
    }// End of function  

    void print2D(TreeNode *r,int space)
    {
        if (r==NULL) //Base condition
        return;
        space+=SPACE;  //Increase distance between levels
        print2D(r->right,space);
        cout<<endl;
        for(int i=SPACE;i<space;i++) //Proit current node after space count
        cout<<" ";
        cout<<r->value<<"\n";
        print2D(r->left,space); //Process left child
    }

    void printpreorder(TreeNode *r)
    {
        if(r==NULL)
        return;
        cout<<r->value<<" ";
        printpreorder(r->left);
        printpreorder(r->right);
    }
};

int main() {
    cout<<"Tree Data structure:";
    int option,val;
    BST obj;
    
    do{
        cout<<"Enter your choice: 0 to exit"<<endl;
        cout<<"1. Insert Node"<<endl;
        cout<<"2. search Node"<<endl;
        cout<<"3. Delete Node"<<endl;
        cout<<"4. Print Preorder "<<endl;
        cout<<"5. Clear Selection"<<endl;
        cout<<"0. Exit program "<<endl;
        
        cout<<"Enter your choice:";
        cin>>option;
        TreeNode *new_node=new TreeNode();   //the pointer created in the heap memory
        switch(option)
        {
            case 0:cout<<"EXit"<<endl;
            break;
            
            case 1:cout<<"insertion"<<endl;
            cout<<"Enter the value for insertion:"<<endl;
            cin>>val;
            new_node->value=val;
            obj.insertnode(new_node);
            cout<<endl;

            break;
            
            case 2:cout<<"search"<<endl;
            break;
            
            case 3:cout<<"Delete"<<endl;
            break;
            
            case 4:cout<<"Print"<<endl;
            obj.printpreorder(obj.root);
            break;
            
            case 5:cout<<"Clear"<<endl;
            break;
            
            default:
            cout<<"Enter valid choice"<<endl;
        }
    }while(option!=0);
    
    

    return 0;
}