//#include "stdafx.h"
//#define _CRT_SECURE_NO_WARNINGS
//
//using namespace std;
//
//
//int different(int days,int month, int years)
//{
//    setlocale(0, "");
//    time_t now = time(0);
//    char* NowTime = ctime(&now);
//    cout << NowTime << endl;
//    string diffhours;
//    time_t EndTime;
//    int endDay = 0, endMonth = 0, endYear = 0;
//    cout << "\t\tВведите данные второй даты в формате ДДММГГГГ:" << endl;
//     endDay = stoi(diffhours.substr(0, 2));
//
//     endMonth= stoi(diffhours.substr(2, 2));
//
//    if (!fails(endDay, endMonth))
//    {
//        cout << "Некорректная дата";
//        return 0;
//    }
//     endYear = stoi(diffhours.substr(4, 4));
//    tm EndDate = { 0,0,0,endDay,endMonth - 1,endYear - 1900,0,0,0 };
//    time_t end = mktime(&EndDate);
//    double difference;
//    if (now > end) {
//        difference = difftime(now, end);
//    }
//    else {
//        difference = difftime(end, now);
//    }
//
//    cout << "Разница в часах между датами: " << int(difference / 3600) << endl;
//
//    return 0;
//}