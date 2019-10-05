#include<iostream>
using namespace std;
template<class T>
class BinTree;
template<class T>
class Node {
	T data;
	Node *rc, *lc;
	friend class BinTree<T>;
	public:
	Node(T x =0)
	{
		data=x;
		rc=NULL;
		lc=NULL;
	}
};

template<class T>
class BinTree{
	Node<T> *root;
	public:
	BinTree(){root =NULL;}
	
	Node <T>* create(T item, T term)
	{
		T x;
		if(item!=term)
		{
			Node<T> * temp=new Node<T>(item);
			cout<<"Enter LChild of "<<item<<"...Enter -1 if NULL"<<endl;
			cin>>x;
			temp->lc=create(x,term);
			cout<<"Enter RChild of "<<item<<"...Enter -1 if NULL"<<endl;
			cin>>x;
			temp->rc=create(x,term);
			return temp;
		}
		return NULL;
	}
	
	
	void CreateBinTree(T term)
	{
		T item;
		cout<<"Creating the tree: "<<endl;
		cout<<"Enter the root(-1 to terminate): "<<endl;
		cin>>item;
		root=create(item,term);
	}

	void InOrder(Node<T> *root)
	{
		if(root!=NULL)
		{
			InOrder(root->lc);
			cout<<root->data<<" ";
			InOrder(root->rc);
		}
	}
	
int Equal(Node<T> *a, Node<T> *b)
{
	if((!a)&&(!b))
	return 1;
	if(a && b && (a->data==b->data) && Equal(a->lc,b->lc) && Equal(a->rc,b->rc))
	return 1;
	return 0;
}

void Check(BinTree<T> b)
{
	if(Equal(root,b.root))
	cout<<"EQUAL\n";
	else
	cout<<"NOT EQUAL\n";
}


int Search(T item)
{
	Node<T> *temp=root;
	while(temp)
	{
		if(temp->data==item)
		return 1;
		else
		if(item<temp->data)
		temp=temp->lc;
		else
		temp=temp->rc;
	}
	return 0;
}


void Insert(T item)
{
	Node<T> *temp=new Node<T>(item);
	if(root==NULL)
	{
		//root==temp;
		return;
	}
		Node<T>*prev,*cur;
		prev=NULL;
		cur=root;
		while(cur)
		{
			prev=cur;
			if(item==cur->data)
			{
				cout<<"Duplicate not allowed";
				delete temp;
				return;
			}
			else
			if(item<cur->data)
			cur=cur->lc;
			else
			cur=cur->rc;
		}
		if(item==prev->data)
		prev->lc=temp;
		else
		prev->rc=temp;
		return;
	}
	
void Delete(T item)
{
Node<T> *parent, *cur;

if(root==NULL)
	{
		cout<<"Empty Tree \n";
	   return;
	}


parent = NULL;
cur=root;
while(cur&&cur->data!=item)
{
	parent=cur;
	if(item<cur->data)
	     cur=cur->lchild;
	else
	     cur=cur->rchild;
}
if(cur=NULL)
{
	cout<<"Item not found \n";
	return;
}
Node<T> *q, *succ;



if(cur->lc==NULL) 		 
	q=cur->rc;
else if(cur->rc=NULL)		
	q=cur->lc;	
else{
	
	parent=cur;
	succ=cur->rc;		
	while(succ->lc)		
	{
	parent=succ;
	succ=succ->lc;
	}
cur->data = succ->data; 
cur=succ;
q=cur->rc;
}
if(parent ==NULL)			
{
	delete cur;
	root=q;
	return;
}
if(cur==parent->lc)
	parent->lch=q;
else
	parent->rc=q;
delete cur;
return;
}

Node<T>* Copy(Node<T>*)
{
	Node<T> * temp;
	if(root==NULL)
		return NULL;
	temp=new Node<T>();
	temp->data=root->data;
	temp->lchild=Copy(root->lchild);
	temp->rchild=Copy(root->rchild);
	return temp;
}

	void traversal()
		{
			cout<<"\nInOrder: ";
			InOrder(root);
		}
	

};

int main()
{
	int e,e1; 
	BinTree <int> a,b;
	a.CreateBinTree(10);
	b.CreateBinTree(10);
	cout<<"Given Tree:\n";
	a.traversal();
	cout<<"\n Enter item to be inserted\n";
	cin>>e;
	a.Insert(e);
	cout<<"\n Enter item to search\n";
	cin>>e1;
	a.Search(e1);
}
