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
        
        // ������ ����
        vector<vector<char>> map(N, vector<char>(N));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cin >> map[i][j];
        }

        // ������ �˻�
        string answer;
        int i, j;
        int side = 0, flag = 0;
        int total_count = 0;

        // ��ü # ���� Ȯ��
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(map[i][j] == '#')
                    total_count++;
            }
        }
        
        // ���簢���� �� ���� ���� Ȯ��
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

        // ����Ǵ� ���簢�� ������ # ���� Ȯ��
        int count = 0;
        for(int k = 0; k < i + side; k++){
            for(int l = 0; l < j + side; l++)
                if(map[k][l] == '#') count++;
        }

        // ����Ǵ� ���簢�� ������ # ������ ���簢���� ���� �� ��ü �� �������� # ������ ��ġ�ϴ��� Ȯ��
        if(count == side * side && count == total_count)
            answer = "yes";
        else
            answer = "no";

        cout << "#" << test_case << " " << answer << endl;
    }
    return 0;
}