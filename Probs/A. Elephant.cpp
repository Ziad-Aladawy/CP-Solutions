/*************************************************************
01100101 01101101 01100101 01101101 01100010 01100101 01100010
01110010 00100000 01110100 01101000 01100101 00100000 01100010
01101110 01100001 01101101 01100101 01100101 00100000 01100010
010100░█████╗░██████╗░███████╗██████╗░███████╗██╗░░░██╗1100010
011001██╔══██╗██╔══██╗██╔════╝██╔══██╗╚════██║██║░░░██║1100010
001000██║░░╚═╝██████╔╝█████╗░░██║░░██║░░███╔═╝██║░░░██║1100010
011001██║░░██╗██╔══██╗██╔══╝░░██║░░██║██╔══╝░░██║░░░██║1100010
011100╚█████╔╝██║░░██║███████╗██████╔╝███████╗╚██████╔╝1100010
011011░╚════╝░╚═╝░░╚═╝╚══════╝╚═════╝░╚══════╝░╚═════╝░1100010
01010010 01100101 01101101 01100101 01101101 01100010 01100010
01100101 01110010 00100000 01110100 01101000 01100101 01100010
00100000 01101110 01100001 01101101 01100101 01010010 01100010
*************************************************************/
#include <bits/stdc++.h>
#define ll long long
#define ld double
#define mod 1000000007
#define ceil(x,y) (x+y-1)/y
#define fix(n) cout << fixed << setprecision(n);    //printf("%.nf\n", x)
#define endl "\n"
#define CredZu ios_base::sync_with_stdio, cin.tie(0), cout.tie(0);
using namespace std;
int main(){
	int p1=0, p2;
	cin>>p2;
	int path=p2;
	//i number of steps
	int i=0;
	while(path>0) {
		path-=5;
		if(path<0) {
			++i;
			cout<<i<<endl;
			return 0;
		}
		++i;
	}
	cout<<i<<endl;
}

