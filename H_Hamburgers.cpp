#include<bits/stdc++.h>
using   namespace   std;
long long money=0,buns=0,sausages=0,chess=0,bunsNeeded=0,sausageNeeded=0,chessNeeded=0,bunPrice=0,sausagePrice=0,chessPrice=0;

bool isPossible(long long ans)
{
    long long temp=0;
    while(money)
    {
        bool bunFlag=false,chessFlag=false,sausagesFlag=false;
        if(buns>=bunsNeeded)
        {
            buns-=bunsNeeded;
            bunFlag=true;
        }
        else  if(money>=bunsNeeded*bunPrice)
        {
            money-=bunsNeeded*bunPrice;
            bunFlag=true;
        }
        else break;
        if(sausages>=sausageNeeded)
        {
            sausages-=sausageNeeded;
            sausagesFlag=true;
        }
        else if(money>=sausageNeeded*sausagePrice)
        {
            sausagesFlag=true;
            money-=sausageNeeded*sausagePrice;
        }
        else break;
        if(chess>=chessNeeded)
        {
            chess-=chessNeeded;
            chessFlag=true;
        }
        else if(money>=chessNeeded*chessPrice)
        {
            money-=chessNeeded*chessPrice;
            chessFlag=true;
        }
        else break;
        if(sausagesFlag&&chessFlag&&bunFlag)temp++;
    }
    return temp>=ans;
}

int main()
{
    string formula;
    cin >>  formula;
    cin >>buns>>sausages>>chess;
    cin >>bunPrice>>sausagePrice>>chessPrice;
    cin>>money;
    for(auto &it:formula)
    {
        if(it=='B')bunsNeeded++;
        if(it=='S')sausageNeeded++;
        if(it=='C')chessNeeded++;   
    }
    money +=(buns%bunsNeeded)*bunPrice;
    money +=(sausages%sausageNeeded)*sausagePrice;
    money +=(chess%chessNeeded)*chessPrice;
    buns-=buns%bunsNeeded;
    sausages-=sausages%sausageNeeded;
    chess-=chess%chessNeeded;

    //cheking
    long long temp=0;
    while(true)
    {
        bool bunFlag=false,chessFlag=false,sausagesFlag=false;
        if(buns>=bunsNeeded)
        {
            buns-=bunsNeeded;
            bunFlag=true;
        }
        else  if(money>=bunsNeeded*bunPrice)
        {
            money-=bunsNeeded*bunPrice;
            bunFlag=true;
        }
        else break;
        if(sausages>=sausageNeeded)
        {
            sausages-=sausageNeeded;
            sausagesFlag=true;
        }
        else if(money>=sausageNeeded*sausagePrice)
        {
            sausagesFlag=true;
            money-=sausageNeeded*sausagePrice;
        }
        else break;
        if(chess>=chessNeeded)
        {
            chess-=chessNeeded;
            chessFlag=true;
        }
        else if(money>=chessNeeded*chessPrice)
        {
            money-=chessNeeded*chessPrice;
            chessFlag=true;
        }
        else break;
        temp++;
    }
    cout<<temp<<endl;
}