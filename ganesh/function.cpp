#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {

    int ab, cd, ans;
    ab = a + b;
    cd = c + d;

    if(ab > cd){
    if(a > b){
        return ans = a;
    }
    else {
        return ans = b;
    }

}

    else if(ab < cd){
        if(c > d){
            return ans = c;
        }
        else {
            return ans = d;
        }
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}