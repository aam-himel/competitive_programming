
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n) {
   int i, w;
   int knap[n+1][W+1];

   cout << "N + 1 = " << n+1
        << " , W + 1 = " << W+1 << endl << endl;

   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0){
            knap[i][w] = 0;
            cout << "If = " << knap[i][w] << " (i, w) " << i << ", " << w << endl;
         }else if(wt[i-1] <= w){
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
            cout << "Else If = " << knap[i][w] << " (i, w) " << i << ", " << w << endl;
         }else{
            knap[i][w] = knap[i-1][w];
            cout << "Else = " << knap[i][w] << " (i, w) " << i << ", " << w << endl;
         }

      }
      cout << "\n";
   }
   return knap[n][W];
}
int main() {
   int val[] = {20, 25, 40};
   int wt[] = {25, 20, 30};
   int W = 50;
   int n = sizeof(val)/sizeof(val[0]);
   printf("The solution is : %d", knapsack(W, wt, val, n));
   return 0;
}
