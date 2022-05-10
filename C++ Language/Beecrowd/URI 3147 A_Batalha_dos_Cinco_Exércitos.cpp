#include <iostream>
using namespace std;

int main()
{
    int H, E, A, O, W, X;
    cin >> H >> E >> A >> O >> W >> X;

    if ((H + E + A + X + 1) > (O + W))  // ja começa no ultimo caso pois sempre vai chegar nele se for n;
        cout << "Middle-earth is safe.\n";
    else
        cout << "Sauron has returned.\n";

    return 0;
}
//MANEIRA CORRETA Q O EXERCICIO PEDE.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int H, E, A, O, W, X;
//     cin >> H >> E >> A >> O >> W >> X;

//     if ((H + E + A) > (O + W))
//         cout << "Middle-earth is safe.\n";
//     else
//     {
//         if ((H + E + A + X) > (O + W))
//             cout << "Middle-earth is safe.\n";
//         else
//         {
//             if ((H + E + A + X + 1) > (O + W))
//                 cout << "Middle-earth is safe.\n";
//             else
//                 cout << "Sauron has returned.\n";
//         }
//     }

//     return 0;
// }