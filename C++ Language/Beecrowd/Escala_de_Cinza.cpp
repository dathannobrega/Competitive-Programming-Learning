    #include <iostream>

    using namespace std;

    int main (){
        int N;
        string a;
        cin >> N;
        for (int i = 1; i <=N; i++)
        {
            int x,y,z,aux=0;
            cin >> a;
            cin >> x >> y >> z;



            if(a.compare("min")==0){
                if(y>=z && x>=z){
                    aux=z;
                }else if(y>=x && z>=x){
                    aux=x;
                }else{
                    aux=y;
                }
                cout << "Caso #" << i << ": " << aux << endl;
            }else if(a.compare("max")==0){
                if(y<z && x<z){
                    aux=z;
                }else if(y<x && z<x){
                    aux=x;
                }else{
                    aux=y;
                }
                cout << "Caso #" << i << ": " << aux << endl;
            }else if(a.compare("mean")==0){
                aux= (x+y+z)/3;
                cout << "Caso #" << i << ": " << aux << endl;
            }else{
                aux=(0.3*x)+(0.59*y)+(0.11*z);
                cout << "Caso #" << i << ": " << aux << endl;
            }
        }
        





        return 0;
    }