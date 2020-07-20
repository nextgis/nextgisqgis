#include "lib.h"

#include "qgsmaplayer.h"
#include "qgsmaprendererparalleljob.h"

HeadlessRenderJob * HeadlessRender::renderVector(const QgsMapSettings &settings)
{
    HeadlessRenderJob *renderJob = new HeadlessRenderJob(settings);
    renderJob->start();
    return renderJob;
}

HeadlessRenderJob::HeadlessRenderJob(const QgsMapSettings &settings)
    : mSettings(settings)
{

}

void HeadlessRenderJob::start()
{
    mJob = new QgsMapRendererParallelJob( mSettings );
    connect( mJob, &QgsMapRendererJob::finished, this, &HeadlessRenderJob::internalRenderJobFinished );

    mJob->start();
}

void HeadlessRenderJob::internalRenderJobFinished()
{
    emit finished( mJob->renderedImage() );
    mJob->deleteLater();
}
