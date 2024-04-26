  // Write a  program to print all Prime numbers between 1 to n. 
  #include<iostream>
  using namespace std ;
  
  void isprime(int n){
  	int flag = 0 ;
  	for(int i=2; i<n;i++){
  		
  		if(n!=2 && n%i==0)
  		{
  			 flag = 1 ;
  			 break;
	    }
  		 
  	 }
  	if(n!=1 && flag==0){
	  cout<<n<<" ";
	  }
  }
  int main(){
  	int n ;
  	cout<<"enter the last digit";
  	cin>>n;
  	for(int i = 1 ; i<=n;i++){
	  isprime(i);
	  }
  	return 0 ;
  }
