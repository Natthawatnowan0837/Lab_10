void printO(int N,int M)
{
    if( N > 0 && M > 0){
        for(int i = 0 ; i<N ;i++)
        {
            for(int i = 0 ; i<M ; i++)
            {
                cout<<"O";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Invalid input";
    }


}