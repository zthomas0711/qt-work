#ifndef ENGINEER_H
#define ENGINEER_H
#include<string>
#include<QDataStream>
using namespace std;

class engineer
{

    public:

        engineer();
        ~engineer();

        friend QDataStream& operator <<( QDataStream& stream, const engineer& employee );
        friend QDataStream& operator >>( QDataStream& stream, engineer& employee );
        void writeMyData();
        QList<engineer *> readMyData();
        QString lastName;
        QString firstName;
        QString title;
        QString group;
        QString pRating;//this is the performance rating
        QString idNumber;

};


#endif // ENGINEER_H
