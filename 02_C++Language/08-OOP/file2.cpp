#include <iostream>
#include <vector>
using namespace std;
class Folder{
    public:
        //data member (attributes)
        int foldernum;
        string *foldername;
        vector<string> filenames;
        // class with with parameter
        Folder(int num , string name, vector<string>filename){
            foldernum = num;
            // its use when we dont use pointer after use pointer we have to use it like 
            // foldername = name;
            foldername = new string (name);
            filenames = filename;
            cout << "para metrr called" <<endl;
        }
        // for de structor
        ~Folder(){
            delete foldername;
            cout << "constutor called" <<endl;
        } 
        Folder(Folder& anything){
            foldername = new string(*anything.foldername);
            filenames = anything.filenames;
            foldernum = anything.foldernum;
            cout << "its copy construtor called" <<endl;
        }
        // member function
        void alldetail(){
            cout << "folder name is: " << *foldername <<endl;
            cout << "folder number is: " << foldernum <<endl;
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
    Folder folder1(1, "folder5" , {"file1","file2", "file3"}) ;
    // folder1.foldername = "anime";
    // folder1.foldernum = 1;
    // folder1.filenames = {"demon slayer", "AOT" , "naruto" , "86"};
    Folder folder2 = folder1;
    folder1.alldetail();
    folder1.foldernum = 50;
    folder2.alldetail();

    return 0;
}