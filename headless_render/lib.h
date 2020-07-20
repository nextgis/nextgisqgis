#ifndef HEADLESSRENDER_H
#define HEADLESSRENDER_H

#include <QObject>
#include "qgsmapsettings.h"

class QgsMapSettings;
class QgsMapRendererQImageJob;
class HeadlessRenderJob;

class HEADLESSRENDER_EXPORT HeadlessRender
{
public:
    HeadlessRenderJob * renderVector(const QgsMapSettings &settings);
};

class HEADLESSRENDER_EXPORT HeadlessRenderJob : public QObject
{
    Q_OBJECT
public:
    explicit HeadlessRenderJob(const QgsMapSettings &settings);
    void start();

signals:
    void finished(const QImage &image);

private slots:
    void internalRenderJobFinished();

private:
    QgsMapSettings mSettings;
    //! Job that takes care of map rendering in background
    QgsMapRendererQImageJob *mJob = nullptr;
};

#endif // HEADLESSRENDER_H
