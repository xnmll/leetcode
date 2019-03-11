//date: 2019 / 2 / 16
//content: 查找元素 end    图形输出 日期处理 进制转换 字符串处理
//caption: unit 3 (end)

//B1041
//#include <cstdio>
//struct Student{
//    long long zhunkaozhenghao;
//    int kaoshizuoweihao;
//}st[1001];        //机试号
//int main(){
//    int n,kaoshihao,jishihao,temp;
//    long long zkzhenghao;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%lld %d %d",&zkzhenghao,&jishihao,&kaoshihao);
//        st[jishihao].kaoshizuoweihao=kaoshihao;
//        st[jishihao].zhunkaozhenghao=zkzhenghao;
//    }
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%d",&temp);
//        printf("%lld %d\n",st[temp].zhunkaozhenghao,st[temp].kaoshizuoweihao);
//    }
//    return 0;
//}

//B1004         -------------自己想的解法 正确
//#include <cstdio>
//struct Student{
//    char name[11];
//    char xuehao[11];
//    int score;
//}st[1001];
//int main(){
//    int n,max=-1,min=101,max_i,min_i;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%s %s %d",st[i].name,st[i].xuehao,&st[i].score);
//        if(st[i].score>max){
//            max=st[i].score;
//            max_i=i;
//        }
//        if(st[i].score<min){
//            min=st[i].score;
//            min_i=i;
//        }
//    }
//    printf("%s %s\n",st[max_i].name,st[max_i].xuehao);
//    printf("%s %s",st[min_i].name,st[min_i].xuehao);
//    return 0;
//}
//-------------------   耗时更短的解   // 1.不用存储数据，直接比较大小
//#include <cstdio>
//struct Student{
//    char name[11];
//    char xuehao[11];
//    int score;
//}max_s,min_s,temp;
//int main(){
//    int n;
//    max_s.score=-1;
//    min_s.score=101;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%s %s %d",temp.name,temp.xuehao,&temp.score);
//        if(temp.score>max_s.score) max_s=temp;
//        if(temp.score<min_s.score) min_s=temp;
//    }
//    printf("%s %s\n",max_s.name,max_s.xuehao);
//    printf("%s %s",min_s.name,min_s.xuehao);
//    return 0;
//}

//B1028          -----------------------------写的不忍直视。。。。-------------------
//#include <cstdio>
//struct people{
//    int year;
//    int month;
//    int day;
//    char name[6];
//}max,min,temp;
//bool AdayuB(people a,people b){
//    if(a.year<b.year) return true;
//    else if(a.year<b.year) return false;
//    else if(a.year==b.year){
//        if(a.month<b.month) return true;
//        else if(a.month>b.month) return false;
//        else if(a.month==b.month){
//            if(a.day<b.day) return true;
//            else return false;
//        }
//    }
//}
//bool isok(people a){
//    if(a.year<=2014&&a.month<=9&&a.day<=6){
//        if(a.year>=1914&&a.month>=9&&a.day>=6) return true;
//        else return false;
//    }else{
//        return false;
//    }
//}
//int main(){
//    int n,count=0;
//    scanf("%d",&n);
//    max.year=2015,max.month=13,max.day=32;
//    min.year=1913,min.month=-1;min.day=-1;
//    for(int i=0;i<n;i++){
//        scanf("%s %d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
//        if(AdayuB(temp,max)) max=temp;
//        if(AdayuB(min,temp)) min=temp;
//        if(isok(temp)) count++;
//    }
//    printf("%d %s %s",count,max.name,min.name);
//    return 0;
//}
//#include <cstdio>             // 感觉学了排序后可以简便一点 -----------------------------留个坑！！！！！！！！！！！！！
//struct people{
//    int year;
//    int month;
//    int day;
//    char name[6];
//}right,left,youngest,oldest,temp;
//bool AsmallthanB(people a,people b){                        //如果a的日期<=b的日期 返回true
//    if(a.year!=b.year) return a.year<=b.year;
//    else if(a.month!=b.month) return a.month<=b.month;
//    else return a.day<=b.day;
//}
//bool AmorethanB(people a,people b){                          //--------->=-----------------
//    if(a.year!=b.year) return a.year>=b.year;
//    else if(a.month!=b.month) return a.month>=b.month;
//    else return a.day>=b.day;
//}
//int main(){
//    int n,count=0;
//    right.year=2014,right.month=9,right.day=6;
//    left.year=1814,left.month=9,left.day=6;
//    youngest.year=1814,youngest.month=9,youngest.day=6;
//    oldest.year=2014,oldest.month=9,oldest.day=6;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%s %d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
//        if(AsmallthanB(temp,right)&&AmorethanB(temp,left)){
//            count++;
//            if(AsmallthanB(temp,oldest)) oldest=temp;
//            if(AmorethanB(temp,youngest)) youngest=temp;
//        }
//    }
//    if(count==0) printf("0");
//    else printf("%d %s %s",count,oldest.name,youngest.name);
//    return 0;
//}
//

