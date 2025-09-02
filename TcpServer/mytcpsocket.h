#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QTcpSocket>
#include "protocol.h"
#include "opedb.h"
#include <QDir>        // 提供 QDir 类，用于处理目录和文件路径
#include <QFile>
class MyTcpSocket : public QTcpSocket
{
    Q_OBJECT
public:
    MyTcpSocket();
    QString getName();
signals:
    void offline(MyTcpSocket *mysocket);
public slots:
    void recvMsg();
    void clientOffline();
private:
    QString m_strName;

    QFile m_file;
    qint64 m_iTotal;
    qint64 m_iRecved;
    bool m_bUpload;
};

#endif // MYTCPSOCKET_H
