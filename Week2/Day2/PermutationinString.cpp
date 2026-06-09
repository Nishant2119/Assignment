bool checkInclusion(string s1, string s2) {
    if (s1.size() > s2.size()) return false;

    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < s1.size(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    int k = s1.size();

    for (int i = k; i < s2.size(); i++) {
        // check if current window matches
        bool match = true;
        for (int j = 0; j < 26; j++) {
            if (freq1[j] != freq2[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;

        freq2[s2[i] - 'a']++;
        freq2[s2[i - k] - 'a']--;
    }

    // check last window
    for (int j = 0; j < 26; j++)
        if (freq1[j] != freq2[j]) return false;

    return true;
}