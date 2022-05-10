#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double media_vetor(int n, vector <int> &v){
    int soma=0;
    float r =0.0;
	for (int i = 0; i < v.size(); i++)
    {
        soma+=v[i];
    }
    r= soma/(double)v.size();
    return r;
}

int main(){	
	
	int n,a;

	cin >> n;
	vector <int> v;
	for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
		

	cout << setprecision(2) << fixed;

	cout << media_vetor(n,v) << "\n";
}