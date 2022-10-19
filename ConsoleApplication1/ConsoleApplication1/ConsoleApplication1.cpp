// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N, answer=0;
	int peoples[1000];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> peoples[i];
	}
	sort(peoples, peoples + N);
	for (int i = 0; i < N; i++)
	{
		int A=peoples[i], B=answer;
		answer += peoples[i]*(N-i);
	}
	cout << answer;
}
