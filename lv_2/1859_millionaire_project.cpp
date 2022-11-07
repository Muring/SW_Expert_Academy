#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{
        // �̹� �׽�Ʈ ���̽��� �Է� ���� ���ڸ� ���� �Է�
        cin >> N;
        
        // ���ڸ� ���ʷ� �Է� ����
        vector<int> arr(N);
        for(int i = 0; i < N; i++)
            cin >> arr[i];

        int max = arr[N - 1];
        long result = 0;
        for(int i = N - 1; i >= 0; i--){
            if(max > arr[i])
                result += max - arr[i];
            else
                max = arr[i];
        }

        cout << "#" << test_case << " " << result << endl;

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}