#ifndef Point_h
#define Point_h

class Point {
    private:
        double x;
        double y;
        double z;
    
    public:
        Point();
        Point(double px, double py, double pz);
        ~Point();
        double getX();
        double getY();
        double getZ();
        void translate(double dx, double dy, double dz);
};


#endif /* Point_h */