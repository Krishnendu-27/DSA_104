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
if (n<=3) return 1;
return /* untill the fibo (n-1) dont get complete fibo(n-2) wont run */  fibo(n-1) + fibo(n-2);
}
int stair_path_double(int n){
    if (n == 0) return 1; // 1 way to stand still
    if (n < 0) return 0;  // No way to climb negative stairs
int ans = stair_path_double(n-1) + stair_path_double(n-2);
return ans ;
}
int stair_path_tripple(int n){
    if (n == 0) return 1; // 1 way to stand still
    if (n < 0) return 0;  // No way to climb negative stairs
int ans = stair_path_tripple(n-1) + stair_path_tripple(n-2) + stair_path_tripple(n-3);
return ans ;
}

// power of number by recurtion 

long double power(int num, int pow) {
    if (pow == 0) return 1; // base case
    if (pow == 1) return num;

    long double half = power(num, pow / 2);

    if (pow % 2 == 0) {
        return half * half;
    } else {
        return half * half * num;
    }
}
	// so here i add extra num so 
	/*
			2*2*2*2*2 = 32 
			(2 , 5/2 )* (2 ,5/2) * 2
			2 , 4 * 2, 4 * 2
			16 * 16 * 2 
			32 *2
			64
	*/
int mazepath(int row_num , int cols_num , int currecnt_potison_in_row ,int currecnt_potison_in_coll, int destination_row, int destination_coll){

}
void pre_in_post(int n){
	if(n==0) return;
	printf("pre %d\n" , n);
	pre_in_post(n-1);
	printf("in %d\n" , n);
	pre_in_post(n-1);
	printf("post %d\n" , n);

}



int main() {
  int result = fact(5);
  printf("%d", result);
  greet(5);
  print_n_to_1(10);
  print_1_to_n(1,10);
  sum_of_n(5 , 0);
  printf("%d\n" , fibo(10));
  printf("%d\n" , stair_path_double(5));
  printf("%d\n" , stair_path_tripple(5));
  printf("%Lf\n" ,power(2,5));
  pre_in_post(2);
  return 0;
}


















