#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char ROD1,
					char ROD2, char aux_rod)
{
	if (n == 1)
	{
		cout << "Move disk 1 from rod " << ROD1 <<
							" to rod " << ROD2<<endl;
		return;
	}
	TOH(n - 1, ROD1, aux_rod, ROD2);
	cout << "Move disk " << n << " from rod " << ROD1 <<
								" to rod " << ROD2 << endl;
	TOH(n - 1, aux_rod, ROD2, ROD1);
}

int main()
{
	int n;
  cout<<"enter number";
  cin>>n; 
	TOH(n, 'A', 'C', 'B'); 
	return 0;
}



