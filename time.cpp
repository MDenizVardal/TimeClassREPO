#include "time.h"

Time::Time(){

}
Time::Time(int t){
    time=t;
    if(time<60){
            hour=0;
            minute=0;
            second=time;
         }else if(time <3600){
            hour=0;
            minute=time/60;
            second=time%60;
         }else{
            hour=time/3600;
            minute=(time%3600)/60;
            second=(time%3600)%60;
         }
}


Time Time::operator+(const Time &T) const {
    Time t;
    int t1=this->hour*3600+this->minute*60+this->second;
    int t2=T.hour*3600+T.minute*60+T.second;
    int total=t1+t2;
    t.hour=total/3600;
    t.minute=(total%3600)/60;
    t.second=(total%3600)%60;
    return t;
}
Time Time::operator-(const Time &T) const {
    Time t;
    int t1=this->hour*3600+this->minute*60+this->second;
    int t2=T.hour*3600+T.minute*60+T.second;
    int sub=t1-t2;
    t.hour=sub/3600;
    t.minute=(sub%3600)/60;
    t.second=(sub%3600)%60;
    return t;
}
    Time::operator int(){

    return hour*3600+minute*60+second;
    }


std::ostream &operator<<( std::ostream &output, const Time &T ) {
         if(T.time<60){
            output <<T.time<<"s";
         }else if(T.time <3600){
            output << T.time/60 <<"m:"<<T.time%60 <<"s";
         }else{
            output << T.time/3600 <<"h:"<< (T.time%3600)/60 <<"m:"<<T.time%60 <<"s";
         }
         return output;
      }

std::istream &operator>>(std::istream  &input, Time &T ) {
         input >> T.hour >>T.minute >> T.second;
         return input;
    }
