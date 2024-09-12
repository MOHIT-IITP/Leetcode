int robotSim(vector<int> &commands, vector<vector<int>> &obstacles) {

  int x = 0, y = 0;
  int d = 0; // direction index (0: North, 1: East, 2: South, 3: West)
  int res = 0;
  vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

  // Convert obstacles to a set for fast lookup
  unordered_set<string> obstacleSet;
  for (auto &o : obstacles) {
    obstacleSet.insert(to_string(o[0]) + "," + to_string(o[1]));
  }

  for (int c : commands) {
    if (c == -1) { // Turn right
      d = (d + 1) % 4;
    } else if (c == -2) { // Turn left
      d = (d + 3) % 4;    // equivalent to (d - 1 + 4) % 4
    } else {              // Move forward
      int dx = directions[d][0], dy = directions[d][1];
      for (int i = 0; i < c; i++) {
        int nx = x + dx, ny = y + dy;
        if (obstacleSet.count(to_string(nx) + "," + to_string(ny))) {
          break;
        }
        x = nx;
        y = ny;
        res = max(res, x * x + y * y);
      }
    }
  }

  return res;
}
