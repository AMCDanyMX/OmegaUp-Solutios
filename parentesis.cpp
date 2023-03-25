#include<bits/stdc++.h> 

using namespace std; 
  
bool isBalanced(string str){ 
    stack<char> s; 
    char x; 
  
    for(int i=0; i<str.length(); i++){ 
        if(str[i]=='('||str[i]=='['||str[i]=='{'){ 
            s.push(str[i]); 
            continue; 
        }
        if(s.empty()) 
           return false; 
        switch(str[i]){ 
            case ')': 
                x = s.top(); 
                s.pop(); 
                break; 
        } 
    } 
    return (s.empty()); 
} 


int main(){ 

    string expresion;
    cin << expresion << endl;

    string s = "[()]{}{[()()]()}"; 
    if(isBalanced(s)){ 
        cout<<"SI"; 
    }    
    else{
        cout<<"NO"; 
    }    
    return 0; 
}