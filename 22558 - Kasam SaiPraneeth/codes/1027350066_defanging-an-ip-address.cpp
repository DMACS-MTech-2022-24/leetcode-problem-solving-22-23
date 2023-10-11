class Solution {
public:
    string defangIPaddr(string address) {
        // for iterating the string
        for(int i=0; i<address.size(); i++){
            if(address[i] == '.'){ // when ever a . is found goes inside
                address.replace(i,1,"[.]"); //replaces the . with [.]
                i+=2;// i have to move to the next 2 postions befor iteration the address
            }
        }
        return address; // returns the defanging  ip address
    }
};