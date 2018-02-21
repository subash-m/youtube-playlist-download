#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    string tool = "youtube-dl";

    string flags = "-cio";

    string name = "%(playlist)s/%(playlist_index)s - %(title)s.%(ext)s";

    string quality = "best[ext=mp4]/best[height<=? 720]/best";

    string url = "https://www.youtube.com/playlist?list=";

    string list_name;

    cout <<"Enter the list ID = ";
    cin >> list_name;

    string query = tool + " " + flags + " \'" + name;

    query += "\' -f \'" + quality + "\' " + url + list_name;
    
    //cout << "\n" + query + "\n" <<endl;
    const char* q = query.c_str();

    system(q);

    return 0;
}
