#include "binaryTree.h"
#include "gfg_bst.h"
#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<stdlib.h>
//#include<memory>

#include "PracticeTemplates.h"
#include "DDog.h"

//using namespace std;
//int main()
//{
//
//	/*gfgCircleLL* gcList = new gfgCircleLL();
//
//	gcList->gc_add(4);
//	gcList->gc_add(5);
//	gcList->gc_add(6);
//	gcList->gc_add(7);
//	gcList->gc_add(8);
//	gcList->gc_print();*/
//
//	/*gfgList* gs_list = new gfgList();
//
//	gs_list->gfg_add(5);
//	gs_list->gfg_add(10);
//	gs_list->gfg_add(15);
//	gs_list->gfg_add(40);
//
//
//	gfgList* gs_list2 = new gfgList();
//
//	gs_list2->gfg_add(2);
//	gs_list2->gfg_add(3);
//	gs_list2->gfg_add(20);
//	gs_list2->gfg_add(50);
//	gs_list2->gfg_add(60);
//	gs_list2->gfg_add(80);
//
//	gs_list->gfg_print();
//	gs_list2->gfg_print();
//	gs_list->merge_sorted(gs_list->headNode, gs_list2->headNode);
//
//	
//	gs_list->gfg_print();*/
//
//	//bool exists = gList->gfg_search(6);
//
//	//cout << "exists:" << exists << endl;
//
//	//gfgList* gs_list2 = new gfgList();
//
//	//gs_list2->gfg_add(2);
//	//gs_list2->gfg_add(3);
//	///*gs_list2->gfg_add(20);
//	//gs_list2->gfg_add(50);
//	//gs_list2->gfg_add(60);
//	//gs_list2->gfg_add(80);*/
//
//	//gs_list2->gfg_print();
//
//
//	//node *nhead = gs_list2->swapkthnode(gs_list2->headNode, 2, 1);
//	//gs_list2->headNode = nhead;
//
//	//gs_list2->gfg_print();
//
//	/*gfgList* gs_list = new gfgList();
//
//	gs_list->gfg_add(4);
//	gs_list->gfg_add(5);
//
//	gfgList* gs_list2 = new gfgList();
//
//	gs_list2->gfg_add(3);
//	gs_list2->gfg_add(4);
//	gs_list2->gfg_add(5);
//
//	
//	node *newhead = gs_list2->addTwoLists(gs_list->headNode, gs_list2->headNode);
//
//	gs_list2->headNode = newhead;
//	gs_list2->gfg_print();*/
//
//
//	//gfg_doublell* dl = new gfg_doublell();
//
//	//dl->gd_append(7);
//	//dl->gd_append(2);
//	//dl->gd_append(5);
//	//dl->gd_append(1);
//	//dl->gd_append(8);
//	//dl->gd_append(4);
//	//dl->gd_append(6);
//
//	//dl->gd_print();
//
//	////Node *sorted_dl = dl->ms_increasing(dl->headnode);
//
//	///*dl->headnode = sorted_dl;
//	//dl->gd_print();*/
//
//	//
//
//	////vector<int> sub_id = { 1,2,3,4,5 };
//
//	////vector < vector<int>> ids = { sub_id, sub_id, sub_id };
//
//	////cout << ids[2][4] << endl;
//	//
//	//stack<int> bin;
//	//int n = 5;
//	//while (n != 0)
//	//{
//	//	bin.push(n % 2);
//	//	n = n / 2;
//	//}
//
//	//while (!bin.empty())
//	//{
//	//	cout << bin.top();
//	//	bin.pop();
//	//}
//
//	//cout << endl;
//
////Node* root = new Node(10);
////root->left = new Node(20);
////root->right = new Node(30);
//////root->left->left = new Node(40);
//////root->left->right = new Node(50);
//////root->right->right = new Node(60);
////
//////int height = root->burn(root, root->left->right);
////int sum = 0;
////cout << root->countSubTUtil(root,30,sum)<<endl;
////	return 0;
//
//
//BNode* root1 = new BNode(5);
//root1->left = new BNode(1);
//root1->right = new BNode(0);
//root1->left->left = new BNode(10);
//root1->left->right = new BNode(4);
//root1->right->left = new BNode(7);
//root1->right->left->right = new BNode(9);
//
//
//BNode* root2 = new BNode(10);
//root2->left = new BNode(7);
//root2->right = new BNode(20);
//root2->left->left = new BNode(4);
//root2->left->right = new BNode(9);
//
////vector<int> common = root1->findCommon(root1, root2);
//
////for (size_t i = 0; i < common.size(); i++)
////{
////	cout << common[i] << " ";
////}
////
////cout << endl;
//root1->printIn(root1);
//root1->correctBST2(root1);
////BNode *root_deleted = root1->deleteNode(root1, 9);
//root1->printIn(root1);
//
//return 0;
//
//
//
//
//
//
//
//}

