/*~~~~~~~~~~~~~~~~~~*
*                  *
* $Dollar Akshay$  *
*                  *
*~~~~~~~~~~~~~~~~~~*/

//https://www.hackerrank.com/contests/101hack24/challenges/twisty-tuple

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
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

int a[5000];

int bsearch(int k, int l, int h){

	int mid;
	while (l <= h){
		mid = (l + h) / 2;
		if (a[mid] == k)
			break;
		else if (a[mid] > k)
			h = mid - 1;
		else
			l = mid + 1;
	}

	while (a[mid] >= k && mid>l)
		mid--;

	while (a[mid] <= k && mid<h + 1)
		mid++;

	return mid;
}


int main(){

	int n;
	scanf("%d", &n);
	REP(i, n)
		scanf("%d", &a[i]);

	ll int c = 0;
	FOR(j, 1, n - 2){
		SORT(a, j);
		FOR(k, j + 1, n - 1)
			if (a[j]>a[k] + 1)
				c += bsearch(a[j] - 1, 0, j - 1) - bsearch(a[k], 0, j - 1);

	}
	printf("%lld", c);
	return 0;
}

//Solved