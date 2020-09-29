
#include "trip.h"

#include<string>
#include <iostream>
#include <list>
#include <iterator>

Trip::Trip():t_source(""),t_dest(""),t_distance(0){}

Trip::Trip(std::string src,std::string dst,int dist):t_source(src),t_dest(dst),t_distance(dist){}

std::string Trip:: getOrigin()
{
    return t_source;
}

std::string Trip::getDestination()
{
   return t_dest;
}

int Trip::getDistance()
{
    return t_distance;
}

   
