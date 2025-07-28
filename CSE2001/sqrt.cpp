#include <iostream>
using namespace std;

int mySqrtInt(int x)
{
    int s = 0;
    int e = x;
    long long int ans = -1;
    while (s <= e)
    {
        long long int mid = (s + e) / 2;
        long long int sq = mid * mid;
        if (sq == x)
        {
            ans = mid;
        }
        if (sq > x)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double mySqrtDouble( int x, int pre){
    double m = 1;
    double ans = mySqrtInt(x);
    
    for (int i = 0; i < pre; i++){
        m = m/10;
        for(double j = ans; j*j <= x; j = j + m){
            ans = j;
        }
    }
    return ans;
}

int main(){

    cout<< mySqrtInt(37)<<endl;
    cout<< mySqrtDouble(37,3)<<endl;
    return 0;

}