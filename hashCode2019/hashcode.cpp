#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
#include <utility>
#include <fstream>

using namespace std;

vector< vector<int> > slidesMembers;
vector< vector<string> > picTags;
vector<pair<int, int> > vertical;

int scoreTransition(vector<string> s_left, vector<string> s_right){
    int numCommon, numLeftonly, numRightonly;
    vector<string> common, leftonlySet, rightOnlySet;
    std::sort(s_left.begin(), s_left.end());
    std::sort(s_right.begin(), s_right.end());
    set_intersection(s_left.begin(), s_left.end(), s_right.begin(), s_right.end(), back_inserter(common));

    std::sort(common.begin(), common.end());
    set_difference(s_left.begin(), s_left.end(), common.begin(), common.end(), back_inserter(leftonlySet));
    set_difference(s_right.begin(), s_right.end(), common.begin(), common.end(), back_inserter(rightOnlySet));
    
    numCommon = common.size();
    numLeftonly = leftonlySet.size();
    numRightonly = rightOnlySet.size();
    // cout << "num of common: " << numCommon << ", num of left: " << numLeftonly << ", num of right: " << numRightonly << endl;
    return min(numRightonly, min(numCommon, numLeftonly));
}

int scoreTransitionFromSlides(int indexFrom, int indexTo, bool printing){
    vector<string> leftTags, rightTags;
    if (slidesMembers[indexFrom].size() == 1){
        leftTags = picTags[slidesMembers[indexFrom][0]];
    } else {
        vector<string> t1 = picTags[slidesMembers[indexFrom][0]];
        vector<string> t2 = picTags[slidesMembers[indexFrom][1]];
        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());
        set_union(t1.begin(), t1.end(), t2.begin(), t2.end(), back_inserter(leftTags));
    }
    if (slidesMembers[indexTo].size() == 1){
        rightTags = picTags[slidesMembers[indexTo][0]];
    } else {
        vector<string> t1 = picTags[slidesMembers[indexTo][0]];
        vector<string> t2 = picTags[slidesMembers[indexTo][1]];
        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());
        set_union(t1.begin(), t1.end(), t2.begin(), t2.end(), back_inserter(rightTags));
    }
    int score = scoreTransition(leftTags, rightTags);
    if (printing){
        cout<< "left: " ;
        for (int i = 0; i<leftTags.size(); i++){
            cout << leftTags[i] << ",";
        }
        cout << endl << "right: ";
        for (int i = 0; i<rightTags.size(); i++){
            cout << rightTags[i] << ",";
        }
        cout << endl << "Score: " << score << endl;

    }
    return score;
}

int main(){
    int N;
    vector<pair<int, int> > horizontal;

    string inputFile = "data/b_lovely_landscapes.txt";
    ifstream in(inputFile);
    ofstream out("data/b_out.txt");

    in >> N;
    for (int i = 0; i < N; i++){
        char orientation;
        int numOfTags;
        in >> orientation >> numOfTags;
        
        vector<string> tags;
        for (int t = 0; t < numOfTags; t++){
            string temp;
            in >> temp;
            tags.push_back(temp);
        }
        if (orientation == 'H'){
            horizontal.push_back(make_pair(numOfTags, i));
        } else {
            vertical.push_back(make_pair(numOfTags, i));
        }
        picTags.push_back(tags);
    }
    
    sort(horizontal.begin(), horizontal.end());
    sort(vertical.begin(), vertical.end());

    // fill the vector from both horizontal and vertical vectors
    for (int h = 0; h < horizontal.size(); h++){
        vector<int> temp;
        temp.push_back(horizontal[h].second);
        slidesMembers.push_back(temp);
    }

    for (int v = 0; v < vertical.size(); v+=2){
        vector<int> temp;
        temp.push_back(vertical[v].second);
        temp.push_back(vertical[v+1].second);
        slidesMembers.push_back(temp);
    }

    int n = slidesMembers.size();
    int index1, index2, score_before, score_after;
    for (int r = 0; r < 100000; r++){
        index1 = rand() % n;
        index2 = rand() % n;
        if (index1 == index2){
            continue;
        } 
        //cout << index1 << " <=> " << index2 << endl;
        //cout << "SCORE BEFORE _---------- " << endl;
        score_before = (index1 == 0? 0 : scoreTransitionFromSlides(index1-1, index1, false)) + (index1 == n-1? 0 : scoreTransitionFromSlides(index1, index1 + 1, false));
        score_before += (index2 == 0? 0 : scoreTransitionFromSlides(index2-1, index2, false)) + (index2 == n-1? 0 : scoreTransitionFromSlides(index2, index2 + 1, false));
        //cout << "Score before: " << score_before << endl;
        
        vector<int> temp = slidesMembers[index1];
        slidesMembers[index1] = slidesMembers[index2];
        slidesMembers[index2] = temp;
        //cout << "SCORE AFTER _---------- " << endl;
        score_after = (index1 == 0? 0 : scoreTransitionFromSlides(index1-1, index1, false)) + (index1 == n-1? 0 : scoreTransitionFromSlides(index1, index1 + 1, false));
        score_after += (index2 == 0? 0 : scoreTransitionFromSlides(index2-1, index2, false)) + (index2 == n-1? 0 : scoreTransitionFromSlides(index2, index2 + 1, false));
        //cout << "Score after: " << score_after << endl<<endl;
        
        if (score_after < score_before){
            vector<int> temp = slidesMembers[index1];
            slidesMembers[index1] = slidesMembers[index2];
            slidesMembers[index2] = temp;
        }    
    }
    
    n = vertical.size();
    for (int r = 0; r < 200; r++){
        index1 = rand() % n;
        score_before = (index1 == 0? 0 : scoreTransitionFromSlides(index1-1, index1, false)) + (index1 == n-1? 0 : scoreTransitionFromSlides(index1, index1 + 1, false));
        
        vector<int> temp = slidesMembers[index1];
        vector<int> temp2;
        temp2.push_back(slidesMembers[index1][1]);
        slidesMembers[index1].pop_back();
        //cout << "SCORE AFTER _---------- " << endl;
        score_after = (index1 == 0? 0 : scoreTransitionFromSlides(index1-1, index1, false)) + (index1 == n-1? 0 : scoreTransitionFromSlides(index1, index1 + 1, false));
        slidesMembers.push_back(temp2);
        score_after += scoreTransitionFromSlides(slidesMembers.size()-2, slidesMembers.size()-1, false);        
        if (score_after < score_before){
            slidesMembers.pop_back();
            slidesMembers[index1] = temp;
        }    
    }

    // output
    out << slidesMembers.size() << endl;
    
    for (int i = 0; i < slidesMembers.size(); i++){
        if (slidesMembers[i].size() == 1){
            out <<  slidesMembers[i][0] << endl;
        } else {
            out <<  slidesMembers[i][0] << " " << slidesMembers[i][1] << endl;
        }
    }

    int score = 0;
    for (int i = 1; i < slidesMembers.size(); i++){
        score += scoreTransitionFromSlides(i-1, i, false);
    }
    cout << score << endl;

}

