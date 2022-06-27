#include <iostream>
#include "DataStructure/tree/BinarySearchTree.h"
#define endl '\n'
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	BinarySearchTree<int> bst(41);
	bst.insert(29);
	bst.insert(55);
	bst.insert(16);
	bst.insert(33);
	bst.insert(70);
	bst.insert(60);
	bst.insert(50);
	bst.insert(80);
	bst.insert(57);
	bst.insert(65);

	bst.erase(55);
	cout << "Preorder_traveral : ";
	bst.preorder_traversal(bst.begin());
	cout << endl;

	cout << "Inorder_traveral : ";
	bst.inorder_traversal(bst.begin());
	cout << endl;

	cout << "Postorder_traveral : ";
	bst.postorder_traversal(bst.begin());
	cout << endl;
	return 0;
}

