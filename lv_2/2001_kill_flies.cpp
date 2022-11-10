#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N, M;
        cin >> N >> M;

        // 동적 배열
        int **arr = new int*[N];
        for(int i = 0; i < N; i++)
            arr[i] = new int[N];

        // 배열 입력
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cin >> arr[i][j];
        }

        int score = 0, max_score = 0;
        for(int i = 0; i < N - M + 1; i++)
        {
            for(int j = 0; j < N - M + 1; j++)
            {
                score = 0;
                for(int k = i; k < i + M; k++)
                {
                    for(int l = j; l < j + M; l++)
                        score += arr[k][l];
                }

                if(max_score < score)
                    max_score = score;
            }
        }
        cout << "#" << test_case << " " << max_score << endl;
        delete[] arr;
	}
    
	return 0;
}