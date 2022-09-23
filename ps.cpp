#include<iostream>
using namespace std;

int main(){
    int T,N;
    cin>>T;

    for (int i = 0; i < T; i++)
    {
        cin>>N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        for (int f = 0; f < N; f++)
        {
            for (int l = f; l < N; l++)
            {
                int max = -1e5;
                for (int i = f; i <= l; i++)
                {
                    if (arr[i]>max)
                    {
                        max=arr[i];
                    }
                    
                }
                cout<<max<<" ";
            }
        }
        
        cout<<endl;
    }
    

    return 0;
}
