#include <iostream>
using namespace std;

int main()
{
	int s1_steps = 0, s2_steps=0, s3_steps=0, s4_steps=0, s5_steps=0;
	int N;

	cout << "Enter an integer value for N: ";
	cin >> N;

	int s=0; s1_steps++; // S1
	for(int i=1; s2_steps++, i<=N; i++) // S2
	{
		int t=1; s3_steps++; // S3
		for(int j=1; s4_steps++, j<=N; j=2*j) //S4
			s=s+t,s5_steps++; // S5
	}

	cout << "S1 executed " << s1_steps << endl;
	cout << "S2 executed " << s2_steps << endl;
	cout << "S3 executed " << s3_steps << endl;
	cout << "S4 executed " << s4_steps << endl;
	cout << "S5 executed " << s5_steps << endl;

	return 0;
}
