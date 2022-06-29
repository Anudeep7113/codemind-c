 #include<stdio.h>
bool isPrime(int n){
   for(int i = 2; i<= n/2; i++){
      if(n % i == 0){
         return false;
      }
   }
   return true;
}
bool isDigitPrime(int n) {
   int temp = n, digit;
   while(temp){
      digit = temp % 10;
      if(digit != 2 && digit != 3 && digit != 5 && digit != 7){
         return false;
      }
      temp = temp / 10;
   }
   return true;
}
bool isFullPrime(int n){
   return (isDigitPrime(n) && isPrime(n));
}
int main() {
   int num;
   scanf("%d",&num);
   if(isFullPrime(num)){
      printf("Mega Prime");
   } else {
      printf("Not Mega Prime");
   }
}