//B1032 -----------------------------i did it
//#include <cstdio>
//int main(){
//    int n,temp_id,temp_score,max_socre=0,max_id,a[100001]={0};
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%d %d",&temp_id,&temp_score);
//        a[temp_id]+=temp_score;
//        if(a[temp_id]>max_socre){
//            max_socre=a[temp_id];
//            max_id=temp_id;
//        }
//    }
//    printf("%d %d",max_id,max_socre);
//    return 0;
//}

//A1011
//#include <cstdio>
//int main(){
//    char change[3]={'W','T','L'};
//    int index;
//    double ans=1.0,tmp,a;
//    for(int i=0;i<3;i++){
//        tmp=0.0;
//        for(int j=0;j<3;j++){
//            scanf("%lf",&a);
//            if(a>tmp){
//                tmp=a;
//                index=j;
//            }
//        }
//        ans*=tmp;
//        printf("%c ",change[index]);
//    }
//    printf("%.2f",(ans*0.65-1)*2);
//    return 0;
//}

//A1006
//#include <cstdio>                     sign in and sign out
//struct Person{
//    char name[16];
//    int hh,mm,ss;
//}temp,first,last;
//bool AmoreequalB(Person a,Person b){
//    if(a.hh!=b.hh) return a.hh>b.hh;
//    if(a.mm!=b.mm) return a.mm>b.mm;
//    else a.ss>b.ss;
//}
//int main(){
//    int n;
//    first.hh=first.mm=first.ss=25;
//    last.hh=last.mm=last.ss=-1;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%s %d:%d:%d",temp.name,&temp.hh,&temp.mm,&temp.ss);
//        if(AmoreequalB(first,temp)) first=temp;
//        scanf("%d:%d:%d",&temp.hh,&temp.mm,&temp.ss);
//        if(AmoreequalB(temp,last)) last=temp;
//    }
//    printf("%s %s",first.name,last.name);
//    return 0;
//}

//A1036 boys and girls
//#include <cstdio>
//struct Person{
//    char g;
//    char info[11];
//    char name[11];
//    int score;
//}temp,f,m;//f-m   f   m
//int main(){
//    int n;
//    f.score=-1,m.score=101;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%s %c %s %d",temp.name,&temp.g,temp.info,&temp.score);
//        if(temp.score>f.score&&temp.g=='F') f=temp;
//        if(temp.score<m.score&&temp.g=='M') m=temp;
//    }
//    if(f.score==-1) printf("Absent\n");
//    else printf("%s %s\n",f.name,f.info);
//    if(m.score==101) printf("Absent\n");
//    else printf("%s %s\n",m.name,m.info);
//    if(f.score==-1||m.score==101) printf("NA");
//    else printf("%d",f.score-m.score);
////    if(f.score==-1||m.score==101){
////        if(f.score==-1) printf("Absent\n");
////        else printf("%s %s\n",f.name,f.info);
////        if(m.score==101) printf("Absent\n");
////        else printf("%s %s\n",m.name,m.info);
////        printf("NA");
////    }else{
////        printf("%s %s\n%s %s\n%d",f.name,f.info,m.name,m.info,f.score-m.score);
////    }
//    return 0;
//}



//date: 2019 / 2 / 20-----------------------------------------------------------------------------------------------
//detail: 舟车劳顿后到校      路上耽误了3天时间算是    3.2号考试，该干什么自己心里有数！！！！！！！
//content: 查找元素 ended      图形输出end     日期处理end   进制转换 字符串处理
//caption: unit 3 (end)

//B1036
//#include <cstdio>
//int main(){
//    int n,lie;
//    char c;
//    scanf("%d %c",&n,&c);
//    if(n%2==1) lie=n/2-1;
//    else lie=n/2-2;
//    for(int i=0;i<n;i++) printf("%c",c);
//    printf("\n");
//    for(int i=0;i<lie;i++){
//        printf("%c",c);
//        for(int i=0;i<n-2;i++) printf(" ");
//        printf("%c",c);
//        printf("\n");
//    }
//    for(int i=0;i<n;i++) printf("%c",c);
//    return 0;
//}

