class Solution {
public:
    string defangIPaddr(string address) {
        string newAddress = "";
        for (int i = 0; i < address.size(); i++) {
            if (address.at(i) != '.') {
                newAddress += address.at(i);
            } else {
                newAddress += "[.]";
            }
        }
        return newAddress;
    }
};