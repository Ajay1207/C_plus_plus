#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class CTree_11
{
};

template<typename T> 
struct TNode 
{
	TNode* left;
	TNode* right;
	int    data;
	TNode(T val) 
	{ 
		data = val;
		left = right = nullptr;
		cout << "A tree node is created" << endl;
	}

	~TNode()
	{
		delete left;
		delete right;
		cout << "Tree node is destructed" << endl;
	}

};

template<typename T>
void pre_order_util(TNode<T>*& root, vector<T> &res)
{
	if (root == nullptr)
		return ;

	res.push_back(root->data);
	pre_order_util(root->left, res);
	pre_order_util(root->right, res);
}

template<typename T> 
vector<T> pre_order(TNode<T>*& root)
{
	vector<T> res;
	
	pre_order_util(root, res);


	return res;

}