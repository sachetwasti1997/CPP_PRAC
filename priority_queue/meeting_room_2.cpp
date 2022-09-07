typedef vector<int> vi;
class Solution {
public:
  int minMeetingRooms(vector<vector<int>>& intr) {
    vi startTimes(intr.size()), endTimes(intr.size());
    int k = 0;
    for (auto &i: intr) {
      startTimes[k] = i[0];
      endTimes[k] = i[1];
      k++;
    }
    sort(startTimes.begin(), startTimes.end());
    sort(endTimes.begin(), endTimes.end());
    int l = 0, count = 0, max_rooms = 0;
    k = 0;
    while (k < intr.size() && l < intr.size()) {
      if (startTimes[k] < endTimes[l]) {
        count++;
        k++;
      }else {
        count--;
        l++;
      }
      max_rooms = max(max_rooms, count);
    }
    return max_rooms;
  }
};