//B1027  //打印沙漏         三角形底边*数为
//#include <cstdio>
//#include <cmath>
//int main(){
//    int n,hang;
//    char c;
//    scanf("%d %c",&n,&c);
//    hang=(int)(sqrt((1+n)/2));
//    int bottom=2*hang-1;
//    int used=2*hang*hang-1;
//    for(int i=bottom;i>=1;i-=2){
//        for(int j=0;j<(bottom-i)/2;j++) printf(" ");
//        for(int j=0;j<i;j++) printf("%c",c);
//        printf("\n");
//    }
//    for(int i=3;i<=bottom;i+=2){
//        for(int j=0;j<(bottom-i)/2;j++) printf(" ");
//        for(int j=0;j<i;j++) printf("%c",c);
//        printf("\n");
//    }
//    printf("%d",n-used);
//    return 0;
//}

//A1031 hello world for u
//#include <cstring>
//#include <cstdio>
//int main(){
//    char str[90],ans[30][30];
//    memset(ans,' ',sizeof(ans));
//    scanf("%s",str);
//    int n=strlen(str)+2;
//    int n1=n/3,n2=n/3+n%3,index=0;
//    for(int i=0;i<n1;i++) ans[i][0]=str[index++];
//    for(int i=1;i<n2-1;i++) ans[n1-1][i]=str[index++];
//    for(int i=n1-1;i>=0;i--) ans[i][n2-1]=str[index++];
//    for(int i=0;i<n1;i++){
//        for(int j=0;j<n2;j++) printf("%c",ans[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


// content : 进制转换

//B1022   a+b in d
//#include <cstdio>
//int main(){
//    int a,b,d,ans[32],num=0;
//    scanf("%d %d %d",&a,&b,&d);
//    int sum=a+b;
//    do{
//        ans[num++]=sum%d;
//        sum/=d;
//    }while(sum!=0);
//    for(int i=num-1;i>=0;i--) printf("%d",ans[i]);
//    return 0;
//}

//B1037                    找零钱   水题
//#include <cstdio>
//int main(){
//    int g1,g2,s1,s2,k1,k2;
//    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
//    int n=(g2*17*29+s2*29+k2)-(g1*17*29+s1*29+k1);
//    if(n<0){
//        printf("-");
//        n=-n;
//    }
//    printf("%d.%d.%d",n/29/17,n%(29*17)/29,n%29);
//    return 0;
//}

//A1019      use    1.进制转换  2.判断数组是否为回文
//#include <cstdio>
//int main(){
//    int n,num=0,d,ans[32];
//    bool flag=true;
//    scanf("%d %d",&n,&d);
//    do{
//        ans[num++]=n%d;
//        n/=d;
//    }while(n!=0);
//    for(int i=0;i<=num/2;i++){
//        if(ans[i]!=ans[num-i-1]) flag=false;
//    }
//    if(flag) printf("Yes\n");
//    else printf("No\n");
//    for(int i=num-1;i>=0;i--){
//        printf("%d",ans[i]);
//        if(i!=0) printf(" ");
//    }
//    return 0;
//}

//A1027            method 1:
//#include <cstdio>
//int main(){
//    char ans[13]={'0','1','2','3','4','5','6','7','8','9','A','B','C'};
//    int n1,n2,n3;
//    scanf("%d %d %d",&n1,&n2,&n3);
//    printf("#%c%c%c%c%c%c",ans[n1/13],ans[n1%13],ans[n2/13],ans[n2%13],ans[n3/13],ans[n3%13]);
//    return 0;
//}

//A1058    a+b in多位进制
//#include <cstdio>
//int main(){
//    int g1,g2,s1,s2,k1,k2,ans1=0,ans2=0,ans3;
//    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
//    if((k1+k2)/29==1)  ans2+=1;
//    ans3=(k1+k2)%29;
//    if((s1+s2+ans2)/17==1) ans1+=1;
//    ans2=(s1+s2+ans2)%17;
//    printf("%d.%d.%d",g1+g2+ans1,ans2,ans3);
//    return 0;
//}