//template<typename typ>
//void set_elements(typ* dyn, int length)
//{
//	for (int x = 0; x < length; ++x)
//	{
//		dyn[x] = x;
//	}
//}
//
//
//void print(int*& arr, int length)
//{
//	for (int x = 0; x < length; ++x)
//	{
//		cout << arr[x] << " ";
//	}
//	cout << endl;
//}
//
//
//void print_2d(int**& arr, int rows, int cols)
//{
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		for (int cidx = 0; cidx < cols; ++cidx)
//			cout << arr[ridx][cidx] << " ";
//
//		cout << endl;
//
//	}
//	cout << endl;
//}
//
//template<typename typ>
//
//void print_oned_2d(typ*& arr, int rows, int cols)
//{
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		for (int cidx = 0; cidx < cols; ++cidx)
//			cout << arr[cols*ridx + cidx] << " ";
//
//		cout << endl;
//
//	}
//	cout << endl;
//}
//
///// <summary>
///// If passing a unique pointer then need to pass ref
///// </summary>
///// <param name="mat"></param>
///// <param name="rows"></param>
///// <param name="cols"></param>
//template<typename funt>
//void print_simple_tmpl(unique_ptr<funt>& mat, int rows, int cols)
//{
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		for (int cidx = 0; cidx < cols; ++cidx)
//			cout << mat[cidx + cols*ridx]<< " ";
//
//		cout << endl;
//
//	}
//	cout << endl;
//}
//
//void print_tmplt_mat(unique_ptr<Mat<int>> &mat, int rows, int cols)
//{
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		for (int cidx = 0; cidx < cols; ++cidx)
//			cout << mat->get_2D(ridx,cidx) << " ";
//
//		cout << endl;
//
//	}
//	cout << endl;
//}
//
//void one_d_dynamic_arr()
//{
//	int* dynamic_arr;
//	int num_elements = 10;
//
//	dynamic_arr = new int[num_elements];
//
//	//print(dynamic_arr, num_elements);
//	set_elements(dynamic_arr, num_elements);
//	print(dynamic_arr, num_elements);
//
//	delete[] dynamic_arr;
//}
//
//
//void two_d_dynamic_arr()
//{
//	int** matrix;
//	int rows = 10;
//	int cols = 10;
//
//	matrix = new int *[rows];
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		int* row_data = new int[rows];		
//		matrix[ridx] = row_data;
//	}
//
//
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		int* row_data = new int[rows];
//		set_elements(row_data, cols);
//		matrix[ridx] = row_data;
//
//	}
//	print_2d(matrix, rows, cols);
//
//	for (int ridx = 0; ridx < rows; ++ridx)
//	{
//		delete[] matrix[ridx];
//	}
//	delete [] matrix;
//}
//
//void one_dto_2d()
//{
//	long* mat;
//	int rows = 10;
//	int cols = 10;
//
//	mat = new long [(long)rows * (long)cols];
//
//	set_elements(mat, rows * cols);
//	print_oned_2d(mat, rows, cols);
//	delete[] mat;
//
//
//}
//
//
//
//int main(int argc, char* argv[])
//{
//	//one_dto_2d();
//	//cout << square(5) << endl;
//	//cout << square(5.6) << endl;
//	/*int r = 2;
//	int c = 3;
//
//	auto m = make_unique<Mat<int>>(r,c);
//	m->set_elements();
//	auto m2 = make_unique<Mat<int>>(r,c);
//	m2->set_elements();
//
//	auto unp = unique_ptr<int[]>(new int[r*c]);
//	auto unp2 = unique_ptr<int[]>(new int[c*r]);
//	
//	auto res = (*m) + (*m2);
//	auto res1 = std::make_unique<Mat<int>>(res);
//	print_tmplt_mat(m, r, c);
//	print_tmplt_mat(m2, r, c);
//	print_tmplt_mat(res1, r, c);*/
//
//
//	/*print_tmplt_mat(m, r, c);
//	m->set_elements();
//	print_tmplt_mat(m, r, c);*/
//
//	/*int r = 3;
//	int c = 4;
//
//	
//	
//	shared_ptr<int> sp = std::make_shared<int>(5);
//	auto sp2 = make_shared<int[]>(4);
//	auto d = make_shared<Dog>("Buddy");
//	auto buffer = std::shared_ptr<char[]>(new char[64]);
//	
//
//	Dog simple_dog;*/
//	//Dog d2(simple_dog);
//
//	DDog* d = new DDog("Holler");
//	DDog* d2 = new DDog("WallE");
//	
//	DDog* d3(d);
//	DDog* d4 = d3;
//
//	cout <<"d3 "<< d3->m_name << " " << d3->m_age << endl;
//	cout <<"d4 "<< d4->m_name << " " << d4->m_age << endl;
//
//	delete d3;
//	delete d2;
//
//
//
//}
#include "CTree_11.h"
using namespace std;
int main()
{
	TNode<int>* root = new TNode<int>(10);

	root->left = new TNode<int>(10);
	root->right = new TNode<int>(20);
	root->left->left = new TNode<int>(30);
	root->left->right = new TNode<int>(40);
	root->right->left = new TNode<int>(50);
	root->right->right = new TNode<int>(60);

	

	vector<int> res = pre_order(root);

	for (vector<int>::iterator it = res.begin(); it != res.end(); ++it)
	{
		cout << *it << endl;
	}

	delete root;
	e

}


