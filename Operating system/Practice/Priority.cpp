#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], x[10];
    int wt[10], tat[10], completions[10],p[10];
    int i,j,smallest,count=0,time,n;
    double avg=0,tt=0,end;

    cout<<"\nEnter the number of Processes: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter arrival time of Process: ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter brust time of process: ";
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter priority of process: ";
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        x[i]=b[i];
    }
    p[9] = -1;
    
    for(time = 0;count!=n;time++)
    {
        smallest = 9;
        for(i=0;i<n;i++)
        {
            if(a[i]<=time&&p[i]>p[smallest]&&b[i]>0)
            {
                smallest = i;
            }
        }
            b[smallest]--;

            if(b[smallest]==0)
            {
                count++;
                end = time+1;
                completions[smallest] = end;
                wt[smallest] = end - a[smallest]-x[smallest];
                tat[smallest] =end - a[smallest];
            }
    }
    cout<<"Process"<<"\t"<<"burst-time"<<"\t"<<"arrival-time"<<"\t"<<"waiting-time"<<"\t"<<"turnaround-time"<<"\t"<<"Completion-time"<<"\t"<<"Priority"<<endl;

    for(i = 0;i<n;i++)
    {
        cout<<"p"<<i+1<<"\t\t"<<x[i]<<"\t\t"<<a[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<"\t\t"<<completions[i]<<"\t\t"<<p[i]<<endl;
        avg = avg+wt[i];
        tt = tt + tat[i];
    }

    cout<<"\n\nAverage waiting time = "<<avg/n;
    cout<<"Average Turnaround time = "<<tt/n<<endl;
}