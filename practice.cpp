===========================================================================
--------------------------------2018年9月考题------------------------------
//B1086
#include <iostream>//第一次写的 wrong
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string str=to_string(a*b);
    for(int i=str.length()-1;i>=0;i--) cout<<str[i];
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a,b,flag=0;
    cin>>a>>b;
    string str=to_string(a*b);
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='0'){
            if(flag==0) continue;
            else cout<<str[i];
        }else{
            flag=1;
            cout<<str[i];
        }
    }
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string str=to_string(a*b);
    reverse(str.begin(),str.end());
    cout<<stoi(str);
    return 0;
}
//B1087
#include <set>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<=n;i++) s.insert(i/2+i/3+i/5);
    cout<<s.size();
    return 0;
}
//B1088
#include <iostream>
#include <cmath>
using namespace std;
int m,x,y;
void print(double t){
    if(m==t) cout<<" Ping";
    else if(m<t) cout<<" Cong";
    else cout<<" Gai";
}
int main(){
    cin>>m>>x>>y;
    for(int i=99;i>=10;i--){
        int j=i%10*10+i/10;
        double k=abs(j-i)*1.0/x;
        if(j==k*y){
            cout<<i;
            print(i);print(j);print(k);
            return 0;
        }
    }
    cout<<"No Solution";
    return 0;
}

===========================================================================
--------------------------------2018年12月考题------------------------------
//B1091 15分     
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    while(n--){
        int k,flag=0;
        cin>>k;
        for(int i=1;i<10;i++){
            int mul=i*k*k;
            string smul=to_string(mul),sk=to_string(k);
            string smulend=smul.substr(smul.length()-sk.length());
            if(smulend==sk){
                printf("%d %d\n",n,mul);
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"No";
    }
    return 0;
}
--------------------------------------------------
//B1092 20分 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,ans[1000][100],sole[1000],maxn=0;
    vector<int> vec;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>ans[i][j];
            sole[j]+=ans[i][j];
            maxn=max(maxn,sole[j]);
        }
    }
    cout<<maxn<<endl;
    for(int i=1;i<=n;i++){
        if(sole[i]==maxn) vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++){
        if(i!=0) cout<<" ";
        cout<<vec[i];
    }
    return 0;
}
--------------------------------------------------
//B1093 20分 
#include <iostream>
using namespace std;
int main(){
    string s1,s2,s;
    int hash[200]={0};
    getline(cin,s1);
    getline(cin,s2);
    s=s1+s2;
    for(int i=0;i<s.size();i++){
        if(hash[s[i]]==0) cout<<s[i];
        hash[s[i]]=1;
    }
    return 0;
}
--------------------------------------------------
//B1094 20分 
#include <iostream>
#include <string>
using namespace std;
bool isPrime(int n){
    if(n==0||n==1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}
int main(){
    int l,k;
    string s;
    cin>>l>>k>>s;
    for(int i=0;i<=l-k;i++){
        string t=s.substr(i,k);
        int num=stoi(t);
        if(isPrime(num)){
            cout<<t;
            return 0;
        }
    }
    cout<<"404\n";
    return 0;
}
--------------------------------------------------






