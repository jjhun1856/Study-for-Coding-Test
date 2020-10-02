#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, K;
	cin >> N >> K;
	
	vector<int> vc(N);
	for(int i=0; i<N; ++i)
		vc[i] = i+1;
	
	int pos = 0;
	cout << "<";
	while(!vc.empty()) {
		for(int i=1;i<K;++i) {
			pos++;
			if(pos >= vc.size() && vc.size() != 0)
				pos = pos % vc.size();
		} 
		if(vc.size() > 1)
			cout << vc[pos] << ", ";
		else 
			cout << vc[pos] << ">" << endl;	
		vc.erase(vc.begin()+pos);
		if(pos >= vc.size() && vc.size() != 0)
			pos = pos % vc.size();
	}	
	cout << endl;
	return 0;
}
