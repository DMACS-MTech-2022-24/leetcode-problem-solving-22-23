class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int size = students.size(),i=0;
        while(i!=size)
        {
            // students.pop_front()
            // int stu = students.erase(students.begin());
            if(students[0] == sandwiches[0])
            {
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin());
                --size;i=0;
            }
            else{
                students.push_back(students[0]);
                students.erase(students.begin());
                ++i;
            }
        }
        return size;
    }
};