#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>
// #include<algorithm>

using namespace std;

int main()
{
    int key = 1, choice, question, delete_key, edit_key;
    string val, error;
    map<int, string> myTask;
    map<int, int> mymap;
    start:
    cout<<"\n------------------------- TO-DO LIST -------------------------"<<endl;
    cout<<"What you want to do? --->\n"<<endl;
    cout<<"1.>>> Add Task >>>"<<endl;
    cout<<"2.>>> View Task >>>"<<endl;
    cout<<"3.>>> Remove Task >>>"<<endl;
    cout<<"4.>>> Mark Task as Completed >>>"<<endl;
    cout<<"5.>>> Exit >>>"<<endl;
    cout<<"\nSelect your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<endl;
            do{
                cin.ignore();
                cout<<"Enter Your Task Details : ";
                getline(cin, val);
                myTask.insert({key, val});
                mymap.insert({key, 0});
                key++;
                cout<<"Do you want to add more Task? (1=Yes / 0=No) : ";
                cin>>question;
            }while(question);
            goto start;
            break;
        case 2:
            cout<<endl;
            for (auto x : myTask) 
            {
                if(mymap.at(x.first) == 1)
                {
                    cout << "Task-" << x.first << " : " << x.second << endl; 
                }
                else if(mymap.at(x.first) == 0)
                {
                    cout << "Task-" << x.first << " : " << x.second << " ---> [Pending]" << endl;
                }
            }
            goto start;
            break;
        case 3:
            cout<<"\nEnter the task number which one you want to remove/delete : ";
            cin>>delete_key;
            myTask.erase(delete_key);
            mymap.erase(delete_key);
            cout<<"\nTask-"<<delete_key<<" deleted/removed successfully...!"<<endl;
            goto start;
            break;
        case 4:
            cout<<"\nEnter the task number which one you want to mark as completed : ";
            cin>>edit_key;
            try
            {
                myTask[edit_key] = myTask.at(edit_key) + " ---> [Completed]";
                mymap[edit_key] = 1;
                cout<<"\nTask-"<<edit_key<<" marked as completed successfully...!"<<endl;
            }
            catch(const out_of_range &e) 
            {  
                cout<<endl<<"Invalid Task Number...!"<<endl;  
            } 
            goto start;
            break;
        case 5:
            cout<<"\nThank you for using My To-Do List Application...!"<<endl;
            exit(0);
            break;
        default:
            cout<<"Invalid choice...! Please try again..."<<endl;
            goto start;
            break;
    }
    
    

    return 0;
}