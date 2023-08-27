#include<stdio.h>
#include<math.h>
#define ll long long int
int power(int x,int y)
{
	if(y==0) return 1;
	else if(y%2==0) return power(x,y/2)*power(x,y/2);
	else return x*power(x,y/2)*power(x,y/2);
}
int main(){
    double a,b; 
    scanf("%lf %lf",&a,&b);
    double c=b*log2(a);
   ll intc=(ll)c;
   double l=(double)power(2,intc)*1.00,r=(double)power(2,intc+1)*1.00;
   double ans=l;
   while(l<=r){
    double mid=l+(r-l)/2;
    if(log2(mid)==c){
        ans=mid;
        break;
    }
    if(log2(mid)<c){
        ans=mid;
        l=mid+0.00000001;
    }
    else r=mid-0.00000001;
   }
   printf("%lf\n",ans);
    return 0;
}