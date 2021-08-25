#pragma once
#include <string>
#include <vector>
#include <exception>

inline auto from(std::string raw){
    class stringEx{
    public:
        stringEx(std::string value):value(value){
        }
        stringEx(const stringEx &) = default;
        stringEx(stringEx &&) = default;
        ~stringEx() = default;
        stringEx & operator=(stringEx right){
            this->value = right;
            return *this;
        }
        bool endWith(std::string tail)const {
            return value.compare(value.size() - tail.size(), tail.size(), tail) == 0;
        }
        
        bool startWith(std::string head)const {
            return value.compare(0, head.size(), head) == 0;
        }

        auto trim()
        { 
            value.erase(0, value.find_first_not_of(" "));
        
            value.erase(value.find_last_not_of(" ")+1);

            return stringEx(value);
        }
        
        auto replace(std::string find, std::string replace){
            return stringEx(value.replace(value.find(find), find.size(), replace));
        }

        stringEx replaceAll(std::string find, std::string replace) // 把org_str 替换为rep_str; 
        { 
            std::vector<stringEx>  delimVec = split(find); 
            if (delimVec.size() <= 0) 
            { 
                return *this; 
            } 
            std::string target(""); 
            std::vector<stringEx>::iterator it = delimVec.begin(); 
            for (; it < delimVec.end(); it++) 
            { 
                target = target + (*it).str() + replace; 
            } 
            target = stringEx(target).Left(target.length() - replace.length());
            return target; 
        } 
 

        std::vector<stringEx> split(std::string delimeter)const{
            
            std::vector<stringEx> ret{};//use ret save the spilted reault
            if(value.empty())    //judge the arguments
            {
                return ret;
            }
            std::string::size_type pos_begin = value.find_first_not_of(delimeter);//find first element of srcstr

            std::string::size_type dlm_pos;//the delimeter postion
            std::string temp;              //use third-party temp to save splited element
            while(pos_begin != std::string::npos)//if not a next of end, continue spliting
            {
                dlm_pos = value.find(delimeter, pos_begin);//find the delimeter symbol
                if(dlm_pos != std::string::npos)
                {
                    temp = value.substr(pos_begin, dlm_pos - pos_begin);
                    pos_begin = dlm_pos + delimeter.length();
                }
                else
                {
                    temp = value.substr(pos_begin);
                    pos_begin = dlm_pos;
                }
                if(!temp.empty())
                    ret.push_back({temp});
            }
            return ret;
        }

        operator std::string(){
            return  value;
        }

        std::string str(){
            return value;
        }

        stringEx Left(size_t num)const{
            if(num > value.length()) throw "Left out of range!";
            return value.substr(0,num);
        }

        stringEx Right(size_t num)const{
            if(num > value.length()) throw "Right out of range!";
            return value.substr(value.length() - num);
        }

        size_t find(std::string pattern)const{
            return value.find(pattern);
        }

        size_t rfind(std::string pattern)const{
            return value.rfind(pattern);
        }

        size_t length()const{
            return value.length();
        }
    protected:
        std::string value;
    };

    return stringEx(raw);
}

inline auto from(std::vector<std::string> vec){
    struct vecEx{
        vecEx(std::vector<std::string> vec):vec(vec){

        }
        
        std::string Join(std::string delimeter){
            std::string ret;
            for(auto i : vec){
                ret += i + delimeter;
            }
            return from(ret).Left(ret.length() - delimeter.length());
        }

        std::vector<std::string> vec;
    };

    return vecEx{vec};
}