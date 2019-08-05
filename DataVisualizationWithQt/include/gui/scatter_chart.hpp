#pragma once
#include <QtGui/QPainter>
#include <QtCharts/QChartView>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QLegendMarker>
#include <memory>

namespace vis {
	inline decltype(auto) make_scatter_series() noexcept {
		return new QtCharts::QScatterSeries();
	}

	inline void draw_scatter_fig() {
		auto series0 = make_scatter_series();
		series0->setName("Point 1");
		series0->setMarkerShape(QtCharts::QScatterSeries::MarkerShape::MarkerShapeCircle);

		auto series1 = make_scatter_series();
		series1->setName("Point 2");
		series1->setMarkerShape(QtCharts::QScatterSeries::MarkerShape::MarkerShapeRectangle);

		auto series2 = make_scatter_series();
		series2->setName("Point 3");
		series2->setMarkerShape(QtCharts::QScatterSeries::MarkerShape::MarkerShapeRectangle);

		series0->append(0, 6), series0->append(2, 4), series0->append(3, 8);
		*series1 << QPointF(1, 1) << QPointF(3, 3) << QPointF(7, 6);

		QPainterPath star_path;
		star_path.moveTo(28, 15);
		for (int i = 1; i < 5; ++i) {
			star_path.lineTo(14 + 14 * cos(0.8*i*3.1415926), 15 + 14 * sin(0.8*i*3.1415926));
		}
		star_path.closeSubpath();
		QImage star(30, 30, QImage::Format_ARGB32);
		star.fill(Qt::transparent);

		QPainter painter(&star);
		painter.setRenderHint(QPainter::Antialiasing);
		painter.setPen(QRgb(0xf6a625));
		painter.setBrush(painter.pen().color());
		painter.drawPath(star_path);

		series2->setBrush(star);
		series2->setPen({ Qt::transparent });
	}

	class ChartView : public QtCharts::QChartView {
		Q_OBJECT
		using _Mybase = QtCharts::QChartView;
	public:
		explicit ChartView(QWidget *parent = nullptr)
			: _Mybase(new QtCharts::QChart(), parent) {
		}

		inline void draw() {
			this->show();

			auto series0 = make_scatter_series();
			series0->setName("Point 1");
			series0->setMarkerShape(QtCharts::QScatterSeries::MarkerShape::MarkerShapeCircle);

			auto series1 = make_scatter_series();
			series1->setName("Point 2");
			series1->setMarkerShape(QtCharts::QScatterSeries::MarkerShapeRectangle);

			auto series2 = make_scatter_series();
			series2->setName("Point 3");
			series2->setMarkerShape(QtCharts::QScatterSeries::MarkerShapeRectangle);

			series0->append(0, 6), series0->append(2, 4), series0->append(3, 8);
			*series1 << QPointF(1, 1) << QPointF(3, 3) << QPointF(7, 6);
			*series2 << QPointF(1, 5) << QPointF(4, 6) << QPointF(9, 5);

			QPainterPath star_path;
			star_path.moveTo(28, 15);
			for (int i = 1; i < 5; ++i) {
				star_path.lineTo(14 + 14 * std::cos(0.8*i*3.1415926), 15 + 14 * std::sin(0.8*i*3.1415926));
			}
			star_path.closeSubpath();
			QImage star(30, 30, QImage::Format_ARGB32);
			star.fill(Qt::transparent);

			QPainter painter(&star);
			painter.setRenderHint(QPainter::Antialiasing);
			painter.setPen(QRgb(0xf6a625));
			painter.setBrush(painter.pen().color());
			painter.drawPath(star_path);

			series2->setBrush(star);
			series2->setPen({ Qt::transparent });

			setRenderHint(QPainter::Antialiasing);
			chart()->addSeries(series0);
			chart()->addSeries(series1);
			chart()->addSeries(series2);
			chart()->setTitle("Scatter figure");
			chart()->createDefaultAxes();
			chart()->setDropShadowEnabled(false);

			QFont label_font("Segeo UI");
			label_font.setPointSize(10);
			chart()->axisX()->setLabelsFont(label_font);
			chart()->axisY()->setLabelsFont(label_font);
			chart()->setTitleFont(label_font);

			chart()->legend()->setMarkerShape(QtCharts::QLegend::MarkerShapeFromSeries);
			chart()->legend()->setFont(label_font);
		}
	};
	
}