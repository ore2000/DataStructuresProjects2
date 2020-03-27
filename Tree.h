#pragma once
#include "nodeObj.h"

using namespace std;
#ifndef TREE
#define TREE

template<class T>
class tree
{
public:

	node<T>* heada;
	node<T>* headb;
	node<T>* headc;
	node<T>* headd;
	node<T>* heade;
	node<T>* headf;
	node<T>* headg;
	node<T>* headh;
	node<T>* headi;
	node<T>* headj;
	node<T>* headk;
	node<T>* headl;
	node<T>* headm;
	node<T>* headn;
	node<T>* heado;
	node<T>* headp;
	node<T>* headq;
	node<T>* headr;
	node<T>* heads;
	node<T>* headt;
	node<T>* headu;
	node<T>* headv;
	node<T>* headw;
	node<T>* headx;
	node<T>* heady;
	node<T>* headz;
	node<T>* headMal;

	int  height = 0;
	long double foundComp = 0.0;
	long double notFoundComp = 0.0;
	long double compares = 0.0;


	tree()
	{
		heada = nullptr;
		headb = nullptr;
		headc = nullptr;
		headd = nullptr;
		heade = nullptr;
		headf = nullptr;
		headg = nullptr;
		headh = nullptr;
		headi = nullptr;
		headj = nullptr;
		headk = nullptr;
		headl = nullptr;
		headm = nullptr;
		headn = nullptr;
		heado = nullptr;
		headp = nullptr;
		headq = nullptr;
		headr = nullptr;
		heads = nullptr;
		headt = nullptr;
		headu = nullptr;
		headv = nullptr;
		headw = nullptr;
		headx = nullptr;
		heady = nullptr;
		headz = nullptr;
		headMal = nullptr;
	}

	void insert(T item, node<T> *&root)
	{
		if (item == "") return;
		if (root == nullptr)
		{
			root = new node<T>(item);
			height++;
		}
		else if (item < root->data)
		{
			insert(item, root->left);
		}
		else if (item > root->data)
		{
			insert(item, root->right);
		}
		else
		{

		}
	}

	void insert(T item)
	{
		if (item[0] == 'a')
		{
			insert(item, heada);
		}
		else if (item[0] == 'b')
		{
			insert(item, headb);
		}
		else if (item[0] == 'c')
		{
			insert(item, headc);
		}
		else if (item[0] == 'd')
		{
			insert(item, headd);
		}
		else if (item[0] == 'e')
		{
			insert(item, heade);
		}
		else if (item[0] == 'f')
		{
			insert(item, headf);
		}
		else if (item[0] == 'g')
		{
			insert(item, headg);
		}
		else if (item[0] == 'h')
		{
			insert(item, headh);
		}
		else if (item[0] == 'i')
		{
			insert(item, headi);
		}
		else if (item[0] == 'j')
		{
			insert(item, headj);
		}
		else if (item[0] == 'k')
		{
			insert(item, headk);
		}
		else if (item[0] == 'l')
		{
			insert(item, headl);
		}
		else if (item[0] == 'm')
		{
			insert(item, headm);
		}
		else if (item[0] == 'n')
		{
			insert(item, headn);
		}
		else if (item[0] == 'o')
		{
			insert(item, heado);
		}
		else if (item[0] == 'p')
		{
			insert(item, headp);
		}
		else if (item[0] == 'q')
		{
			insert(item, headq);
		}
		else if (item[0] == 'r')
		{
			insert(item, headr);
		}
		else if (item[0] == 's')
		{
			insert(item, heads);
		}
		else if (item[0] == 't')
		{
			insert(item, headt);
		}
		else if (item[0] == 'u')
		{
			insert(item, headu);
		}
		else if (item[0] == 'v')
		{
			insert(item, headv);
		}
		else if (item[0] == 'w')
		{
			insert(item, headw);
		}
		else if (item[0] == 'x')
		{
			insert(item, headx);
		}
		else if (item[0] == 'y')
		{
			insert(item, heady);
		}
		else if (item[0] == 'z')
		{
			insert(item, headz);
		}
		else
		{
			insert(item, headMal);
		}

	}
	void remove(T item, node<T>*& root)
	{
		if (item == "") return;
		T dataItem = root->data;
		if (root == nullptr)
		{
			return;
		}
		else if (item[1] < dataItem[1])
		{
			remove(item, root->left);
		}
		else if (item[1] > dataItem[1])
		{
			remove(item, root->right);
		}
		else
		{
			node<T>* oldNode;
			if (root->left == nullptr)
			{
				height--;
				oldNode = root;
				root = root->right;
				delete oldNode;
				return;
			}
			else if (root->right == nullptr)
			{
				height--;
				oldNode = root;
				root = root->left;
				delete oldNode;
				return;
			}

			oldNode = findMin(root->right);
			root->data = oldNode->data;
			remove(root->data, root->right);
		}
	}

