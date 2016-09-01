#include<iostream>
#include<string>
using namespace std;

   main()
{
            int i,j, n;

                     cout<<"Enter  number of strings: \n";
                     cin>>n;

                      string s[n+1],temp[n+1];

                      for(i=0;i<n;i++)
                         {
                                 cin>>s[i];
                                  }

                         for(i=0;i<n;i++)
                           {
                                  for(j=0;j<n-i;j++)
                                     {
                                        if(s[j].size()>s[j+1].size())
                                           {
                                                  temp[j]=s[j];
                                                 s[j]=s[j+1];
                                                 s[j+1]=temp[j];
                                                           }
                                       }
                             }
                                //   cout<<"\nData after sorting: ";
                          for(j=1;j<=n;j++)
                            {
                                  cout<<s[j]<<endl;
                             }
                        return 0;

      }
