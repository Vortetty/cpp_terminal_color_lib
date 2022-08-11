#include <stdint.h>
#include <string>

namespace colors {
    typedef uint8_t termColor8;

    typedef struct termColor24 {
        uint8_t    red,    green,    blue;
        uint8_t &r=red, &g=green, &b=blue;
    } color24Bit;

    namespace {
        enum colorLayerEnum {
            foreground=0,
            fg=0,
            background=1,
            bg=1
        };
    }
    typedef colorLayerEnum colorLayer;
    typedef colorLayerEnum cl;

    std::string getColor(cl cl, termColor8 color);
    std::string getColor(colorLayer colorLayer, termColor8 color);
    std::string getColor(cl cl, termColor8 color);
    std::string getColor(colorLayer colorLayer, termColor8 color);

    std::string getColor(cl cl, termColor24 color);
    std::string getColor(cl colorLayer, termColor24 color);
    std::string getColor(colorLayer cl, termColor24 color);
    std::string getColor(colorLayer colorLayer, termColor24 color);
}