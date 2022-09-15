#pragma region solve

#include <iostream>
#define endl '\n'
using namespace std;

struct node
{
	int score;
	node* next;
	node* otherNode;
};
node y1[22];
node y2[3];
node y3[3];
node y4[5];
int a[10];

void SetMap()
{
	for (int i = 0; i < 22; i++)
	{
		y1[i].score = i * 2;
		if(i < 22) y1[i].next = &y1[i + 1];
	}
	y1[5].otherNode = &y2[0];
	y1[10].otherNode = &y4[0];
	y1[15].otherNode = &y3[0];

	y2[0].score = 13;
	y2[1].score = 16;
	y2[2].score = 19;
	y2[0].next = &y2[1];
	y2[1].next = &y2[2];
	y2[2].next = &y4[2];

	y3[0].score = 28;
	y3[1].score = 27;
	y3[2].score = 26;
	y3[0].next = &y3[1];
	y3[1].next = &y3[2];
	y3[2].next = &y4[2];

	y4[0].score = 22;
	y4[1].score = 24;
	y4[2].score = 25;
	y4[3].score = 30;
	y4[4].score = 35;
	y4[0].next = &y4[1];
	y4[1].next = &y4[2];
	y4[2].next = &y4[3];
	y4[3].next = &y4[4];
	y4[4].next = &y1[20];
}

bool checkBlue(node& n)
{
	if (n.score == 10 || n.score == 20 || n.score == 30) return true;
	return false;
}

int go(int* arr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	SetMap();
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	return 0;
}

#pragma endregion