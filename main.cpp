#include "binaryTree.h"
#include "gfg_bst.h"
#include <vector>
#include <iostream>
#include<string>
#include<stack>
#include<stdlib.h>

#include "PracticeTemplates.h"
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

void set_elements(int* dyn, int length)
{
	for (int x = 0; x < length; ++x)
	{
		dyn[x] = x;
	}
}


void print(int*& arr, int length)
{
	for (int x = 0; x < length; ++x)
	{
		cout << arr[x] << " ";
	}
	cout << endl;
}


void print_2d(int**& arr, int rows, int cols)
{
	for (int ridx = 0; ridx < rows; ++ridx)
	{
		for (int cidx = 0; cidx < cols; ++cidx)
			cout << arr[ridx][cidx] << " ";

		cout << endl;

	}
	cout << endl;
}

void print_oned_2d(int*& arr, int rows, int cols)
{
	for (int ridx = 0; ridx < rows; ++ridx)
	{
		for (int cidx = 0; cidx < cols; ++cidx)
			cout << arr[cols*ridx + cidx] << " ";

		cout << endl;

	}
	cout << endl;
}

/// <summary>
/// If passing a unique pointer then need to pass ref
/// </summary>
/// <param name="mat"></param>
/// <param name="rows"></param>
/// <param name="cols"></param>
template<typename funt>
void print_simple_tmpl(unique_ptr<funt>& mat, int rows, int cols)
{
	for (int ridx = 0; ridx < rows; ++ridx)
	{
		for (int cidx = 0; cidx < cols; ++cidx)
			cout << mat[cidx + cols*ridx]<< " ";

		cout << endl;

	}
	cout << endl;
}

void print_tmplt_mat(unique_ptr<Mat<int>> &mat, int rows, int cols)
{
	for (int ridx = 0; ridx < rows; ++ridx)
	{
		for (int cidx = 0; cidx < cols; ++cidx)
			cout << mat->get(ridx,cidx) << " ";

		cout << endl;

	}
	cout << endl;
}

void one_d_dynamic_arr()
{
	int* dynamic_arr;
	int num_elements = 10;

	dynamic_arr = new int[num_elements];

	//print(dynamic_arr, num_elements);
	set_elements(dynamic_arr, num_elements);
	print(dynamic_arr, num_elements);

	delete[] dynamic_arr;
}


void two_d_dynamic_arr()
{
	int** matrix;
	int rows = 10;
	int cols = 10;

	matrix = new int *[rows];
	for (int ridx = 0; ridx < rows; ++ridx)
	{
		int* row_data = new int[rows];		
		matrix[ridx] = row_data;
	}


	for (int ridx = 0; ridx < rows; ++ridx)
	{
		int* row_data = new int[rows];
		set_elements(row_data, cols);
		matrix[ridx] = row_data;

	}
	print_2d(matrix, rows, cols);

	for (int ridx = 0; ridx < rows; ++ridx)
	{
		delete[] matrix[ridx];
	}
	delete [] matrix;
}

void one_dto_2d()
{
	int* mat;
	int rows = 10;
	int cols = 10;

	mat = new int [rows * cols];

	set_elements(mat, rows * cols);
	print_oned_2d(mat, rows, cols);
	delete[] mat;


}

template<typename T>

T square(T x)
{
	return x * x;
}

int main(int argc, char* argv[])
{
	//one_dto_2d();
	//cout << square(5) << endl;
	//cout << square(5.6) << endl;
	int r = 2;
	int c = 3;

	auto m = make_unique<Mat<int>>(r,c);

	auto unp = unique_ptr<int[]>(new int[r*c]);
	print_simple_tmpl(unp, r, c);


	/*print_tmplt_mat(m, r, c);
	m->set_elements();
	print_tmplt_mat(m, r, c);*/
}


