#include <iostream>
#include <string>

using namespace std;

struct Song
{
    string title;
    string artist;
    int duration;
    Song *next;

    Song(string t, string a, int d)
    {
        title = t;
        artist = a;
        duration = d;
        next = nullptr;
    }
};

Song *insertEnd(Song *head, string t, string a, int d)
{
    Song *temp = new Song(t, a, d);

    if (head == nullptr)
    {
        return temp;
    }

    Song *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Song *removeSong(Song *head, string title)
{
    if (head == nullptr)
        return nullptr;

    if (head->title == title)
    {
        Song *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Song *curr = head;
    while (curr->next != nullptr && curr->next->title != title)
    {
        curr = curr->next;
    }

    if (curr->next != nullptr)
    {
        Song *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
    return head;
}

void displayPlaylist(Song *head)
{
    Song *curr = head;
    while (curr != nullptr)
    {
        cout << "Title: " << curr->title << ", Artist: " << curr->artist << ", Duration: " << curr->duration << " seconds" << endl;
        curr = curr->next;
    }
}

int getTotalDuration(Song *head)
{
    int totalDuration = 0;
    Song *curr = head;
    while (curr != nullptr)
    {
        totalDuration += curr->duration;
        curr = curr->next;
    }
    return totalDuration;
}

int main()
{
    Song *playlist = nullptr;

    playlist = insertEnd(playlist, "Song 1", "Artist 1", 210);
    playlist = insertEnd(playlist, "Song 2", "Artist 2", 180);
    playlist = insertEnd(playlist, "Song 3", "Artist 3", 240);

    cout << "Playlist:" << endl;
    displayPlaylist(playlist);

    playlist = removeSong(playlist, "Song 2");

    cout << "\nPlaylist after removing 'Song 2':" << endl;
    displayPlaylist(playlist);

    int totalDuration = getTotalDuration(playlist);
    cout << "\nTotal Duration of Playlist: " << totalDuration << " seconds" << endl;

    return 0;
}
