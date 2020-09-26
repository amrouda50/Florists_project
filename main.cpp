#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct flower{
string name;
int iden;
};
struct task3{
int num;
int cnt;
};
bool notin(string first , flower second[] ,int  m){
    int i = 0;
while(i < m && first != second[i].name){
    i++;
}
return (i >= m);

}
int main()
{int k , d;
cin >> k >> d;
flower flowers[d];
for(int i = 0 ; i < d ; i++){
    cin >> flowers[i].iden >> flowers[i].name;
}
//task1
flower result[d];
int cnt = 0 ;
for(int i = 0 ; i < d ; i++){
    if(notin(flowers[i].name , result , cnt )){
       result[cnt].name= flowers[i].name;
        cnt++;
    }
}
cout << "#" << endl;
cout << cnt << endl;
cout << "#" << endl;
//task2
task3 flr[k];
for(int i = 0 ; i < k ; i++){
    flr[i].num = i+1;
    flr[i].cnt = 0;
}
int cnt1 = 0;
for(int i = 0 ; i < d ; i++){
    for(int j = 0 ; j < d ; j++){
        if(flowers[i].iden == flowers[j].iden && i == j){
            flr[flowers[i].iden - 1].cnt++;
        }
    }
}
for(int j = 0 ; j < k ; j++){
        if(flr[j].cnt != 0){
    cout << flr[j].num << " "<< flr[j].cnt << endl;}}

cout << "#" << endl;
//task3
for(int i = 0 ; i < cnt ; i++){
    result[i].iden = 0;
}
//int cnt1 = 0;
for(int i = 0 ; i < d ; i++){
    for(int j = 0 ; j < d ; j++){
        if(result[i].name == flowers[j].name){
            result[i].iden++;
        }
    }
}
int maxval = result[0].iden;
int maxind = 0;
for(int i = 1 ; i < cnt ; i++){
    if(result[i].iden > maxval){
        maxval = result[i].iden;
        maxind = i;
    }

}
cout << result[maxind].name << endl;
cout << "#" << endl;
//task 4
bool exists;
    int i = 0;
    while(i <= k  && flr[i].cnt != 0){
        i++;
    }
    exists = i <= k;
    if(exists){
        cout << flr[i].num << endl;
    }
    else  {
        cout << "-1" << endl;
    }


//task 5




    return 0;
}
