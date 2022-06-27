//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//struct node
//{
//	char data;
//	node* left;
//	node* right;
//};
//node arr[100];
//int cnt = 0;
//void preorder(node* current)
//{
//	if (current != NULL)
//	{
//		cout << current->data;
//		preorder(current->left);
//		preorder(current->right);
//	}
//}
//
//void inorder(node* current)
//{
//	if (current != NULL)
//	{
//		inorder(current->left);
//		cout << current->data;
//		inorder(current->right);
//	}
//}
//
//void postorder(node* current)
//{
//	if (current != NULL)
//	{
//		postorder(current->left);
//		postorder(current->right);
//		cout << current->data;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	// 65 ~ 90 A~Z
//
//	int count = 0;
//	cin >> count;
//	for (int i = 0; i < count; i++)
//	{
//		char parant, left, right;
//		cin >> parant;
//		cin >> left;
//		cin >> right;
//
//		if (left != '.')
//		{
//			arr[parant].left = &arr[left];
//		}
//		if (right != '.')
//		{
//			arr[parant].right = &arr[right];
//		}
//		arr[parant].data = parant;
//		arr[left].data = left;
//		arr[right].data = right;
//	}
//
//	preorder(&arr[65]);
//	cout << endl;
//	inorder(&arr[65]);
//	cout << endl;
//	postorder(&arr[65]);
//	return 0;
//}
//
