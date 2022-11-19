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
        int N;
        cin >> N;
        
        // 격자판 생성
        vector<vector<char>> map(N, vector<char>(N));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cin >> map[i][j];
        }

        // 격자판 검사
        string answer;
        int i, j;
        int side = 0, flag = 0;
        int total_count = 0;

        // 전체 # 개수 확인
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(map[i][j] == '#')
                    total_count++;
            }
        }
        
        // 정사각형의 한 변의 길이 확인
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(map[i][j] == '#'){
                    while(map[i][j + side] == '#')
                        side++;
                    flag++;
                    break;
                }
            }
            if(flag == 1) break;
        }

        // 예상되는 정사각형 범위의 # 개수 확인
        int count = 0;
        for(int k = 0; k < i + side; k++){
            for(int l = 0; l < j + side; l++)
                if(map[k][l] == '#') count++;
        }

        // 예상되는 정사각형 범위의 # 개수가 정사각형의 넓이 및 전체 판 수에서의 # 개수와 일치하는지 확인
        if(count == side * side && count == total_count)
            answer = "yes";
        else
            answer = "no";

        cout << "#" << test_case << " " << answer << endl;
    }
    return 0;
}