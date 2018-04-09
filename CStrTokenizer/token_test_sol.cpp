#include <iostream>
#include <vector>
#include <string>
#include "CStrTokenizer.cpp"
using namespace std;

int main()
{
    string source_str1 = "( (3  ^8 )+ 6 *( (18 -2 ) /( 30 %28 )) )";        
    string source_str2 = "((3  ^8 )+ 6 *( (18 -2 ) /( 30 %28 )) )";
    string source_str3 = "(( 3^8 ) +6 * (( 18 -2 ) / ( 30%28 )))";
    string source_str4 = "((3^8)+6*((18-2)/(30%28)))";
    string source_str5 = "-3 + 5";
    
    CStrTokenizer cs1 = CStrTokenizer(source_str1, "()^*/%+- ", true);
    CStrTokenizer cs2 = CStrTokenizer(source_str2, "()^*/%+- ", true);
    CStrTokenizer cs3 = CStrTokenizer(source_str3, "()^*/%+- ", true);
    CStrTokenizer cs4 = CStrTokenizer(source_str4, "()^*/%+- ", true);
    CStrTokenizer cs5 = CStrTokenizer(source_str5, "()^*/%+- ", true);
	
	cout << "Tokens for source_str1: ";
    while ( cs1.hasMoreTokens() )
    	cout << cs1.getNextToken() << " ";
    cout << endl;
    
    cout << "Tokens for source_str2: ";
    while ( cs2.hasMoreTokens() )
    	cout << cs2.getNextToken() << " ";
    cout << endl;
    
    cout << "Tokens for source_str3: ";
    while ( cs3.hasMoreTokens() )
    	cout << cs3.getNextToken() << " ";
    cout << endl;
    
    cout << "Tokens for source_str4: ";
    while ( cs4.hasMoreTokens() )
    	cout << cs4.getNextToken() << " ";
    cout << endl;
    
    cout << "Tokens for source_str5: ";
    while ( cs5.hasMoreTokens() )
    	cout << cs5.getNextToken() << " ";
    cout << endl;
}
