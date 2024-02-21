
#include <iostream>
#include <string>
#include <set>

using namespace std;

int count_char(string s){
    set<string> vietnamese_char = {"aw","aa","dd","ee","oo","ow","w"};
    set<char>unique_char;
    for (string v : vietnamese_char){
    int index = 0;
    while ((index = s.find(v,index)) != string::npos){
        unique_char.insert(v[0]);
        index+= v.length();
    }
    }
    return unique_char.size();
    }
int main()
{
    string input_string;
    cout<<"Input: "; cin>>input_string;
    cout<<"Count: "<<count_char(input_string);

    return 0;
}
