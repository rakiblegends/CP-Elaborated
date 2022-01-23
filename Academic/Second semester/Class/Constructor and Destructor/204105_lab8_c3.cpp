#include<iostream>
using namespace std;
class Time{
    int hour;
    int minute;
    int second;
    public:
        Time(){
            hour = 0;
            minute = 0;
            second = 0;
        }
        Time(int h,int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
        int getHour(){
            return hour;
        }
        int getMinute(){
            return minute;
        }
        int getSecond(){
            return second;
        }
        void setHour(int h){
            hour = h;
        }
        void setMinute(int m){
            minute = m;
        }
        void setSecond(int s){
            second = s;
        }
        void setTime(int h, int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
        void print(){
            if(hour<10) cout << 0;
            cout << getHour() << ":";
            if(minute<10) cout << 0;
            cout << getMinute() << ":";
            if(second<10) cout << 0;
            cout << getSecond() <<"\n";
        }
        void nextHour(){
            hour++;
            if(hour==24){
                setTime(0,0,0);
            }
        }
        void nextMinute(){
            minute++;
            if(minute==60){
                minute = 0;
                nextHour();
            }
        }
        void nextSecond(){
            second++;
            if(second=60){
                second = 0;
                nextMinute();
            }
        }
        
};

int main(){
    Time t(0,1,59),t1;
    t.nextSecond();
    t.print();
    t1.setTime(10,45,56);
    t1.nextHour();
    t1.print();
}
