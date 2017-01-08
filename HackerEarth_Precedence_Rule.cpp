
//http://www.hackerearth.com/CDZV10/algorithm/precedence-rule/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };

int main(){

	int t;
	char str[32];
	scanf("%d", &t);
	REP(tc, t){
		cin >> str;
		int len = strlen(str);
		REV(str, len);
		ll int res, a;
		char op;
		res = str[0] - '0';
		FOR(i, 1, len - 1){
			op = str[i];
			a = str[++i] - '0';
			switch (op){
			case '+':
				res += a;
				break;
			case '-':
				res -= a;
				break;
			case '*':
				res *= a;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}

// Solved