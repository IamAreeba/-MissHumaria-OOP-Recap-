#include <iostream>
#include <string>
using namespace std;


struct YouTubeChannel{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount){
        Name = name;
        SubscribersCount = subscribersCount;
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel ytChannel){
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers Count: " << ytChannel.SubscribersCount << endl;
    return COUT;
}




int main(){

    cout << endl;

    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("CodeBeauty2", 750002);
    YouTubeChannel yt3 = YouTubeChannel("CodeBeauty3", 750003);
    cout << yt1 << yt2;

    // I can also call operator func to print. But the reason to overload operator is not like this but to use it like the primitive DT. We have created this function locally
    operator<<(cout, yt3);

    cout << endl;

    return 0;
}