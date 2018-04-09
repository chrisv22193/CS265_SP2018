#include <iostream>
using namespace std;

int main()
{
	int s1_steps = 0, s2_steps=0, s3_steps=0, s4_steps=0;
	int N;

	cout << "Enter an integer value for N: ";
	cin >> N;

	int s=0; s1_steps++; // S1
	for(int i=1; s2_steps++, i<=N; i++) // S2
		for(int j=1; s3_steps++, j<=N; j++) //S3
			s=s+i,s4_steps++; // S4

	cout << "S1 executed " << s1_steps << endl;
	cout << "S2 executed " << s2_steps << endl;
	cout << "S3 executed " << s3_steps << endl;
	cout << "S4 executed " << s4_steps << endl;

	return 0;
}
