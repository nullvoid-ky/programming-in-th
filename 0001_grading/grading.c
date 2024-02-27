#include<stdio.h>
int solve(){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a > 30 || b > 30 || c  > 40) || (a < 0 || b < 0 || c < 0))
        return -1;
    int sum = a+b+c;
    sum >= 80 ? printf("A") : sum <50 ? printf("F"): sum%10>=5 ? printf("%c+",73-(sum/10)): printf("%c",73-(sum/10));
    return 0;
}
int main() {
    solve();
}
