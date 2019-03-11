//date: 2019 / 2 / 12
//content: 冒泡排序,指针,地址
//caption: unit 1,2
//------------------------------------------------------------------------------------------------------------

//#include <cstdio>
//int main(){
//    int a[10]={1,3,2,5,4};
//    for(int i=1;i<5;i++){
//        //printf("%d ",a[i]);
//        for(int j=0;j<5-i;j++){
//            if(a[j]>a[j+1]){
//                int temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//        }
//    }
//    for(int i=0;i<5;i++){
//        printf("%d ",a[i]);
//    }
//    return 0;
//}

//#include <cstdio>
//int main(){
//    int a;
//    int *p=&a;
//    a=233;
//    printf("%d,%d",*p,p);
//    return 0;
//}

//#include <cstdio>
//int main(){
//    int a[10]={1,2,0,1};
//    for(int *p=a;p<a+10;p++) printf("%d ",*p);
//    printf("\n%d",)
//    return 0;
//}

//指针的减法    两个int型的指针相减，等价于在求两个指针之间差了多少个int 一个int四个字节 故为20/4
//#include <cstdio>
//int main(){
//    int a[10]={1,21,32,12};
//    int *p=a,*q=&a[5];
//    printf("p = %d\nq = %d\np - q = %d\n",p,q,q-p);
//    return 0;
//}

//指针变量作为函数参数  经典例子：地址传递 and 交换两数
//#include <cstdio>
//void change(int *a){
//    *a=233;
//}
//int main(){
//    int a=1;
//    int *p=&a;
//    change(p);
//    printf("%d",a);
//    return 0;
//}
//#include <cstdio> uncorrect
//int a,b=0;
//void swap(int a,int b){
//    int temp=a;
//    a=b;
//    b=temp;
//}
//int main(){
//    a=1,b=2;
//    swap(a,b);
//    printf("a=%d,b=%d",a,b);
//    return 0;
//}

//#include <cstdio>
//void swap(int *a,int *b){
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//int main(){
//    int a=1,b=2;
//    int *p1=&a,*p2=&b;
//    swap(p1,p2);
//    printf("a = %d , b = %d",*p1,*p2);
//    return 0;
//}

//引用
//#include <cstdio>
//void change(int &x){
//    x=1;
//}
//int main(){
//    int a=10;
//    change(a);
//    printf("%d",a);
//    return 0;
//}
//#include <cstdio>
//void swap(int* &p1,int * &p2){
//    int* temp=p1;
//    p1=p2;
//    p2=temp;
//}
//int main(){
//    int a=1,b=2;
//    int *p1=&a,*p2=&b;
//    swap(p1,p2);
//    printf("a=%d b=%d",*p1,*p2);
//    return 0;
//}





//date: 2019 / 2 / 13  &  2019 / 2/ 14
//content: 简单模拟(in this text)    //查找元素 图形输出 日期处理 进制转换 字符串处理(见下章)
//caption: unit 3
//------------------------------------------------------------------------------------------------------------

//B1001
//#include <cstdio>
//int main(){
//    int n,step=0;
//    scanf("%d",&n);
//    while(n!=1){
//        if(n%2==0) n/=2;
//        else n=(3*n+1)/2;
//        step++;
//    }
//    printf("%d",step);
//    return 0;
//}

//B1011
//#include <cstdio>
//int main(){
//    int times,num=1;
//    long long a,b,c;
//    scanf("%d",&times);
//    for(int i=1;i<=times;i++){
//        scanf("%lld %lld %lld",&a,&b,&c);
//        if(a+b>c) printf("Case #%d: true",i);
//        else printf("Case #%d: false",i);
//    }
//    return 0;
//}

//B1016
//#include <cstdio>
//int main(){
//    int a,b;
//    long long num1,num2,result1=0,result2=0;
//    scanf("%lld %d %lld %d",&num1,&a,&num2,&b);
//    while(num1!=0){
//        if(a==(num1%10)) result1=a+result1*10;
//        num1/=10;
//    }
//    while(num2!=0){
//        if(b==(num2%10)) result2=b+result2*10;
//        num2/=10;
//    }
//    printf("%lld",result1+result2);
//    return 0;
//}


