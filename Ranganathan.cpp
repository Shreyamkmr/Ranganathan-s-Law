#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sigma;
    int u,v,w;
    unsigned int N;
    vector<pair<int,int>> sol;
    vector<float> theta;
    cout<<"Enter U:"<<" ";
    cin>>u;
    cout<<"Enter V:"<<" ";
    cin>>v;
    cout<<"Enter W:"<<" ";
    cin>>w;
    cout<<"Enter Sigma Value:"<<" ";
    cin>>sigma;

    N=u*u + v*v + w*w;
    int x=30,y=1;

    while(sigma%2==0){
            sigma/=2;
    for(x=30;x>=0;x--)
        for(y=0;y<30;y++)
    {
        if(x*x+y*y*N==sigma)
        {
            sol.push_back({x,y});
        }

    }
    }

    while(sigma*2<1000){
            sigma*=2;
    for(x=30;x>=0;x--)
        for(y=0;y<30;y++)
    {
        if(x*x+y*y*N==sigma)
        {
            sol.push_back({x,y});
        }

    }
    }

    for(x=30;x>=0;x--)
        for(y=0;y<30;y++)
    {
        if(x*x+y*y*N==sigma)
        {
            sol.push_back({x,y});
        }

    }


    for(int i=0;i<sol.size();i++)
    {
        if(sol[i].first!=0){
        float ans= 57.296*2*atan(((float)sol[i].second/sol[i].first)*sqrt(N));
        theta.push_back(ans);
         cout<<"x= "<<sol[i].first<<" and "<<" y= "<< sol[i].second <<" ans: "<<ans<<endl;
        }

        if(sol[i].first==0)
        {
            theta.push_back(180.0);
            cout<<"x= "<<sol[i].first<<"and "<<" y= "<<sol[i].second<<" ans: "<<108.0<<endl;
        }


    }

    //cout<<"N="<<N<<"theta: "<<57.296*2*atan((1/7)*sqrt(N));
//    for(auto l:theta)
//    {
//
//        cout<<l<<" Degrees"<<endl;
//    }
}
