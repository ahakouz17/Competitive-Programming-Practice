    #include <bits/stdc++.h>
    #include <stack>
    using namespace std;

    // Complete the countingValleys function below.
    int countingValleys(int n, string s) {
        int valleyCount = 0;
        int seaLevel = 0;
        for(auto step : s){
            if(step == 'D' && seaLevel == 0) valleyCount++;
            if(step == 'D') seaLevel--;
            else seaLevel++;
        }
        return valleyCount;
    }


    // less optimized
    int countingValleys_1(int n, string s) {
        stack<char> path;
        int valleyCount = 0;
        for(auto step : s){
            if(path.empty()){
                if (step == 'D') valleyCount ++;
                path.push(step);
            } else if(path.top() != step){
                path.pop();
            } else {
                path.push(step);
            }
        }
        return valleyCount;
    }

    int main()
    {
        ofstream fout(getenv("OUTPUT_PATH"));

        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string s;
        getline(cin, s);

        int result = countingValleys(n, s);

        fout << result << "\n";

        fout.close();

        return 0;
    }
