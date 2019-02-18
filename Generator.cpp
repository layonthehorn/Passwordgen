#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

class RandomGen{
    public:
	auto passwordcreator(){
	    for(int i = 1;i <= passlen;i++){
		functionchoice = random_range(0,3);
		if(functionchoice == 0){
		    passwordlist.push_back(random_lowerletter());
		}else if(functionchoice == 1){
		    passwordlist.push_back(random_upperletter());
		}else if(functionchoice == 2){
		    passwordlist.push_back(random_numberlist());
		}else{
		    passwordlist.push_back(random_specialchar());
		}
	    };
	    cout << endl << "Your password is: ";
	    for(unsigned int i = 0; i < passwordlist.size(); i++){

		finalpass += passwordlist[i];

    } 
	    cout << finalpass;
	}	   
	int take_user(){
	    cout << "How long do you want your password?" << endl;
	    cin >> passlen;
	    return 0;
	}
    private:
	vector<char> passwordlist;
	int functionchoice;
	std::string finalpass = "";
	int passlen;
	char random_number;
	char random_uletter;
	char random_lletter;
	char random_special;
	char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
	char upper_case[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z'};
	char lower_case[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
	char special_char[8] = {'!','@','#','$','%','^','&','*'};


	int random_range(int x, int y){
	    std::mt19937 rng (std::random_device{}());
	    std::uniform_int_distribution<> dist (x, y);
	    auto random_number = dist(rng);
	    //std::cout << random_number << std::endl;
	    return random_number;	    
	}

	char random_upperletter(){
	    int utemp = random_range(0,25);
	    random_uletter = upper_case[utemp];
	    return random_uletter;

	}

	char random_lowerletter(){
	    int ltemp = random_range(0,25);
	    random_lletter = lower_case[ltemp];
	    return random_lletter;

	}
	char random_numberlist(){
	    int ntemp = random_range(0,9);
	    random_number = numbers[ntemp];
	    return random_number;

	}
	char random_specialchar(){
	    int stemp = random_range(0,7);
	    random_special = special_char[stemp];
	    return random_special;

	}
	


};
int main(){
    RandomGen passwordmaker;
    passwordmaker.take_user();
    passwordmaker.passwordcreator();
return 0;
}