//date: 2019 / 2 / 21   morning-----------------------------------------------------------------------------------------------
++++++++2019 / 2 / 23   afternoon----------------------------------------------------
//B1006               数组存储数字各位
//#include <cstdio>
//int main(){
//    int n,ans[3],num=0;
//    scanf("%d",&n);
//    while(n!=0){
//        ans[num++]=n%10;
//        n/=10;
//    }
//    for(int i=num-1;i>=0;i--){
//        if(i==2){
//            for(int j=0;j<ans[i];j++) printf("B");
//        }
//        if(i==1){
//            for(int j=0;j<ans[i];j++) printf("S");
//        }
//        if(i==0){
//            for(int j=1;j<=ans[i];j++) printf("%d",j);
//        }
//    }
//    return 0;
//}

// B1021
//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//    string s;
//    cin>>s;
//    int a[10]={0};
//    for(int i=0;i<s.length();i++) a[s[i]-'0']++;
//    for(int i=0;i<10;i++){
//        if(a[i]!=0) printf("%d:%d\n",i,a[i]);
//    }
//    return 0;
//}
//method2:
//#include <cstdio>
//#include <cstring>
//int main(){
//    char str[1001];
//    fgets(str,sizeof(str),stdin);
//    int len=strlen(str);
//    int count[10]={0};
//    for(int i=0;i<len;i++) count[str[i]-'0']++;
//    for(int i=0;i<10;i++){
//        if(count[i]!=0) printf("%d:%d\n",i,count[i]);
//    }
//    return 0;
//}

//B1031
//#include <cstdio>
//#include <iostream>
//using namespace std;
//int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//char huan[11]={'1','0','X','9','8','7','6','5','4','3','2'};
//string s;
//bool isTrue(){
//    int sum=0;
//    for(int i=0;i<17;i++){
//        if(s[i]<'0'||s[i]>'9') return false;
//        sum+=(s[i]-'0')*quan[i];
//    }
//    return huan[sum%11]==s[17];
//}
//int main(){
//    int n,flag=0;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>s;
//        if(!isTrue()){
//            cout<<s<<endl;
//            flag=1;
//        }
//    }
//    if(flag==0) cout<<"All passed";
//    return 0;
//}

//B1002
//method 1
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//    int ans=0,result[5]={0},num=0;
//    string str;
//    string out[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
//    cin>>str;
//    for(int i=0;i<str.length();i++) ans+=(str[i]-'0');
//    do{
//        result[num++]=ans%10;
//        ans/=10;
//    }while(ans!=0);
//    for(int i=num-1;i>=0;i--){
//        cout<<out[result[i]];
//        if(i!=0) cout<<" ";
//    }
//    return 0;
//}
//method 2
//#include <cstdio>
//#include <cstring>
//int main(){
//    char str[110];
//    fgets(str,sizeof(str),stdin);
//    if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
//    int len=strlen(str),sum=0,num=0,ans[10]={0};
//    char change[10][5]={
//        "ling","yi","er","san","si","wu","liu","qi","ba","jiu"
//    };
//    for(int i=0;i<len;i++) sum+=str[i]-'0';
//    while(sum!=0){
//        ans[num++]=sum%10;
//        sum/=10;
//    }
//    for(int i=num-1;i>=0;i--){
//        printf("%s",change[ans[i]]);
//        if(i!=0) printf(" ");
//        else printf("\n");
//    }
//    return 0;
//}

//B1009                     shuo fanhua
//#include <iostream>
//#include <stack>
//using namespace std;
//int main(){
//    stack<string> v;
//    string s;
//    while(cin>>s) v.push(s);
//    cout<<v.top();
//    v.pop();
//    while(!v.empty()){
//        cout<<" "<<v.top();
//        v.pop();
//    }
//    return 0;
//}

//B1014 A1061
//#include <cstdio>
//#include <iostream>
//#include <cctype>
//using namespace std;
//int main(){
//    string a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int i=0,j=0,pos=0;
//    char ans[2];
//    while(i<a.length()&&i<b.length()){
//        if(a[i]==b[i]&&a[i]>='A'&&a[i]<='G'){
//            ans[0]=a[i];
//            break;
//        }
//        i++;
//    }
//    i++;
//    while(i<a.length()&&i<b.length()){
//        if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='N'||isdigit(a[i]))){
//            ans[1]=a[i];
//            break;
//        }
//        i++;
//    }
//    while(j<c.length()&&j<d.length()){
//        if(c[j]==d[j]&&isalpha(c[j])){
//            pos=j;
//            break;
//        }
//        j++;
//    }
//    string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
//    int m = isdigit(ans[1]) ? ans[1] - '0' : ans[1] - 'A' + 10;
//    cout << week[ans[0]-'A'];
//    printf("%02d:%02d", m, pos);
//    return 0;
//}