//B1026
//#include <cstdio>
//int main(){
//    int a,b,ins;
//    scanf("%d %d",&a,&b);
//    ins=b-a;
//    if(ins%100>=50) ins=ins/100+1;
//    else ins/=100;
//    printf("%02d:%02d:%02d",ins/60/60,ins/60%60,ins%60);
//    return 0;
//}

//B1046
//#include <cstdio>
//int main(){
//    int num,a,ahand,b,bhand,awin=0,bwin=0;
//    scanf("%d",&num);
//    for(int i=1;i<=num;i++){
//        scanf("%d %d %d %d",&a,&ahand,&b,&bhand);
//        if(a+b==ahand&&a+b!=bhand) awin++;
//        if(a+b==bhand&&a+b!=ahand) bwin++;
//    }
//    printf("%d %d",bwin,awin);
//    return 0;
//}

//B1008
//#include <cstdio>
//int main(){
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int a[n];
//    m%=n;
//    for(int i=0;i<n;i++) scanf("%d",&a[i]);
//    for(int *p=a+n-m;p<a+n;p++) printf("%d ",*p);
//    for(int *p=a;p<a+n-m;p++){
//        if(p==a+n-m-1) printf("%d",*p);
//        else printf("%d ",*p);
//    }
//    return 0;
//}

//#include <cstdio>
//int main(){
//    int n,r1=0,r2=0,temp_r2=0,r3=0,r4=0,r4_t=0,r5=0,temp_r1=1,temp_r4=-1;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++) scanf("%d",&a[i]);
//    for(int i=0;i<n;i++){
//        if(a[i]%10==0) r1+=a[i];
//        if(a[i]%5==1){
//            r2=r2+temp_r1*a[i];
//            temp_r1*=-1;
//            temp_r2++;
//        }
//        if(a[i]%5==2) r3++;
//        if(a[i]%5==3){
//            r4+=a[i];
//            r4_t++;
//        }
//        if(a[i]%5==4&&a[i]>temp_r4) r5=a[i];
//    }
//    if(r1==0) printf("N ");
//    else printf("%d ",r1);
//    if(temp_r2==0) printf("N ");
//    else printf("%d ",r2);
//    if(r3==0) printf("N ");
//    else printf("%d ",r3);
//    if(r4_t==0) printf("N ");
//    else printf("%.1f ",(double)r4/r4_t);
//    if(r5==0) printf("N");
//    else printf("%d",r5);
//    return 0;
//}

//B1018
//#include <cstdio>   //换成数字,根据余数判断胜负
//int change(char a){
//    if(a=='B') return 0;
//    if(a=='C') return 1;
//    if(a=='J') return 2;
//}
//int main(){
//    char a,b,res[3]={'B','C','J'};
//    int a_winmost=0,b_winmost=0,n,a_contest[3]={0},b_contest[3]={0},a_winstate[3]={0},b_winstate[3]={0};//a_contest w f =    a_winstate C J B
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        getchar();//获取换行
//        scanf("%c %c",&a,&b);
//        if((change(a)-change(b)+3)%3==2){    //a win
//            a_contest[0]++;
//            b_contest[1]++;
//            a_winstate[change(a)]++;
//        }
//        if((change(a)-change(b)+3)%3==1){    //b win
//            a_contest[1]++;
//            b_contest[0]++;
//            b_winstate[change(b)]++;
//        }
//        if((change(a)-change(b)+3)%3==0){    //a b =
//            a_contest[2]++;
//            b_contest[2]++;
//        }
//    }
//    for(int i=0;i<3;i++){
//        if(a_winstate[i]>a_winstate[a_winmost]) a_winmost=i;
//        if(b_winstate[i]>b_winstate[b_winmost]) b_winmost=i;
//    }
//    printf("%d %d %d\n",a_contest[0],a_contest[2],a_contest[1]);
//    printf("%d %d %d\n",b_contest[0],b_contest[2],b_contest[1]);
//    printf("%c %c",res[a_winmost],res[b_winmost]);
//    return 0;
//}

