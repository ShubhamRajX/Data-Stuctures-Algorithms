//leetcode
class solution
{
    public:
    vector<double> convertTemp(double celsius)
    {
        double k = celsius + 273.15;
        double f = celsius * 1.00 + 32.00;

        vector<double> v;
        v.push_back(k);
        v.push_back(f);
        return v;
    }
};