//B1024 A1073
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//    string s;
//    cin>>s;
//    int i=0;
//    while(s[i]!='E') i++;
//    string t=s.substr(1,i-1);  //number front
//    int n=stoi(s.substr(i+1)); //number back
//    if(s[0]=='-') cout<<"-";
//    if(n<0){
//        cout<<"0.";
//        for(int j=0;j<abs(n)-1;j++) cout<<"0";
//        for(int j=0;j<t.length();j++)
//            if(t[j]!='.') cout<<t[j];
//    }else{
//        cout<<t[0];
//        int j,cnt;
//        for(j=2,cnt=0;j<t.length()&&cnt<n;j++,cnt++) cout<<t[j];
//        if(j==t.length()){
//            for(int k=0;k<n-cnt;k++) cout<<'0';
//        }else{
//            cout<<'.';
//            for(int k=j;k<t.length();k++) cout<<t[k];
//        }
//    }
//    return 0;
//}

//#include <cstring>
//#include <cstdio>
//int main(){
//    char str[10010];
//    fgets(str,sizeof(str),stdin);
//    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
//    int pos=0,exp=0,len=strlen(str);
//    if(str[0]=='-') printf("-");
//    while(str[pos]!='E') pos++;
//    for(int i=pos+2;i<len;i++) exp=exp*10+(str[i]-'0');
//    if(exp==0){
//        for(int i=1;i<pos;i++) printf("%c",str[i]);
//    }
//    if(str[pos+1]=='-'){
//        printf("0.");
//        for(int i=0;i<exp-1;i++) printf("0");
//        printf("%c",str[1]);
//        for(int i=3;i<pos;i++) printf("%c",str[i]);
//    }else{
//        for(int i=1;i<pos;i++){
//            if(str[i]=='.') continue;
//            printf("%c",str[i]);
//            if(i==exp+2&&pos-3!=exp) printf(".");
//        }
//        for (int i=0;i<exp-(pos-3);i++) printf("0");
//    }
//    return 0;
//}

//B1048
//#include <algorithm>
//#include <iostream>
//using namespace std;
//int main(){
//    string a,b,c,str="0123456789JQK";
//    cin>>a>>b;
//    reverse(a.begin(),a.end());
//    reverse(b.begin(),b.end());
//    if(a.length()>b.length()) b.append(a.length()-b.length(),'0');
//    if(b.length()>a.length()) a.append(b.length()-a.length(),'0');
//    for(int i=0;i<a.length();i++){
//        if(i%2==0) c+=str[(a[i]-'0'+b[i]-'0')%13];
//        else{
//            int temp=b[i]-a[i];
//            if(temp<0) temp+=10;
//            c+=str[temp];
//        }
//    }
//    for(int i=c.length()-1;i>=0;i--) cout<<c[i];
//    return 0;
//}

//A1001 a+b format
//#include <iostream>
//using namespace std;
//int main(){
//    int a,b;
//    cin>>a>>b;
//    string str=to_string(a+b);
//    for(int i=0;i<str.length();i++){
//        cout<<str[i];
//        if(str[i]=='-') continue;
//        if((i+1)%3==str.length()%3&&i!=str.length()-1) cout<<",";
//    }
//    return 0;
//}


//A1005
//#include <iostream>
//using namespace std;
//int main(){
//    string a,ans,str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//    cin>>a;
//    int sum,num=0;
//    for(int i=0;i<a.length();i++) sum+=(a[i]-'0');
//    ans=to_string(sum);
//    cout<<str[ans[0]-'0'];
//    for(int i=1;i<ans.length();i++) cout<<" "<<str[ans[i]-'0'];
//    return 0;
//}

