// �ð�, �޸� �� �ð��� �����ϱ�� �� 

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int T; // �׽�Ʈ ���̽� ����
	int M, N; // ���߹��� ���α���, ���α���
	int K; // ���߰� �ɾ��� �ִ� ��ġ�� ���� 
	int X, Y; // ������ ��ġ 
	
	vector<int> worms;
	cin >> T;
	
	for(int i=0; i<T; ++i) {
		cin >> M >> N >> K;
		
		vector< vector<int> > soil(N+1, vector<int>(M+1, 0));
		int worm = 0;
		
		for(int j=0; j<K; ++j) {
			cin >> Y >> X;
			soil[X+1][Y+1] = 1;
		}
	
		for(int j=1; j<N+1; ++j) {
			for(int k=1; k<M+1; ++k) {
				if(soil[j][k]==1 && soil[j-1][k]!=1 && soil[j][k-1]!=1) {
					worm += 1;
				}
			}
		}
		worms.push_back(worm);
		
		soil.clear();
	}
	
	for(int i=0; i<worms.size(); ++i) {
		cout << worms[i] << endl;
	}
	
	return 0;
}
