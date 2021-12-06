#ifndef MAZRAE
#define MAZRAE



    using namespace std;

    class farm
    {
        public:
            int get_length();
            int set_length(int length = 0);
            int get_width();
            int set_width(int width = 0);
            void print() const;
            void get_farm();//yek makan baraye mazrae dar hafeze misazim
        
        private:
            unsigned int length;
            unsigned int width;
            string ** yourfarm;
    };






#endif