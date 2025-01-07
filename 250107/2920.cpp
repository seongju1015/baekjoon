#include <iostream>
using namespace std;

int main(){
    int ascending[8] = {1,2,3,4,5,6,7,8};
    int descending[8] = {8,7,6,5,4,3,2,1};
    int aflag = 0, dflag = 0;
    int input[8];

    scanf("%d %d %d %d %d %d %d %d",&input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7]);

    for(int i = 0; i < 8; i ++){
        if(input[i] == ascending[i]){
            aflag++;
        }
        if(input[i] == descending[i]){
            dflag++;
        }
    }

    if (aflag == 8){
        cout << "ascending" << endl;
    }
    else if(dflag == 8){
        cout << "descending" << endl;
    }
    else{
        cout << "mixed" << endl;
    }

    return 0;
}
