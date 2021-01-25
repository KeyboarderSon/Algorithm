#include <iostream>

using namespace std;


int main()
{
    int arr[31];
    int n;
    cin>>n;
    if(n%2==1) {
        cout<<"0";
        return 0;   
    }
    
    arr[2]=3;
    arr[4]=11;
    
    /*
    arr[i]=
      [          arr[i-2]          ][  3  ]
    + [      arr[i-4]     ][ 특.케 of n=4 ]
    + [      arr[i-6]     ][ 특.케 of n=6 ]
    ...
    + [arr[2]][       특.케 of n=i-2      ]
    + [         특.케 of n=i => 2         ]
    */
    for(int i=6;i<=n;i+=2){
        // 위에서 설명한 처음과 끝 항
        arr[i]=3*arr[i-2]+2;
        for(int j=i-4; j>0; j-=2){
            arr[i]+=2*arr[j];
        }
    }
    
    cout<<arr[n];
    
    
    return 0;
}
