class Safe
{
    public:
       void set_money(long double);
      long  double get_money();    
       void sub_money(long double); 

    private:
        long double m_money{};
};