#ifndef CSTRTOKENIZER_H
#define CSTRTOKENIZER_H

#include <string>
#include <vector>
using namespace std;

class CStrTokenizer
{
	private:
		vector<string> tokens;	// vector of strings containing tokens
		int it; // vector iterator index for getNextToken function
		bool atEnd; // flag true if we reached end of vector with our getNextToken function
		void StringTokenize(const string& str, vector<string>& tokens, const string& delimiters);
				
	public:
		// constructor for CStrTokenizer class
		CStrTokenizer(string str, string delim, bool includeDelim);
		
		// function to return vector of string of tokens
		vector<string> getTokens();
		
		// "iterator" like function to return the current token in the vector
		string getNextToken();
		
		// function to determine if we have more tokens left to read from vector when using the
		// getNextToken function
		bool hasMoreTokens();
		
		// function to reset the "iterator" back to the beginning if needed
		void reset();
		
};

#endif
