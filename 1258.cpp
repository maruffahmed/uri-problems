#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    string name;
    string color;
    string Size;
};

void Display(vector<Item> &List)
{
    for(int i = 0; i < List.size(); i++)
    {
        cout << List[i].color << " " << List[i].Size << " " << List[i].name << '\n';
    }
}

void Insertion_sort_color(vector <Item> &List)
{
    int i,j;

    Item item;

    for(i = 1; i < List.size(); i++){
        item = List[i];
        j = i-1;
        while(j >= 0 && List[j].color > item.color){
            List[j+1] = List[j];
            j--;
        }
        List[j+1] = item;
    }
}

void Insertion_sort_size(vector <Item> &List)
{
    int i,j;

    Item item;

    for(i = 1; i < List.size(); i++){
        item = List[i];
        j = i-1;
        while(j >= 0 &&(List[j].color == item.color && List[j].Size < item.Size)){
            List[j+1] = List[j];
            j--;
        }
        List[j+1] = item;
    }
}

void Insertion_sort_name(vector <Item> &List)
{
    int i,j;

    Item item;

    for(i = 1; i < List.size(); i++){
        item = List[i];
        j = i-1;
        while(j >= 0 &&(List[j].color == item.color && List[j].Size == item.Size && List[j].name > item.name)){
            List[j+1] = List[j];
            j--;
        }
        List[j+1] = item;
    }
}

void sortItem(vector <Item> &List){
    Insertion_sort_color(List);
    Insertion_sort_size(List);
    Insertion_sort_name(List);
}


bool cmp(Item a, Item b)
{
    if(a.color == b.color)
    {
        if(a.Size == b.Size)
            return a.name < b.name;
        else
            return a.Size > b.Size;
    }else{
        return a.color < b.color;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    string name,color,Size;
    cin >> n;
    while(n){
        vector <Item> List;
        for(int i = 0; i < n; i ++){
            Item newItem;
            cin.ignore();
            getline(cin,name);
            cin >> color >> Size;

            newItem.name = name;
            newItem.color = color;
            newItem.Size = Size;

            List.push_back(newItem);
        }

        sortItem(List);
        //sort(List.begin(),List.end(),cmp);
        /*if(!first)
            cout << '\n';
        first = false;
        */
        Display(List);
        cin >> n;
        if(n != 0)
            cout << '\n';

    }
}
