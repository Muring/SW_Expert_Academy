#include <iostream>
#include <vector>

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
        
        // 격자판 생성
        vector<vector<char>> map(N, vector<char>(M));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++)
                cin >> map[i][j];
        }

        // 격자판 검사
        string answer;
        int board[4] = { 0, };

        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(map[i][j] == '#'){
                    if((i + j) % 2 == 0) 
                        board[0]++;
                    else 
                        board[1]++;
                }
                else if(map[i][j] == '.'){
                    if((i + j) % 2 == 0)
                        board[2]++;
                    else
                        board[3]++;
                }
            }
        }

        if(board[0] > 0 && board[1] > 0)
            answer = "impossible";
        else if(board[0] > 0 && board[2] > 0)
            answer = "impossible";
        else if(board[1] > 0 && board[3] > 0)
            answer = "impossible";
        else if(board[2] > 0 && board[3] > 0)
            answer = "impossible";
        else
            answer = "possible";

        cout << "#" << test_case << " " << answer << endl;
    }
    return 0;
}