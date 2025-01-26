#include <iostream>
#include <algorithm>

using namespace std;

int compare(string a, string b){
    int asize = a.size();
	int bsize = b.size();
	int asum = 0;
	int bsum = 0;

	// 1. 길이가 다르면, 짧은 순서대로 정렬
	if (asize != bsize) {
		return asize < bsize;
	}

	// 2. 길이가 같다면, 합을 이용해 작은 순서대로 정렬
	for (int i = 0; i < a.size(); i++) {
        
		if (a[i] >= '0' && a[i] <= '9') {
			asum += int(a[i]) - 48;
		}

		if (b[i] >= '0' && b[i] <= '9') {
			bsum += int(b[i]) - 48;
		}
	}

	if (asum != bsum) {
		return asum < bsum;
	}

	// 3. 1번과 2번 모두 안되면, 사전순으로 비교
	return a < b;
}

int main(){
    int n = 0;
    cin >> n;

    string s[50];

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    sort(s, s+n,compare);

    for(int i = 0; i < n; i++){
        cout << s[i] << endl;
    }

    return 0;
}