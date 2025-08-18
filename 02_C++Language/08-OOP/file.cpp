#include <iostream>
#include <vector>
using namespace std;
class Folder{
    public:
        //data member (attributes)
        int foldernum;
        string foldername;
        vector<string> filenames;
        // class with without parameter
        Folder(){
            foldernum = 1;
            foldername = "unknown";
            filenames = {"1","2","3"};
        }
        // member function
        void alldetail(){
            cout << "folder name is" << foldername <<endl;
            cout << "folder number is" << foldernum <<endl;
            for(string filename: filenames) {
                cout << filename <<" " <<endl;
            }
        }
};
int main() {
    int arr[5] = {1,5,2,4,3};
    for(int num: arr){
        cout << num <<endl;
    }
    Folder folder1;
    folder1.foldername = "anime";
    folder1.foldernum = 1;
    folder1.filenames = {"demon slayer", "AOT" , "naruto" , "86"};

    folder1.alldetail();
    Folder folder2;
    folder2.alldetail();
    return 0;
}