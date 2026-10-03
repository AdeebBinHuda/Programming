#include<bits/stdc++.h>
using namespace std;


struct Song{
    string title;
    string artist;
    Song* next;
};


class Playlist{
private:
    Song* head;

    public:
        Playlist(){
            head = nullptr;
        }
        void add_song(string title, string artist){
            Song* newSong= new Song;

            newSong->title= title;
            newSong->artist= artist;
            newSong->next= nullptr;
            if(head == nullptr){
                head= newSong;
            }
            else{
                Song* current= head;
                while(current->next!= nullptr){
                    current= current->next;
                }
                current->next= newSong;

            }

        }
        void display_Playlist(){
             Song* current = head;


            while(current!= nullptr){
              cout<<current->title<<"-"
                  <<current->artist<<endl;

              current= current->next;
            }
        }
        //void remove_Song();
       // void play_next_song();
};


int main() {

    Playlist playlist;
    playlist.add_song("Shape to you ","Ed Sheeran");
     playlist.add_song("Believer", "Imagine Dragons");
    playlist.add_song("Perfect", "Ed Sheeran");



    cout << "MUSIC PLAYER MANAGER" << endl;
    cout << "-----------------------------" << endl;

    cout << "1. Add Song" << endl;
    cout << "2. Remove Song" << endl;
    cout << "3. Display Playlist" << endl;
    cout << "4. Play Next Song" << endl;
    cout << "5. Search Song" << endl;
    cout << "6. Move to Previous Song" << endl;
    cout << "7. Move to Next Song" << endl;
    cout << "8. Reverse Playlist" << endl;
    cout << "9. Save Playlist" << endl;
    cout << "10. Load Playlist" << endl;
    cout << "Exit" << endl;
    int ch;
    cout<<"Ënter your Choice:";
    cin>>ch;
    switch(ch){
      case 1:
            // We will implement user input later
            cout << "Add Song selected" << endl;
            break;

        case 2:
            cout << "Remove Song selected" << endl;
            break;

        case 3:
            playlist.display_Playlist();
            break;

        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
