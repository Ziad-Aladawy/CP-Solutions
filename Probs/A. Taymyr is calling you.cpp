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
	int n, m, z, cnt=0;
	cin>>n>>m>>z;
	int arrn[z+1]{}, arrm[z+1]{};	
	int nt=n, mt=m;
	for(int i=1, j=1; nt<=z ||  mt<=z; i++, j++) {	
		nt=i*n;
		mt=j*m;
		arrn[i]=nt;
		arrm[j]=mt;
		//cout<<"arrn="<<arrn[i]<<endl<<"arrm="<<arrm[j]<<endl;
	}
	for(int i=1; i<=z/n; i++) {
		for(int j=1; j<=z/m; j++) {
			if(arrn[i]==arrm[j]){
				cnt++;
			//cout<<cnt<<endl;
			}
		}
		
	}
	cout<<cnt<<endl;
}

