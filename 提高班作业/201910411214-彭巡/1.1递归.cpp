#include <algorithm>
#include <iostream>
using namespace std;
int fun(int a[], int first, int high,int x) {
	int middle = (first + high) / 2;
	if (first > high)
		return 1;
	if (x == a[middle])
		return middle;
	else if (x < a[middle])
		return fun(a, first, middle - 1, x);
	else
		return fun(a, middle + 1, high, x);

}
int main()
{

	int a[100];
	int n = 0, x = 0, m = 0;
	int temp;
	char c;
	cout << "����һ�������м��ÿո����" << endl;
	cin >> a[n++];
	while ((c = getchar()) != '\n')
	{
		cin >> temp;
		a[n++] = temp;
	}
	sort(a, a + n);
	cout << "����Ҫ���ҵ���ֵ" << endl;
	cin >> x;
	m = fun(a, 0,n-1, x);
	//printf("%d", m);
	if (m == x)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	system("pause");
	return 0;
}
