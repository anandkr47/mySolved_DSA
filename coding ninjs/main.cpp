#include <bits/stdc++.h>
using namespace std;
int isPallindrome(string str){
   int i, length;
   int flag = 0;
   length = str.length();
   for(i=0;i < length ;i++){
      if(str[i] != str[length-i-1]) {
         flag = 1; break;
      }
   }
   if (flag==1)
      return 1;
      return 0;
   }
   void solveAllQueries(string str, int Q, int query[][2]){
      for(int i = 0; i < Q; i++){ isPallindrome(str.substr(query[i][0] - 1, query[i][1] -       1))?cout<<"Yes\n":cout<<"No\n";
   }
}
int main() {
   string str;
    int Q,i,j ;
    cin>>Q;
    cin>>str;

   int query[Q][2];
   for(i=0;i<Q;i++){
       for(j=0;j<2;j++){
           cin>>query[i][j];
       }
   }

   solveAllQueries(str, Q, query);
   return 0;
}
