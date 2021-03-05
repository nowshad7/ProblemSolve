#include <bits/stdc++.h>
using namespace std;

#define N 5

pair<int, int> rowMaxSum(int mat[N][N])
{
	int idx = -1;
	int maxSum = INT_MIN;

	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			sum += mat[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
			idx = i;
		}
	}

	pair<int, int> res;

	res = make_pair(idx, maxSum);

	return res;
}

pair<int, int> colMaxSum(int mat[N][N])
{
	int idx = -1;
	int maxSum = INT_MIN;

	for (int j = 0; j < N; j++) {
		int sum = 0;
		for (int i = 0; i < N; i++) {
			sum += mat[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
			idx = j;
		}
	}

	pair<int, int> res;

	res = make_pair(idx, maxSum);

	return res;
}

int main()
{

	int mat[N][N] = {
		{ 1, 2, 3, 4, 5 },
		{ 5, 3, 1, 4, 2 },
		{ 5, 6, 7, 8, 9 },
		{ 0, 6, 3, 4, 12 },
		{ 9, 7, 12, 4, 3 },
	};

	pair<int, int> colMax = colMaxSum(mat);
	pair<int, int> rowMax = rowMaxSum(mat);

	cout << "Row " << rowMax.first + 1 << " has max sum " << rowMax.second<<endl;
	cout << "Col " << colMax.first + 1 << " has max sum " << colMax.second<<endl;
	cout << "Min: "<<min(rowMax.second, colMax.second)<<endl;


	return 0;
}
