/*12:Sum of series :
	1+2+3+….+n*/

    #include<iostream>
    using namespace std;

    int main()
    {
        int n,sum=0;
        cout<<"Enter the number upto which you want the addition: "<<endl;
        cin>>n;

        int i=n;
        while(i>=1)
        {
            sum=sum+i;
            i--;
        }

        cout<<"Sum: 1 to "<< n<<" = "<<sum;
        return 0;
    }