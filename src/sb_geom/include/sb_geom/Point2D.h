#ifndef SB_GEOM_POINT2D_H
#define SB_GEOM_POINT2D_H

#include "sb_geom_msgs/Point2D.h"

namespace sb_geom {

    class Point2D{
    public:
        /**
         * Construct a Point2D at 0,0
         */
        Point2D():
                _x(0),
                _y(0)
        {};

        /**
         * Construct a Point2D with given x and y values
         * @param x
         * @param y
         */
        Point2D(double x, double y):
                _x(x),
                _y(y)
        {};

        /**
         * Construct a Point2D from a Point2D msg
         * @param point_msg
         */
        Point2D(sb_geom_msgs::Point2D point_msg):
                _x(point_msg.x),
                _y(point_msg.y)
        {};

        /**
         * Get the x coordinate of this point
         * @return a reference to the x coordinate of this point
         */
        double& x() { return _x; }

        /**
         * Get the y coordinate of this point
         * @return a reference to the y coordinate of this point
         */
        double& y() { return _y; }

    private:
        // The x and y coordinates of this point
        double _x, _y;
    };

}

#endif //SB_GEOM_POINT2D_H
