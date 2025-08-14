#include <stdio.h>
int fact(int n){

    while (n > 1)
    {
        return n * fact(n-1);
    }
}
void greet(int n ){
	if (n>=1){
		printf("Good Morning\n");
		greet(n-1);
	}else {
		return;
	}
}
void print_n_to_1 (int n ){
	if(n>=1){
		printf("%d\n" , n); 
		print_n_to_1(n-1);
	}
	else {
		return;
	}
}
// its called pritize way
void print_1_to_n (int first , int last ){
	if (first <= last){
		printf("%d\n" , first);
		print_1_to_n(first+1 , last);
	}
	return;
}
// print sum of n without loop
int sum_of_n (int final , int sum ){
	if (final >= 1){
		sum_of_n(final-1 ,sum+final ); // here first final get 4 but when i do sum + final its happend 0+5 becuse the 4 that we ger by final-1 is work on next recurtion
	}
	else {
		int ans = printf("%d\n" , sum);
		return ans;
	}
}
// multiple calls it happend in syncronas way 
// fibonahci seris  
int fibo(int n){
if (n<=2) return 1;
return /* untill the fibo (n-1) dont get complete fibo(n-2) wont run */  fibo(n-1) + fibo(n-2);
}
int stair_path(int n){
if (n<=1) return 2;
int ans = stair_path(n-1) + (n-2);
return ans ;
}




int main() {
  int result = fact(5);
  printf("%d", result);
  greet(5);
  print_n_to_1(10);
  print_1_to_n(1,10);
  sum_of_n(5 , 0);
  printf("%d\n" , fibo(10));
  printf("%d\n" , stair_path(10));
  return 0;
}




