//#include <iostream>      --------------自己第一次写的，不能处理   先输出已修改数量  解决办法：用vector
//using namespace std;
//int main(){
//    int n,count=0,flag=1;
//    string str1,str2;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>str1>>str2;
//        for(int j=0;j<str2.length();j++){
//            if(str2[j]=='1'){
//                str2[j]='@';
//                flag=0;
//            }
//            if(str2[j]=='0'){
//                str2[j]='%';
//                flag=0;
//            }
//            if(str2[j]=='l'){
//                str2[j]='L';
//                flag=0;
//            }
//            if(str2[j]=='O'){
//                str2[j]='o';
//                flag=0;
//            }
//        }
//        if(flag==1) count++;
//        else cout<<str1<<" "<<str2<<endl;
//        flag=1;
//    }
//    if(count==n){
//        if(count==1) cout<<"There are 1 account and no account is modified"<<endl;
//        else cout<<"There are "<<count<<" accounts and no account is modified"<<endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <cstdio>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    vector<string> vec;
//    for(int i=0;i<n;i++){
//        string name,pwd;
//        cin>>name>>pwd;
//        int len=pwd.length(),flag=0;
//        for(int j=0;j<len;j++){
//            switch(pwd[j]){
//                case '1':pwd[j]='@';flag=1;break;
//                case '0':pwd[j]='%';flag=1;break;
//                case 'l':pwd[j]='L';flag=1;break;
//                case 'O':pwd[j]='o';flag=1;break;
//            }
//        }
//        if(flag){
//            string temp=name+" "+pwd;
//            vec.push_back(temp);
//        }
//    }
//    if(vec.size()!= 0){
//            printf("%d\n",vec.size());
//            for(int i=0;i<vec.size();i++) cout << vec[i] << endl;
//    }
//    else if(n==1) printf("There is 1 account and no account is modified");
//    else  printf("There are %d accounts and no account is modified", n);
//    return 0;
//}

//A1077                       kuchiguse
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    string ans;
//    for(int i=0;i<n;i++){
//        string s;
//        getline(cin,s);
//        reverse(s.begin(),s.end());
//        if(i==0){
//            ans=s;
//            continue;
//        }else{
//            int minlen=min(s.length(),ans.length());
//            for(int j=0;j<minlen;j++){
//                if(ans[j]!=s[j]){
//                    ans=ans.substr(0,j);
//                    break;
//                }
//            }
//        }
//    }
//    reverse(ans.begin(),ans.end());
//    if(ans.length()==0) ans="nai";
//    cout<<ans;
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//    int n;
//    cin>>n;
//    getchar();
//    string ans;
//    for(int i = 0; i < n; i++) {
//        string s;
//        getline(cin,s);
//        reverse(s.begin(), s.end());
//        if(i == 0) ans = s;
//        else {
//            int minlen = min(s.length(),ans.length());
//            for(int j = 0; j < minlen; j++) {
//                if(ans[j] != s[j]) {
//                    ans = ans.substr(0, j);
//                    break;
//                }
//            }
//        }
//    }
//    reverse(ans.begin(), ans.end());
//    if (ans.length() == 0) ans = "nai";
//    cout << ans;
//    return 0;
//}
//#include <cstring>
//#include <cstdio>
//char s[100][256];
//int n,minLen=256,ans=0;
//int main(){
//    scanf("%d",&n);
//    getchar();
//    for(int i=0;i<n;i++){
//        fgets(s[i],sizeof(s[i]),stdin);
//        if(s[i][strlen(s[i])-1]=='\n') s[i][strlen(s[i])]='\0';
//        int len=strlen(s[i]);
//        if(len<minLen) minLen=len;
//        for(int j=0;j<len/2;j++){
//            char temp=s[i][j];
//            s[i][j]=s[i][len-1-j];
//            s[i][len-1-j]=temp;
//        }
//    }
//    for(int i=0;i<minLen;i++){
//        char c=s[0][i];
//        bool same=true;
//        for(int j=1;j<n;j++){
//            if(c!=s[j][i]){
//                same=false;
//                break;
//            }
//        }
//        if(same) ans++;
//        else break;
//    }
//    printf("%d",ans);
//    if(ans!=0){
//        for(int i=ans-1;i>=0;i--) printf("%c",s[0][i]);
//    }else if(ans==1){
//        printf("nai");
//    }
//
//    return 0;
//}


//A1082  read number in Chinese         todo
//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main(){
//    int n,ans[10],num=0;
//    string str[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//    string notr[10]={ "Ge","Shi", "Bai", "Qian", "Yi", "Wan" };
//    cin>>n;
//    if(n<0){
//        cout<<"Fu ";
//        n=-n;
//    }
//    do{
//        ans[num++]=n%10;
//        n/=10;
//    }while(n!=0);
//    n=num;
//    for(int i=num-1;i>=0;i--){
//        cout<<str[ans[i]]<<" ";
//        //if(i!=0) cout<<notr[ans[i]]<<" ";
//    }
//    cout<<n;
//    return 0;
//}



















