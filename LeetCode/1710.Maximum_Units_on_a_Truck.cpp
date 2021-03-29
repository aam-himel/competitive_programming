
/*
#include<bits/stdc++.h>
using namespace std;

int knapSack(vector<int> & val, vector<int> &wt, int W, int n){

    vector<vector<int> > res(n+1, vector<int> (W+1, 0));

    for(int w=0; w <= W; w++){
        res[0][w] = 0;
    }
    for(int i=1; i<=n; i++){
        res[i][0] = 0;
        for(int w=0; w<=W; w++){
            if(wt[i] > w){
                res[i][w] = res[i - 1][w];
            }else{
                res[i][w] = max(res[i - 1][w], res[i-1][w - wt[i]] + val[i]);

            }

        }
    }
        for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            cout << res[i][j] << endl;
        }
    }

    return res[n][W];

}

int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = { 10, 20, 30 };
    int Weight = 50;
    int siz = val.size();


    int res =  knapSack(val, wt, Weight, siz);
     cout << "\nFinal Result = " << endl;
    cout << res << endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int knapSackSolution(vector<int> &v, vector<int> wt, int W, int n){
    vector<vector<int>> result(n+1, vector<int> (W+1, 0));

    for(int w=0; w<=W; w++)
        result[0][w] = 0;

    for(int i=1; i<=n; i++){
        result[i][0] = 0;

        for(int w=0; w<=W; w++){
            if(wt[i] > W){
                result[i][w] = result[i-1][w];
            }else {

                result[i][w] = max(result[i-1][w], result[i-1][w - wt[i]] + v[i] );
            }

        }
    }
    return result[n][W];
}

int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = { 10, 20, 30 };
    int Weight = 50;
    int siz = val.size();


    int res =  knapSackSolution(val, wt, Weight, siz);
    cout << "\nFinal Result = " << endl;
    cout << res << endl;
    return 0;
}



























