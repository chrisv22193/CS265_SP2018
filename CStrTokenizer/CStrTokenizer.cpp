#include "CStrTokenizer.h"

CStrTokenizer::CStrTokenizer(string str, string delim, bool includeDelim)
{
	string t_str = "";
	
	if ( includeDelim )
	{	
		for(int i=0;i<str.length();i++)
		{
			bool delimiterFound=false;
			for(int j=0;j<delim.length();j++)
			{
				if ( delim[j]==str[i] ) 
				{
					t_str += ( " " + delim.substr(j,1) + " " );
					delimiterFound=true;
				}			
			}
			if ( !delimiterFound ) {
				t_str += str.substr(i,1);
			}
			delimiterFound = false;
		}		
		CStrTokenizer::StringTokenize(t_str, tokens, " ");
		it = 0;
	}
	else
	{
		CStrTokenizer::StringTokenize(str, tokens, delim);
		it = 0;
	} 
}

void CStrTokenizer::StringTokenize(const string& str, vector<string>& tokens, const string& delimiters)
{
    // Skip delimiters at beginning.
    string::size_type lastPos = str.find_first_not_of(delimiters, 0);
    // Find first "non-delimiter".
    string::size_type pos     = str.find_first_of(delimiters, lastPos);

    while (string::npos != pos || string::npos != lastPos)
    {
        // Found a token, add it to the vector.
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = str.find_first_not_of(delimiters, pos);
        // Find next "non-delimiter"
        pos = str.find_first_of(delimiters, lastPos);
    }
    
    atEnd = false;
}

vector<string> CStrTokenizer::getTokens()
{
	return tokens;
}

string CStrTokenizer::getNextToken()
{
	string tok = tokens[it++];
	atEnd = it == tokens.size(); // true if we are past the end of the vector
	return tok;
}

bool CStrTokenizer::hasMoreTokens()
{
	return !atEnd;
}

void CStrTokenizer::reset()
{
	it=0;
	atEnd=false;
}
