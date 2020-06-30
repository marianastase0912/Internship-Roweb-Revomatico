#include <bits/stdc++.h> 
#include <iostream>
#include <fstream>
#include <vector>
  
using namespace std; 

vector<int> A;
int M, Asize, x;
unordered_set<int> s; 
ifstream in;
ofstream out;

//    time and space complexity: O(n)

int main() 
{ 
    in.open("1.in");
    out.open("1.out");

    in >> M >> Asize;
    for (int i = 0; i < Asize; i++) {
        in >> x;
        A.push_back(x);
    }
    in.close();

    for (int i = 0; i < Asize; i++) { 
        int temp = M + A[i]; 
        if (s.find(temp) != s.end()) 
            out << temp << "-" << A[i] << " "; 
        s.insert(A[i]); 
    }

    out << endl;
    out.close();

    return 0; 
} 