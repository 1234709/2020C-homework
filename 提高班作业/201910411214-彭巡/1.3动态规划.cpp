
#include <iostream>
using namespace std;
int v;//������� 
int n;//���� 
int a[31];  //�����Ʒ����� 
int dp[20001] = { 0 };  //dp[i]��ʾ�����ݻ�Ϊiʱ�ɷ������Ʒ����� ��ע��Ҫ��ʼ��Ϊ0 

int main()
{
	int i, j;
	cin >> v >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)//��ѭ��������ÿ������ 
	{
		for (j = v; j >= a[i]; j--)//��ѭ��������ÿ���ݻ� 
		{
			if (dp[j] > (dp[j - a[i]] + a[i]))
				dp[j] = dp[j];
			else
				dp[j] = dp[j - a[i]] + a[i];  //ȡ���ֵ�����Ž� 

		}
	}
	//�����С���ݻ� 
	cout <<"���ӵ�ʣ��ռ���СΪ"<<endl<< v - dp[v] << endl;
	system("pause");
	return 0;
}
