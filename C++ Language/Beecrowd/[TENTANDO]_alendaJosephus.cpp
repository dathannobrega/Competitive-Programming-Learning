#include <bits/stdc++.h>

using namespace std;

void josephus(vector<int> person,int index,int A,int B) {
    if (person.size() == 1) {
        cout << person[0] << endl;
        return;
    }

    index = ((A*index +  B )% person.size());

    person[index]++;

    if(person[index]==3){
        int cont=0;
        for (int i = 0; i < person.size(); i++)
            if(person[i]==0)
                cont++;
        cout << cont << endl;
    }else if(person[index]==2){
        person[index]++;
    }
    // person.erase(person.begin() + index);

    josephus(person,index,A,B);
}

int main() {
    vector<int> a;
    int N,A,B;
    while (N!=1){
        cin >> N>>A>>B;
        for (int i = 0; i < N; i++)
            a.push_back(0);

        josephus(a,0,A,B);
        a.clear();
    }
    return 0;
}