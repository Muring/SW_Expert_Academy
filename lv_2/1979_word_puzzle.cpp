#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N, k;
        cin >> N >> k;

        // Create the board
        int **map = new int*[N];
        for(int i = 0; i < N; i++)
            map[i] = new int[N];

        // Board input
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cin >> map[i][j];
        }

        // 가로 확인
        int ans = 0;
        for(int i = 0; i < N; i++){
            int flag = 0;
            for(int j = 0; j < N; j++){
                if(map[i][j] == 1){
                    flag++;
                    if(flag == k && j == N - 1)
                        ans++;
                }
                else{
                    if(flag == k) ans++;
                    flag = 0;
                }
            }
        }

        // 세로 확인
        for(int i = 0; i < N; i++){
            int flag = 0;
            for(int j = 0; j < N; j++){
                if(map[j][i] == 1){
                    flag++;
                    if(flag == k && j == N - 1)
                        ans++;
                }
                else{
                    if(flag == k) ans++;
                    flag = 0;
                }
            }
        }
        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}