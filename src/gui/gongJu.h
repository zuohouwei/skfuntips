#ifndef GONG_JU_H

#define GONG_JU_H

class QString;

class QWidget;

template<class T>
class QList;

class QImage;

QString wenJianWenBen(QWidget* parent);

QString jianQieBanWenBen(QWidget* parent);


template<typename T>
class QList;

class FrameSegment;

QList<FrameSegment> loadImages(QWidget* parent);

#endif /* end of include guard: GONG_JU_H */
