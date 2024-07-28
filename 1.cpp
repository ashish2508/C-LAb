
#include <iostream>
#include <vector>
#include <array>

typedef long long ll;
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define fs(lcv, hi) for (int lcv = 0; lcv <hi; lcv++)
#define fb(lcv, hi) for (int lcv = hi; lcv >= 0; lcv--)

void Tests()
{
int n; 
std::cin>>n;
std::vector<int>v(n);
fs(i,n) std::cin>>v[i];

int y= v[0];
for(int i=1;i<n;i++){
    
if(y<v[i]) 
y=v[i];
else{
    int k=1;
    int temp=v[i];
    while(v[i]<=y){
        v[i]=temp*k;
        k++;
    }
    y=v[i];
}
}
std::cout<<y<<std::endl;


}


int main()
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);    


    int t;
    std::cin >> t;

    
    while (t--)
    {
        Tests();
    }
    return 0;
}