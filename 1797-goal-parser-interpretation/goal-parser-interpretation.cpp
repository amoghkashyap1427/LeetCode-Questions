class Solution {
public:
    string interpret(string command) {
        while(true){
            int index1 = command.find("()");
            if(index1!=string::npos){
                command.replace(index1, 2, "o");
                continue;
            } 
            int index2 = command.find("(al)");
            if(index2!=string::npos){
                command.replace(index2, 4, "al");
                continue;
            }
            break;
        }
        return command;
    }
};