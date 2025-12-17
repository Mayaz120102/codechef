#include <bits/stdc++.h>
using namespace std;

long long rooms_end[200005];
int room_for[200005];

int main() {
    int n;
    cin >> n;

    long long a[200005], b[200005];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int roomCount = 0;

    for (int i = 0; i < n; i++) {
        int assigned = 0;

        // Try to reuse rooms
        for (int r = 1; r <= roomCount; r++) {
            if (rooms_end[r] < a[i]) {
                assigned = r;
                break;
            }
        }

        // Need new room
        if (assigned == 0) {
            roomCount++;
            assigned = roomCount;
        }

        room_for[i] = assigned;
        rooms_end[assigned] = b[i]; // update end time
    }

    cout << roomCount << "\n";
    for (int i = 0; i < n; i++)
        cout << room_for[i] << " ";

    return 0;
}
