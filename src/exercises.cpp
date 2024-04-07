
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  for (int i=0; i<=s1.size();++i){
    if(s1[i]==' '){
      cout<<i<<endl;
    }
  }
  cout<<s1.size()<<endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_3(string s1) {
  //for (int i=0; i=s1.size();++i){
   // if(s1[i]=='1'){
   //   cout<<"Om-nom-nom :P"<<endl;
   // }
   //   else{
   //     cout<< "No cake :("<<endl;
   //  }
   //
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  int sum=0;
  while(n>0){
    sum = sum + n%10;
    n = n/10;
  }
  return sum;
}

void exercise_7(int n) {
  double sum;
  for (int i = 1; i >= n =0 ; i++){
    cout << "0" << endl;
  }
  for (int i = 1; i <= n ; i++){
    sum += pow((-1), i + 1)/ i;
    cout << sum << endl;
  }
}
void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  int alg=0;
  int i;
  for (i = 1; i<= n ; ++i){
    alg += pow(i,k);
   } 
  return alg;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}