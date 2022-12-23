#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
    if(rank == 'S') rank = 'z';
    else if(rank == 'A') rank = 'y';
    else if(rank == 'B') rank = 'x';
    else if(rank == 'C') rank = 'w';
    else if(rank == 'D') rank = 'v';
    if(rank == 'z') cout << "You have received Super Ultra Rare Unit!!!\n";
    if(rank >= 'y') cout << "You have received 5 gems.\n";
    if(rank >= 'x') cout << "You have received 1 gems.\n";
    if(rank >= 'w') cout << "You have received 2000 coins.\n";
    if(rank >= 'v') cout << "You have received very KAK items.\n";
  return 0;
}
