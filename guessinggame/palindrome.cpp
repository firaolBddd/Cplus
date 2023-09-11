#include <iostream>

#include <bits/stdc++.h>
#include <cstring>

using namespace std;
  int main () {
char word[80]; 
char nospace[80];
cin >> word;
int i;
int c= 0;
for(i=0; i<=strlen(word); i++){
if((isalpha(word[i]))){

nospace[c] = word[i];
c++;

}
cout<<nospace;}
//for(i = 0; i<=strlen(word); i++){
//if(word[i]==word[strlen(word)-1-i]){
	cout<< "goodjob";


//}else{cout << " badjob";
//}
return 0;





}//}	  
