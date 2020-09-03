#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

void tokenize(string const &str, const char delim, vector<string> &out)
{
	// construct a stream from the string
	stringstream ss(str);

	string s;
	while (getline(ss, s, delim)) {
		out.push_back(s);
	}
}

void Sort(vector<string>&s)
{
    for (int i=1 ;i<s.size(); i++)
    {
        string temp = s[i];

        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() > s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}

// Function to check the small string
/*bool compare(string &s1,string &s2)
{
    return s1.length() > s2.length();
}*/

void printString(string str){
    vector<string> out;
    vector<string>::iterator it;
    tokenize(str, ' ', out);
    it = out.begin() + (out.size()-1);
    //sort(out.begin(), out.end(),compare);
    Sort(out);

    for(auto i = out.begin(); i != out.end(); i++){
        cout << *i;
        if(i >= it ){
           break;
        }
        cout << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    string str;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        getline(cin,str);
        printString(str);

    }

    return 0;
}
