#ifndef SALES_H
#define SALES_H

namespace SALES{
  class Sales {
    private:
      enum{QUARTERS = 4};
      double m_sales[QUARTERS] = {0.0, 0.0, 0.0, 0.0};
      double m_average;
      double m_max;
      double m_min;
    public:
      Sales(){m_max = m_min = m_average = 0;};
      Sales(const double ar[], int n = 0);
      void setSales();
      void showSales() const;

  };
}

#endif
