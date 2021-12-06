#ifndef VEGTEBALE
#define VEGTEBALE

    using namespace std;

    enum VEG{TOMATO , CABBAGE , CARROT , LETTUCE};

    class vegtebale
    {
        public:
            int get_type();
            void set_type(int);
            void print();

        private:
            VEG type;
            unsigned int price;
            unsigned int growing_date;
            unsigned int water_day; //to now how often do you irrigate your plant
    };

    

#endif