	node<T>* find(T item)
	{
		if (item[0] == 'a')
		{
			return find(item, heada);
		}
		else if (item[0] == 'b')
		{
			return find(item, headb);
		}
		else if (item[0] == 'c')
		{
			return find(item, headc);
		}
		else if (item[0] == 'd')
		{
			return find(item, headd);
		}
		else if (item[0] == 'e')
		{
			return find(item, heade);
		}
		else if (item[0] == 'f')
		{
			return find(item, headf);
		}
		else if (item[0] == 'g')
		{
			return find(item, headg);
		}
		else if (item[0] == 'h')
		{
			return find(item, headh);
		}
		else if (item[0] == 'i')
		{
			return find(item, headi);
		}
		else if (item[0] == 'j')
		{
			return find(item, headj);
		}
		else if (item[0] == 'k')
		{
			return find(item, headk);
		}
		else if (item[0] == 'l')
		{
			return find(item, headl);
		}
		else if (item[0] == 'm')
		{
			return find(item, headm);
		}
		else if (item[0] == 'n')
		{
			return find(item, headn);
		}
		else if (item[0] == 'o')
		{
			return find(item, heado);
		}
		else if (item[0] == 'p')
		{
			return find(item, headp);
		}
		else if (item[0] == 'q')
		{
			return find(item, headq);
		}
		else if (item[0] == 'r')
		{
			return find(item, headr);
		}
		else if (item[0] == 's')
		{
			return find(item, heads);
		}
		else if (item[0] == 't')
		{
			return find(item, headt);
		}
		else if (item[0] == 'u')
		{
			return find(item, headu);
		}
		else if (item[0] == 'v')
		{
			return find(item, headv);
		}
		else if (item[0] == 'w')
		{
			return find(item, headw);
		}
		else if (item[0] == 'x')
		{
			return find(item, headx);
		}
		else if (item[0] == 'y')
		{
			return find(item, heady);
		}
		else if (item[0] == 'z')
		{
			return find(item, headz);
		}
		else
		{
			return find(item, headMal);
		}
	}

	node<T>* find(T item, node<T>* root)
	{
		T dataItem;
		if (root == nullptr)
		{
			notFoundComp += compares;
			compares = 0;
			return nullptr;
		}
		else
		{
			compares++;
			dataItem = root->data;
			if (item.compare(dataItem) < 0)
			{
				return find(item, root->left);
			}
			else if (item.compare(dataItem) > 0)
			{
				return find(item, root->right);
			}
			else
			{
				foundComp += compares;
				compares = 0;
				return root;
			}
		}
		
	}

	node<T>* findMin(node<T>* root)
	{
		if (root == nullptr)
		{
			return nullptr;
		}
		else if (root->left == nullptr)
		{
			return root;
		}
		return findMin(root->left);
	}

	node<T>* findMax(node<T>* root)
	{
		if (root == nullptr)
		{
			return nullptr;
		}
		else if (root->right == nullptr)
		{
			return root;
		}
		return findMin(root->right);
	}

	void clear(node<T>* root)
	{
		if (root == nullptr)
		{
			return ;
		}
		else
		{
			clear(root->left);
			clear(root->right);
			delete(root);
		}
	}

	int getHeight()
	{
		return height;
	}

};
#endif
