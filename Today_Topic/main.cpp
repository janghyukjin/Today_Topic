#include <fstream>
#include <iostream>
#include <string>
#include "json/json.h"
#include "curlpp/include/curlpp/cURLpp.hpp"
#include "curlpp/include/curlpp/Options.hpp"
#include "curlpp/include/curlpp/Easy.hpp"

using namespace std;

int main(){
    string text ="{\"title\":\"스포츠한국:레드벨벳 예리, 눈에 띄는 인형 미모(2018 아시아송페스티벌)\"}";
    Json::Value root;
    Json::Reader reader;
    bool parsingSuccessful = reader.parse( text, root );
    if ( !parsingSuccessful )
    {
        cout << "Error parsing the string" << endl;
    }
    cout << root.get("title","UTF-8").asString() << endl;
    
    curlpp::Cleanup myCleanup;
    
    // Send request and get a result.
    // Here I use a shortcut to get it in a string stream ...
    
    std::ostringstream os;
    os << curlpp::options::Url(std::string("http://www.wikipedia.org"));
    
    string asAskedInQuestion = os.str();
}
