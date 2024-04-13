
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
  string word;
   for (int i=0; i<s1.size();++i){
       if(s1[i] != ' '){
           word= "";
           while (s1[i]!=' ' && i <s1.size()){
               word += s1[i];
               ++i;
           }
           cout<<"["<< word <<"]"<<endl;
       }
   }   
  }


void exercise_3(string s1) {
  string s1_char = "";
     for (int i=0; i<s1.size();++i){
         if(s1[i] !=' '){
            s1_char +=  s1[i];
         }
     }
    for (int i=0; i<= 9;++i){ 
        if(s1_char[i] =='1'){ 
            cout<<"Om-nom-nom :P"<<endl;
        }
        else if(s1_char[i] =='0'){ 
            cout<<"No cake :("<<endl;
            break;
        } 
  }
}

void exercise_4(int n) {
  int result = 1;
  if (n < 0){
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
  else if (n > 14){
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  }
  else if (n == 0){
    cout << "1" << endl;
  }
  else{
  for(int i=1 ; i <= n; ++i){
    result = result * i;
  }
  cout << result << endl;
  }
}

void exercise_5(int n, int k) {
  string days[7] = {"  ", "  ", "  ", "  ", "  ", "  ", "  "};
    for (int i = 1; i < n; ++i) {
        cout << "   ";
    }
    for (int days = 1; days <= k; ++days) {
        if (n < 10){
        cout<<" ";
        cout << days;
    }
        if ((n + days - 1) % 7 == 0 || days == k) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
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
 double sum=0;
 //if(n == 0){
//for (int i = 0; i == n ; i++){
  while (n==0){
    break;
    cout << "0" << endl;
    }
// else{ 
  for (int i = 1; i <= n ; i++){
   sum += pow((-1), i + 1)/ i;
  }
   cout<< sum<< endl;
  //}
}

void exercise_8(string s) {
  string vacio = "";
    if( s == vacio){
        cout << "YES" << endl;
       // break;
      }
  string sinespacio;
   for(int i=0; i< s.length(); i++){
        if( s[i] != ' '){
            sinespacio += s[i];
        }
      } 
      int a=0;
      int b=sinespacio.length()-1;
    for (int i=0; 1 < sinespacio.length(); i++){
        if(sinespacio[a]==sinespacio[b]){
           a++;
           b--;
           cout<<"YES"<<endl;
           break;
        }
        else{
          cout<<"NO"<<endl;
          break;
    }      
    }
}

void exercise_9(string s) {
int f=0;
int contador=0;
  for (int i=1; i<s.size();i++){
    switch (s[i]) {
        case'f': f++;
    }
   }
   if(f <= 0){
      cout << "-2" <<endl;
   }
   else if (f == 1){
      cout << "-1"<<endl; 
   }
   else if (f == 2){
      for (int i=0; i<s.size();++i){
        if(s[i] == 'f'){
          contador=i;
          }
        }
    cout << contador<<endl; 
   }
}

int exercise_10(int a, int b) {
if (a>0 && b> 0 && a!=b){
  if(a>b){
    int aux = a;
    a=b;
    b=aux;
    }
    int i=a;
    while (i>=1){
      if (a % i == 0 && b % i == 0){
        return i;
        break;
        }
        else{
          i -= 1;
    } 
  }
 }
 else{   
     if (a>b){
        return a; 
     }
     else if (a<b){
        return b; 
     }
 }
  //return i;
}

void exercise_11() {
  double num=1;
    cout<< "U0 = "<<num<<endl;
    cout<< "U"<<num<<" = "<<num<<endl;
    for (int i=1; i <10; i++){
        num=num /(i+1);
        int n;
        n= i+1;
       cout<< "U"<<n<<" = "<<num<<endl; 
    }
}

void exercise_12() {
  double num=1;
    cout<< "U"<<num<<" = "<<num<<" "<<"V"<<num<<" = "<<"1"<<endl;
    for (int i=1; i <10; i++){
        num=num /(i+1);
        int n;
        n= i+1;
       cout<< "U"<<n<<" = "<<num<<" "<<"V"<<n<<" = "<<"1"<<endl; 
    }
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
  int copy=n;
    int inverse = 0;
   while(copy != 0 ){
       inverse= inverse*10 + copy % 10;
       copy = copy /10;
   }
    if (n==inverse){
        return"Es palindrome";
    }
    else{
        return"No es palindrome";
    }
}

void exercise_15(int decimal) {
  int binario[32]; 
    int indice = 0;
    if(decimal==0){
      cout << "0"<<endl;
    }
    else{
    while (decimal > 0) {
        binario[indice] = decimal % 2;
        decimal /= 2;
        indice++;
    }
    for (int i = indice - 1; i >= 0; --i) {
        cout << binario[i];
    }
    cout<<endl;
}
}

void exercise_16(int divident, int divider) {
  if (divider == 0){
    cout << "";
    } 
  else{
    int res = 0;
    int cosi = 0;
    cosi = divident/divider;
    res = divident%divider;
    cout << cosi << " ";
    cout << res << endl;
    }
}

void exercise_17(int n) {
  int contador = 0;
  int numero = 2;
  while (contador < n) {
    int divisores = 0;
      for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            ++divisores;
          }
        }
        if (divisores == 2) {
            cout << numero << " ";
            ++contador;
        }
        ++numero;
    }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}