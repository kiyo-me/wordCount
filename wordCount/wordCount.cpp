#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include<stack>
#include <iomanip>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define per(i,b,a) for(int i = (b) - 1; i >= (a); --i)
#define sz(a) (int)a.size()
#define de(a) cout << #a << " = " << a << endl
#define dd(a) cout << #a << " = " << a << " "
#define all(a) a.begin(), a.end()
#define pw(x) (1ll << (x))
#define mst(a,b) memset(a,b,sizeof(a));
#define lson rt<<1,l,mid
#define rson rt<<1|1,mid+1,r
typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef pair<int, int> pii;
const int inf=0x3f3f3f3f;
void input ()//huan
{
	
}

int count_characters(string )//lin
{
	
}

int count_line(string )//hu
{
   int len = s.length();
   int num=1;
   for(int j=0;j<len;j++){
   	if(s[j]=='\n'){
   		num++;
   	}
   }
   return num;
}

int count_word(string )//wu
{
	
}

bool is_word(string a)//zou
{
	int len=a.length();
	int i;
	int k=0;//统计开头连续的字母个数
	if(len<4) return false; //字符数组长度不足4则不是单词 
	for(i=0;i<len;i++)
	{
		if(a[i]>=97&&a[i]<=122) k++; //是字母则+1 
		if(i==3)
		{
			if(k<4)
				return false; //已经统计了4个但没有4个字母则报错
			else break;
		}
	}
	return true;
}

string lowcase(string )//wang
{
	
}

int count_phrase(int m,string )//zhang
{
	
}

void output()//ye
{
	
}

int main()//wen
{
	
} 


bool cmp(int a,int b)//sort qiu
{
	if(rank[a]>rank[b])return a>b;
	else if(rank[a]==rank[b])return word[a]<word[b];
}













int main()
{
 	std::ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
	cin>>n>>m;
	 
}



