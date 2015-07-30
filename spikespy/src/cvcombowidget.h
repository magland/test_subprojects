#ifndef CVCOMBOWIDGET_H
#define CVCOMBOWIDGET_H

#include "diskreadmda.h"

#include <QWidget>
#include "sstimeseriesview.h"

class CVComboWidgetPrivate;
class CVComboWidget : public QWidget
{
	Q_OBJECT
public:
	friend class CVComboWidgetPrivate;
	explicit CVComboWidget(QWidget *parent = 0);
	~CVComboWidget();

	void setClips(DiskReadMda X);
	void setTimepointMapping(DiskReadMda TM);
	SSTimeSeriesView *timeSeriesView();

protected:
	void resizeEvent(QResizeEvent *evt);

private slots:
	void slot_update_selected_clips();

private:
	CVComboWidgetPrivate *d;

signals:

public slots:
};

#endif // CVCOMBOWIDGET_H
