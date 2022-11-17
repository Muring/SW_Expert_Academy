#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N;
        cin >> N;

        vector<vector<int>> arr(N, vector<int>(N));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cin >> arr[i][j];
        }

        cout << "#" << test_case << endl;

        for(int i = 0; i < N; i++){
            for(int j = N - 1; j >= 0; j--)
                cout << arr[j][i];
            cout << " ";

            for(int j = N - 1; j >= 0; j--)
                cout << arr[N - 1 - i][j];
            cout << " ";

            for(int j = 0; j < N; j++)
                cout << arr[j][N - 1 - i];
            cout << endl;
        }
    }
    return 0;
}