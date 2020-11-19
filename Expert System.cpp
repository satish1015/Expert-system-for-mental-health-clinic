#include <iostream>
#include <map>
#include<stack>
#include <cmath>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
class backwardChaining{
private:
    map<int, string> concList;
    map<string,int> Li;
    map<string, int> visited;
    map<string, int> store;
    map<string, string> Questions;
    map<int, string> clausList;
    map<string, int> concVar;
public:
    backwardChaining(){
    concList[10] = "DI";
	concList[20] = "DI";
	concList[30] = "ADL";
	concList[40] = "AD";
	concList[50] = "AD";
	concList[60] = "CD";
	concList[70] = "ID";
	concList[80] = "IC";
	concList[90] = "AF";
	concList[100] = "SU";
	concList[110] = "SU";
	concList[120] = "IA";
	concList[130] = "GD";
	concList[150] = "IS";
	concList[140] = "IG";
	concList[160] = "ID";
	concList[170] = "IS";
	concList[180] = "MD";
	concList[190] = "IB";
	concList[200] = "TP";
	concList[210] = "IM";
	concList[220] = "TP";
	concList[230] = "TP";
	concList[240] = "TP";
	concList[250] = "TP";
	concList[260] = "TP";
	concList[270] = "TP";
	concList[280] = "TP";
	concList[290] = "TP";
	concList[300] = "TP";
	concList[310] = "TP";
	concList[320] = "TP";
Li["DI"] = 10;
Li["DI"] = 20;
Li["ADL"] = 30;
Li["AD"] = 40;
Li["AD"] = 50;
Li["CD"] = 60;
Li["ID"] = 70;
Li["IC"] = 80;
Li["AF"] = 90;
Li["SU"] = 100;
Li["SU"] = 110;
Li["IA"] = 120;
Li["GD"] = 130;
Li["IS"] = 150;
Li["IG"] = 140;
Li["ID"] = 160;
Li["IS"] = 170;
Li["MD"] = 180;
Li["IB"] = 190;
Li["TP"] = 200;
Li["IM"] = 210;
Li["TP"] = 220;
Li["TP"] = 230;
Li["TP"] = 240;
Li["TP"] = 250;
Li["TP"] = 260;
Li["TP"] = 270;
Li["TP"] = 280;
Li["TP"] = 290;
Li["TP"] = 300;
Li["TP"] = 310;
Li["TP"] = 320;
        store["BC"] = -1;
        store["AX"] = -1;
        store["DL"] = -1;
        store["EX"] = -1;
        store["DP"] = -1;
        store["SU"] = -1;
        store["PR"] = -1;
        store["CC"] = -1;
        store["IN"] = -1;
        store["AC"] = -1;
        store["FG"] = -1;
        store["SD"] = -1;
        store["DF"] = -1;
        store["SP"] = -1;
        store["TL"] = -1;
        store["GD"] = -1;
        store["MD"] = -1;
        store["SX"] = -1;
        store["PA"] = -1;
        store["AM"] = -1;
        store["RT"] = -1;
        store["RH"] = -1;
        store["PP"] = -1;
        Questions["BC"] = "Is the person exhibiting any behavioral changes?  (Enter Yes or No)";
        Questions["AX"] = "Is the person anxious? (Enter Yes or No)";
        Questions["DL"] = "Is the person having delusions? (Enter Yes or No)";
        Questions["EX"] = "Is the person exasperate? (Enter Yes or No)";
        Questions["DP"] = "Is the person suffering from depression? (Enter Yes or No)";
        Questions["PR"] = "Is the person suffering from paranoia? (Enter Yes or No)";
        Questions["CC"] = "Is the person having difficulty to concentrate? (Enter Yes or No)";
        Questions["IN"] = "Is the person suffering from insomnia? (Enter Yes or No)";
        Questions["AC"] = "Are there any appetite changes in the person? (Enter Yes or No)";
        Questions["FG"] = "Is the person suffering from fatigue? (Enter Yes or No)";
        Questions["SD"] = "Is the person exhibiting from self destructive behavior? (Enter Yes or No)";
        Questions["DF"] = "Is the person suffering from dying fear? (Enter Yes or No)";
        Questions["SP"] = "Is the person having any speech difficulties? (Enter Yes or No)";
        Questions["TL"] = "Is the person talkative? (Enter Yes or No)";
        Questions["SX"] = "Is the person having sex desire? (Enter Yes or No)";
        Questions["PA"] = "Did the person have any panic attacks? (Enter Yes or No)";
        Questions["AM"] = "Is the person suffering from amnesia? (Enter Yes or No)";
        Questions["RT"] = "Is the person repeatedly going over thoughts? (Enter Yes or No)";
        Questions["RH"] = "Is the person having rapid heartbeat? (Enter Yes or No)";
        Questions["PP"] = "Is the person suffering from PALPITATION? (Enter Yes or No)";
clausList[1] = "BC";
clausList[5] = "BC";
clausList[6] = "AX";
clausList[9] = "DI";
clausList[10] = "DL";
clausList[13] = "DI";
clausList[14] = "DP";
clausList[17] = "DI";
clausList[18] = "DP";
clausList[21] = "CC";
clausList[22] = "AD";
clausList[25] = "ADL";
clausList[26] = "EX";
clausList[29] = "DI";
clausList[30] = "IN";
clausList[31] = "CC";
clausList[33] = "DI";
clausList[34] = "AC";
clausList[35] = "FG";
clausList[37] = "ID";
clausList[38] = "AF";
clausList[39] = "IC";
clausList[41] = "DI";
clausList[42] = "SD";
clausList[43] = "DF";
clausList[45] = "DI";
clausList[46] = "SD";
clausList[47] = "DF";
clausList[49] = "AD";
clausList[50] = "SU";
clausList[53] = "DI";
clausList[54] = "TL";
clausList[57] = "DI";
clausList[58] = "TL";
clausList[61] = "IA";
clausList[62] = "PA";
clausList[65] = "AD";
clausList[66] = "SU";
clausList[69] = "SU";
clausList[70] = "AF";
clausList[71] = "AD";
clausList[73] = "IS";
clausList[74] = "EX";
clausList[75] = "PR";
clausList[77] = "MD";
clausList[78] = "GD";
clausList[79] = "SX";
clausList[81] = "MD";
clausList[82] = "GD";
clausList[83] = "ADL";
clausList[85] = "AF";
clausList[86] = "CD";
clausList[87] = "IC";
clausList[89] = "IA";
clausList[90] = "PA";
clausList[93] = "CD";
clausList[94] = "SP";
clausList[95] = "SU";
clausList[97] = "IG";
clausList[98] = "PP";
clausList[101] = "IG";
clausList[102] = "SP";
clausList[105] = "IS";
clausList[106] = "PR";
clausList[109] = "IB";
clausList[110] = "ADL";
clausList[111] = "CD";
clausList[113] = "ID";
clausList[114] = "AM";
clausList[117] = "IM";
clausList[118] = "SU";
clausList[119] = "RT";
clausList[121] = "IM";
clausList[122] = "SU";
clausList[123] = "RH";
clausList[125] = "IM";
clausList[126] = "SU";
clausList[127] = "RH";
clausList[128] = "ADL";
        visited["BC"] = 0;
        visited["AX"] = 0;
        visited["DI"] = 0;
        visited["DL"] = 0;
        visited["EX"] = 0;
        visited["DP"] = 0;
        visited["SU"] = 0;
        visited["PR"] = 0;
        visited["CC"] = 0;
        visited["IN"] = 0;
        visited["AC"] = 0;
        visited["FG"] = 0;
        visited["SD"] = 0;
        visited["DF"] = 0;
        visited["SP"] = 0;
        visited["TL"] = 0;
        visited["GD"] = 0;
        visited["MD"] = 0;
        visited["SX"] = 0;
        visited["PA"] = 0;
        visited["AM"] = 0;
        visited["RT"] = 0;
        visited["RH"] = 0;
        visited["PP"] = 0;
        visited["DI"] = 0;
        visited["ID"] = 0;
        visited["ADL"] = 0;
        visited["IC"] = 0;
        visited["CD"] = 0;
        visited["AF"] = 0;
        visited["IA"] = 0;
        visited["SU"] = 0;
        visited["IG"] = 0;
        visited["IS"] = 0;
        visited["MD"] = 0;
        visited["GD"] = 0;
        visited["IB"] = 0;
        visited["IM"] = 0;
        concVar["DI"] =   -1;
        concVar["ADL"] =  -1;
        concVar["AD"] =   -1;
        concVar["CD"] =  -1;
        concVar["ID"] =  -1;
        concVar["IC"] =  -1;
        concVar["AF"] =  -1;
        concVar["IA"] =  -1;
        concVar["SU"] =  -1;
        concVar["IG"] =  -1;
        concVar["IS"] =  -1;
        concVar["MD"] =  -1;
        concVar["GD"] =  -1;
        concVar["IB"] =  -1;
        concVar["IM"] =  -1;
    }
    public:
        int calc(int rule){
            int k = 4*(rule/10-1)+1;
            return k;
    }
    int calcClaus(int claus){
    return  floor((10*(claus-1+4)/4)/10)*10;
    }
    void printClausVariableList(map<string, string> abbr){
        cout<<"****************** Clause Variable List ******************"<<endl;
         for(int i=1;i<=32*4;i++){
            cout<<"CLAUSE "<<i<<" "<<abbr[clausList[i]]<<endl;
        }
    }
    void printVariableList(map<string, string> abbr){
        int cnt =1;
        cout<<"****************** Variable List ******************"<<endl;
         for(auto const& i: store){
                cout<<cnt++<<". "<<abbr[i.first]<<endl;
        }
    }
    void printConcVariableList(map<string, string> abbr){
        cout<<"******** Conclusion Variable List *************"<<endl;
        for(auto const& i: concList)
            cout<<i.first<<" "<<abbr[i.second]<<endl;
        }
    void printStore(map<string, int> store,map<string, int> concVar){
    cout<<"Result Variables "<<endl;
    for(auto const& i: store){
        if(i.second==1)
            cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Conclusion Variables "<<endl;
    for(auto const& j: concVar){
        if(j.second==1)
            cout<<j.first<<" "<<j.second<<endl;
    }
    }
    string checkRuleSatisfied(int ruleNum, map<string, int> & store, map<string, int> &concVar){
	string ans = "";
if(store["BC"] == 0 )
{
concVar["DI"] = 0;
ans="NO_DISEASE";
}

	if( store["BC"] == 1 && store["AX"]==1  && concVar["DI"]==-1)
	{
		concVar["DI"] = 1;
		cout <<" DISORDER "<<endl;
	}

    if( (store["BC"] == 0 && store["AX"]==0) || (store["BC"] == 1 && store["AX"]==0) || (store["BC"] == 0 && store["AX"]==1) )
    {
        concVar["SY"] = 0;
        cout<<"NO_DISORDER"<<endl;
    }
//    if(store["SY"] = 0) {concVar["DI"] = 0;  ans="NO_DISEASE";}
    if( concVar["DI"]==1 && store["DL"] ==1 && concVar["ADL"] == -1)
    {
        concVar["ADL"] = 1;
        cout<<" CLASS 1 DISORDER "<<endl;
    }

    if( concVar["DI"]==1  && store["DP"]==1 && concVar["AD"] ==-1)
    {
        concVar["AD"] =1;
        cout<<" CLASS 2 DISORDER "<<endl;
    }

    if( concVar["DI"]== 1  && store["DP"]==0 )
        concVar["AD"] = 0;

    if( store["CC"] ==1 && concVar["AD"]==1 && concVar["CD"] == -1 )
    {
        concVar["CD"] = 1;
        cout<<" CLASS 3 DISORDER "<<endl;
    }

    if( concVar["ADL"]==1 && store["EX"] == 1 && concVar["ID"]==-1)
    {
        concVar["ID"]=1;
        cout<<"INITIAL STAGE DYSTHYMIA "<<endl;
    }

    if( concVar["DI"]==1 && store["IN"] == 1 && store["CC"] == 1 &&concVar["IC"]==-1 )
    {
        concVar["IC"]=1;
        cout<<"CLASS 4 DISORDER "<<endl;
        ans = "IC";
    }

    if( concVar["DI"]==1 && store["AC"] == 1 && store["FG"] == 1 && concVar["AF"]==-1)
    {
        concVar["AF"]=1;
        cout<<"CLASS 5 DISORDER"<<endl;
        ans = "AF";
    }

    if( concVar["DI"]==1 && store["SD"]==1 && store["DF"] ==1 && concVar["SU"]==-1)
    {
        concVar["SU"]=1;
        cout<<"SUICIDE (SUICIDAL THOUGHTS) "<<endl;
        ans = "SU";
    }

    if( concVar["DI"]==1 && store["SD"]==0 && store["DF"] == 0  )
    {
        concVar["SU"]=0;
    }

    if( concVar["AD"] ==1 && concVar["SU"] == 0 && concVar["IA"]==-1)
    {
        concVar["IA"]=1;
        cout<<"INITIAL STAGE PANICDISORDERAGROPHOBIA "<<endl;
        ans = "IA";
    }

    if( concVar["DI"] == 1 && store["TL"] == 1 && concVar["GD"] == -1)
    {
        concVar["GD"] = 1;
        cout<<" GRANDIOSITY "<<endl;
        ans = "GD";
    }

    if( concVar["DI"] == 1 &&  store["TL"] == 0 && concVar["IS"] == -1)
    {
        concVar["IS"] = 1;
        cout<<" INITIAL STAGE SCHIZOAFECTIVE_DISORDER "<<endl;
    }

    if(concVar["IA"]==1 && store["PA"] == 0 && concVar["IG"]==-1)
    {
        concVar["IG"]=1;
        cout<<"INITIAL STAGE GENERALIZED_ANXIETY_DISORDER "<<endl;
        ans = "IG";
    }

    if(concVar["AD"]==1 && concVar["SU"]==1 && concVar["ID"]==-1 )
    {
        concVar["ID"]=1;
        cout<<"INITIAL STAGE DISSOCIATIVEDISORDER "<<endl;
        ans = "ID";
    }

    if( concVar["SU"] ==1 && concVar["AF"]==1 && concVar["AD"]==1 && concVar["IS"]==-1)
    {
        concVar["IS"]=1;
        cout<<"INITIAL STAGE SCHIZOAFECTIVE_DISORDER"<<endl;
        ans = "IS";
    }

    if( concVar["IS"]==1 && store["EX"]==0 && store["PR"]==0 && concVar["MD"]==-1)
    {
        concVar["MD"]=1;
        cout<<"MANIC DEPRESSION"<<endl;
        ans = "MD";
    }

    if( concVar["MD"]==1 && concVar["GD"]==1 && store["SX"] == 1 && concVar["IB"]==-1 )
    {
        concVar["IB"]=1;
        cout<<"INITIAL STAGE BIPOLAR DISORDER "<<endl;
        ans = "IB";
    }

    if (concVar["MD"] == 1 && concVar["GD"] == -1 && concVar["ADL"] == 0)
    {
        ans="SCHIZOAFECTIVE_DISORDER";
    }

    if( concVar["AF"]==1  && concVar["CD"] == 1 &&  concVar["IC"] == 1 && concVar["IM"]==-1)
    {
        concVar["IM"]=1;
        cout<<"INITIAL STAGE MDD "<<endl;
        ans = "IM";
    }

    if(concVar["ID"]==1  && concVar["AF"]==1 && concVar["IC"] == 1 && concVar["SU"]==0)
    {
        ans="DYSTHYMIA";
    }

    if(concVar["IA"]==1 && store["PA"] == 1 )
        ans="PANICDISORDERAGROPHOBIA";

    if( concVar["CD"]==1 && store["SP"]== 1 && concVar["SU"]==1 )
        ans="SCHIZOPHRENIA";

    if( concVar["IG"]==1 && store["PP"]==1 )
        ans="GENERALIZED_ANXIETY_DISORDER";

    if( concVar["IG"]==1 && store["SP"]== 0  )
        ans="GENERALIZED_ANXIETY_DISORDER";

    if( concVar["IS"]== 1 && store["PR"] == 1 )
        ans="SCHIZOAFECTIVE_DISORDER";

    if( concVar["IB"]==1 && concVar["AD"]==1 && concVar["CD"]==1 )
        ans="BIPOLAR_DISORDER";

    if( concVar["ID"]==1 && store["AM"] == 1 )
        ans="DISSOCIATIVEDISORDER";

    if( concVar["IM"]==1 && concVar["SU"] == 1 &&  store["RT"]==1 )
        ans="MAJORDEPRESSDISORDER";

    if( concVar["IM"]==1 && concVar["SU"]==0 && store["RH"] == 1 )
        ans="GENERALIZED_ANXIETY_DISORDER";

    if( concVar["IM"]==1 && concVar["SU"]==0 && store["RH"] == 0  && store["ADL"]==1)
        ans="SCHIZOPHRENIA";
	return ans;
    }
    string startProcess(map<string, string> abbr){
        string finalAns = "";
        string start = "";
        cout<<"Do you want to start ? (Enter Yes / No) ";
        cin>>start;
        transform(start.begin(), start.end(), start.begin(), ::tolower);
        int startResp = (start=="yes");
        if(startResp==1){
            stack<int> stk;
            for(auto const &i: concList){
                stk.push(i.first);
                int c = 0;
                while(!stk.empty()){
                    if(c>23){
                        break;
                    }
                    int rs = calc(stk.top());
                    int  j =rs;
                    int cnt = 0;
                    while (j<rs+4){
                        string vr = clausList[j]; // Gets Variables of IF
                        if(visited[vr]==0){
                            visited[vr] = 1;
                            if(concVar.find(vr)!=concVar.end() && concVar[vr]==-1){
                                stk.push(Li[vr]);
                                break;
                            }else{
                                if(Questions.find(vr)!=Questions.end() && vr.length()>0){
                                    cout<<Questions[vr]<<endl;
                                    string answer = "";
                                    cin>>answer;
                                    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                                    int ansResp = (answer=="yes");
                                    store[vr] = ansResp;
                                    j++;
                                }else{
                                j++;
                                }
                            }
                        }else{
                            j++;
                        }
        cnt+=1;
                    }
                    if(cnt==4) {
                        checkRuleSatisfied(stk.top(), store, concVar);
                        stk.pop();
                    }
                c++;
                }
                string finl = checkRuleSatisfied(i.first, store, concVar);
                if(finl=="" || concVar.find(finl)!=concVar.end()){
                    continue;
                    }else{
                    cout<<"****************************Success*********************"<<endl;
                    finalAns  = finl;
                    cout<< "PATIENT IS SUFFERING FROM : "<<finl<<" DISORDER."<<endl;
                    break;
                }
                }
        }
    return finalAns;
}

};

class forwardChaining{
private:
    map<string, string>store;
    map<string, vector<int> >clausList;
    vector<int>clsLi;
    map<int,string> Li;
    queue<string> qu;
public:
    forwardChaining(){
        store["DI"] = "-1";
        vector<int>clsLi;
        for(int i =1; i < 10; i++)
        {
            int j = 4 * (i-1) + 1;
            clsLi.push_back(j);
        }
        clausList["DI"] = clsLi;
         Li[1] = "DI";
    }
    int resClaus (int clausNum){  return (floor(clausNum/4)+1)*10;}
int getAnswers(int a, map<string,string> & store){
int ans=0;
	switch(a){
		case 10:
			if(store["DI"]=="NO_DISEASE") {
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"No Treatment"<<endl;
            ans = 1;
			break;
            }
		case 20:
			if(store["DI"]=="BIPOLAR_DISORDER"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"OXCARBAZEPINE AND ANTIPSYCHOTICS"<<endl;
            ans = 1;
			break;
            }
		case 30:
			if(store["DI"]=="SCHIZOAFECTIVE_DISORDER"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"PSYCHOTHERAPY AND CARBAMAZEPINE"<<endl;
            ans = 1;
			break;
            }
		case 40:
			if(store["DI"]=="MAJORDEPRESSDISORDER"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"SSRI AND PSYCHOTHERAPY"<<endl;
            ans = 1;
			break;
            }
		case 50:
			if(store["DI"]=="DYSTHYMIA"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"VENLAFAXINE AND PSYCHOTHERAPY AND TMS"<<endl;
            ans = 1;
			break;
            }
        case 60:
            if(store["DI"]=="SCHIZOPHRENIA"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"ANTI-TREMOR AND PSYCHOTHERAPY"<<endl;
            ans = 1;
			break;
            }
        case 70:
            if(store["DI"]=="GENERALIZED_ANXIETY_DISORDER"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"BUSPIRON AND PSYCHOTHERAPY"<<endl;
            ans = 1;
			break;
            }
        case 80:
            if(store["DI"]=="PANICDISORDERAGROPHOBIA"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
			cout<<"DIAZEPAM AND PSYCHOTHERAPY"<<endl;
            ans = 1;
            break;
            }
        case 90:
            if(store["DI"]=="DISSOCIATIVEDISORDER"){
            cout<<"TREATMENT RECOMMENDED FOR THIS DISORDER : ";
            cout<<"HYPNOSIS AND PSYCHOTHERAPY"<<endl;
            ans = 1;
            break;
            }

	}
	return ans;
}
void printVariableList(){
    cout<<"************** VARIABLE LIST *************"<<endl;
    cout<<"1. "<<"DISORDER "<<endl;
}
void printClausVariableList(){
    cout<<"************** CLAUSE VARIABLE LIST *************"<<endl;
    for(int i=1;i<=8*4;i++){
        if(i%4==1)
            cout<<"CLAUSE "<<i<<" "<<"DISORDER "<<endl;
        else
            cout<<"CLAUSE "<<i<<endl;
    }
}
void printConcVariableList(){
    cout<<"************** CONCLUSION VARIABLE LIST *************"<<endl;
    for(int i=1;i<=8*4;i++){
        cout<<"CONCLUSION "<<i<<" "<<"TREATMENT "<<endl;
    }
}
    string askQuestions(string question){
	string ans="";
	if(question=="DI")  {			cout<<"Which Disease?"<<endl;
			cin>>ans;}
		return ans;
}
   void startFcProcess(string diagnosedDisease){
        string question = "";
        store["DI"] = diagnosedDisease;
        qu.push("DI");
        int cnt = 0;
        while(!qu.empty()){
            if (cnt>10) break;
            string a = qu.front();
            qu.pop();
                int c = 0;
                int siz = 0;
                while(siz<clausList[a].size()){
                    c++;
                    if(c>50) {break;}
                    int cls = clausList[a][siz];
                    int i = cls;
                    while(i<cls+4){
                        if(store[Li[i]] == "-1"){
                            store[Li[i]] = askQuestions(Li[i]);
                        }
                        i++;
                    }
                    if(store[a]=="-1"){
                        store[a] = askQuestions(a);
                    }else{
                        int ans = getAnswers(resClaus(clausList[a][siz]), store); // Calculates all clause questions by calculating rules
                        if(ans==1)
                            break;
                        else{
                            siz++;
                            continue;
                        }
                    }
                    c++;
                }
                cnt++;
        }
    }
};


int main(){
    map<string, string> abbr;
        abbr["BC"] = "Behaviour_Change";
        abbr["AX"] = "Anxious";
        abbr["DI"] = "DISORDER";
        abbr["DL"] = "Delusions";
        abbr["EX"] = "Exasperate";
        abbr["DP"] = "Depression";
        abbr["SU"] = "Suicide";
        abbr["PR"] = "Paranoia";
        abbr["CC"] = "Concentration";
        abbr["IN"] = "Insomnia";
        abbr["AC"] = "Appetite_Changes";
        abbr["FG"] = "Fatigue";
        abbr["SD"] = "Selfdestruct";
        abbr["DF"] = "Dyingfear";
        abbr["SP"] = "Speech_Difficulty";
        abbr["TL"] = "Talkative";
        abbr["GD"] = "Grandiosity";
        abbr["MD"] = "Manicdepression";
        abbr["SX"] = "Sexdesire";
        abbr["PA"] = "Panic_Attack";
        abbr["AM"] = "Amnesia";
        abbr["RT"] = "Repeatedlygoingoverthoughts";
        abbr["RH"] = "Rapid_Heartbeat";
        abbr["PP"] = "PALPITATION";
        abbr["ADL"] =  "CLASS 1 DISORDER";
        abbr["AD"] =  "CLASS 2 DISORDER";
        abbr["ID"] =  "INITIAL_STAGE_DYSTHYMIA";
        abbr["IC"] =  "CLASS 4 DISORDER";
        abbr["CD"] =  "CLASS 3 DISORDER";
        abbr["AF"] =  "CLASS 5 DISORDER";
        abbr["IA"] =  "INITIAL_STAGE_PANICDISORDERAGROPHOBIA";
        abbr["SU"] =  "SUICIDE";
        abbr["IG"] =  "INITIAL_STAGE_GENERALIZED_ANXIETY_DISORDER";
        abbr["IS"] =  "INITIAL_STAGE_SCHIZOAFECTIVE_DISORDER";
        abbr["MD"] =  "MANICDEPRESSION";
        abbr["GD"] =  "GRANDIOSITY";
        abbr["IB"] =  "INITIAL_STAGE_BIPOLAR_DISORDER";
        abbr["IM"] =  "INITIAL_STAGE_MDD";
        abbr["TP"] = "Disease";
        abbr["ND"] = "NO_DISEASE";

        int res = 0;

        do{
            cout<<"*********************************************************"<<endl;
            cout<<"EXPERT SYSTEM TO PREDICT MENTAL DISORDERS "<<endl;
            cout<<"*********************************************************"<<endl;
            cout<<"                     MAIN MENU               "<<endl;
            cout<<"*********************************************************"<<endl;
            cout<<"1. Diagnosis of disorder based on symptoms and get a recommended treatment "<<endl;
            cout<<"2. Display the variable list for diagnosis "<<endl;
            cout<<"3. Display the clause-variable list for diagnosis "<<endl;
            cout<<"4. Display the conclusion-variable list for diagnosis "<<endl;
            cout<<"5. Display the variable list for treatment "<<endl;
            cout<<"6. Display the clause-variable list for treatment "<<endl;
            cout<<"7. Display the conclusion list for treatment "<<endl;
            cout<<"8. EXIT. "<<endl;
            cout<<" Choose an option from the menu above : ";
            cin>>res;
            backwardChaining bc;
            forwardChaining fc;
            string diagnosed = "";
            switch (res){
            case 1:
                diagnosed = bc.startProcess(abbr);
                fc.startFcProcess(diagnosed);
                break;
            case 2:
                bc.printVariableList(abbr);
                break;
            case 3:
                bc.printClausVariableList(abbr);
                break;
            case 4:
                bc.printConcVariableList(abbr);
                break;
            case 5:
                fc.printVariableList();
                break;
            case 6:
                fc.printClausVariableList();
                break;
            case 7:
                fc.printConcVariableList();
                break;
            case 8:
                cout<<"******************* Exiting the Menu *********************"<<endl;
                break;
            default:
                cout<<endl<<"Invalid Choice, please enter a valid choice"<<endl<<endl;
                break;
            }

        }while(res != 8);

        return 0;
}
