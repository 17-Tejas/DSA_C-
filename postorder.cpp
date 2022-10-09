#include<iostream>
using namespace std;
#define SPACE 10

class TreeNode{
    public: int value;
    TreeNode *left;
    TreeNode *right;

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
    public: TreeNode *root;

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

    void insert(TreeNode *new_node)
    {
        if(root==NULL){
        root=new_node;
        cout<<"Value inserted at root Node"<<endl;

        }
        else{
            TreeNode *temp=root;
            while(temp!=NULL)
            {
                if(new_node->value==temp->value)
                cout<<"Value already exist :"<<endl;

                else if ((new_node->value<temp->value) && (temp->left==NULL))
                {
                    temp->left=new_node;
                    cout<<"Value inserted at left Node:"<<endl;
                    break;

                }
                else if(new_node->value<temp->value){
                temp=temp->left;
                break;
                }

                else if ((new_node->value>temp->value) && (temp->right==NULL))
                {
                    temp->left=new_node;
                    cout<<"Value inserted at left Node:"<<endl;
                    break;
                }

                else
                temp=temp->right;
                


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

    void postorder(TreeNode *r)
    {
        if (r=NULL)
        return;
        postorder(r->left);
        postorder(r->right);
        cout<<r->value<<" ";
    }

};

int main()
{
    int option,val;
    BST obj;
    do{
        cout<<"Enter your choice :: 0 to exit"<<endl;
        cout<<"1.Insertion"<<endl;
        cout<<"2.Display "<<endl;
        cout<<"3.Clear"<<endl;
        cout<<"4.Print Post order "<<endl;
        cout<<"0.Exit Program"<<endl;

        cout<<"\n Enter your choice:";
        cin>>option;
        TreeNode *new_node=new TreeNode();

        switch(option){
            case 0:
            break;

            case 1:cout<<"Insertion : ";
            cout<<"Enter the value :";
            cin>>val;
            new_node->value=val;
            obj.insert(new_node);
            break;

            case 2:
            obj.print2D(obj.root,5);
            break;

            case 3:cout<<"clear :"<<endl;
            system("cls");
            break;

            case 4:
            cout<<"Post Order "<<endl;
            obj.postorder(obj.root);
            break;


            default:cout<<"\n Invalid input"<<endl;

        }

    }while(option!=0);
    

}