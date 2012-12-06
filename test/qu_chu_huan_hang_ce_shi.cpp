#include "test_function.h"
#include "hangChuLi.h"

#include <iostream>

#include <boost/bind.hpp>

#include <QFile>
#include <QDebug>
#include <QTextStream>

static bool ceShiHanShu(const QString heBingJieGuo,const QString& yiHang){

    Q_ASSERT(heBingJieGuo.indexOf(yiHang)!=-1);
    return true;
}

int main(int argc, char const* argv[])
{

    boost::shared_ptr<QFile> wenJian=jiaZaiWenJian(argv[argc-1]);

    QTextStream liu(wenJian.get());

    QString suoYou=liu.readAll();

    QString yiHang=quChuHuanHang(suoYou);

    hangChuLi(suoYou,boost::bind(ceShiHanShu,boost::cref(yiHang),_1));
    
    return 0;
}