//A1042 Shuffling Machine   -------------------------------------------
// 第一道甲级的题 没有思路
//#include <cstdio>
//int main(){
//    int n,next[55],start[55],end[55];
//    char result[5]={'S','H','C','D','J'};
//    scanf("%d",&n);
//    for(int i=1;i<55;i++) scanf("%d",&next[i]);
//    for(int i=1;i<55;i++) start[i]=i;               //initial 数组
//    for(int i=0;i<n;i++){
//        for(int i=1;i<55;i++) end[next[i]]=start[i];
//        for(int i=1;i<55;i++) start[i]=end[i];
//    }
//    for(int i=1;i<55;i++){
//        if(i!=1) printf(" ");
//        start[i]--;
//        printf("%c%d",result[start[i]/13],start[i]%13+1);
//    }
//    return 0;
//}

//A1046 Shortest Distance           自己写的   0分
//#include <cstdio>
//void swap(int& x, int& y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main(){
//    int n=0,m,sum=0,a,b,dis=0;
//    scanf("%d",&n);
//    int diss[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&diss[i]);
//        sum+=diss[i];
//    }
//    scanf("%d",&m);
//    int result_dis[m];
//    for(int i=0;i<m;i++){
//        scanf("%d %d",&a,&b);
//        if(a<b){
//            for(int j=a-1;j<b-1;j++) dis+=diss[j];
//            if(dis<sum-dis) result_dis[i]=dis;
//            else result_dis[i]=sum-dis;
//            dis=0;
//        }else{
//            swap(a,b);
//            printf("\n%d----------%d\n",a,b);
//            for(int j=a-1;j<b-1;j++) dis+=diss[j];
//            if(dis<sum-dis) result_dis[i]=dis;
//            else result_dis[i]=sum-dis;
//            dis=0;
//        }
//
//    }
//    for(int i=0;i<m;i++) printf("%d\n",result_dis[i]);
//    return 0;
//}

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int dis[100005],A[100005];
//int main(){
//    int sum=0,query,n,left,right;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        scanf("%d",&A[i]);
//        sum+=A[i];
//        dis[i]=sum;
//    }
//    scanf("%d",&query);
//    for(int i=0;i<query;i++){
//        scanf("%d%d",&left,&right);
//        if(left>right) swap(left,right);
//        int temp=dis[right-1]-dis[left-1];
//        printf("%d\n",min(temp,sum-temp));
//    }
//}

//A1065
//#include <cstdio>
//int main(){
//    int n,tcase=1;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        long long a,b,c;
//        scanf("%lld %lld %lld",&a,&b,&c);
//        long long res=a+b;                    //为什么这个还进去就错了
//        if(a>0&&b>0&&res<0) printf("Case #%d: true\n",i);
//        else if(a<0&&b<0&&res>=0) printf("Case #%d: false\n",i);
//        else if(res>c) printf("Case #%d: true\n",i);
//        else printf("Case #%d: false\n",i);
//    }
//    return 0;
//}

//B1010 一元多项式求导              -------note :     while(scanf("%d",&a)!=EOF)  控制格式输出空格
//#include <cstdio>
//int main(){
//    int xishu,zhishu,count_zhishu=0,a[1001]={0};
//    while(scanf("%d %d",&xishu,&zhishu)!=EOF){
//        a[zhishu]=xishu;
//    }
//    a[0]=0;
//    for(int i=1;i<1001;i++){
//        a[i-1]=a[i]*i;
//        a[i]=0;
//        if(a[i-1]!=0) count_zhishu++;
//    }
//    if(count_zhishu==0) printf("0 0");
//    else{
//        for(int i=1001;i>=0;i--){
//            if(a[i]!=0){
//                printf("%d %d",a[i],i);
//                count_zhishu--;
//                if(count_zhishu!=0) printf(" ");
//            }
//        }
//    }
//    return 0;
//}

//A1002
//#include <cstdio>
//int main(){
//    double xishu,a[1002]={0};
//    int n,zhishu,count=0;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%d %lf",&zhishu,&xishu);
//        a[zhishu]+=xishu;
//    }
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%d %lf",&zhishu,&xishu);
//        a[zhishu]+=xishu;
//    }
//    for(int i=0;i<1001;i++){
//        if(a[i]!=0) count++;
//    }
//    printf("%d",count);
//    for(int i=1001;i>=0;i--){
//        if(a[i]!=0) printf(" %d %.1f",i,a[i]);
//    }
//    return 0;
//}

//A1009         ----------------------------留作作业  下次复习时独立完成
//TODO










