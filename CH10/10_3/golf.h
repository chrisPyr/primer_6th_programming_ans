#ifndef GOLF_H
#define GOLF_H
const int Len = 40;

class golf{
  private:
    char m_fullname[Len];
    int m_handicap;

  public:
    golf(const char *fullname = "", const int handicap = 0);
    int setgolf();
    void handicap(int hc);
    void showgolf() const;
};

#endif
