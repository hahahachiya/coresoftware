#include "RawTowerGeomv3.h"

#include <cmath>
#include <iostream>

RawTowerGeomv3::RawTowerGeomv3(RawTowerDefs::keytype id)
  : _towerid(id)
{}

double RawTowerGeomv3::get_center_radius() const
{
  return std::sqrt(_center_x * _center_x +
              _center_y * _center_y);
}

double RawTowerGeomv3::get_theta() const
{
  double radius = sqrt(_center_x * _center_x + _center_y * _center_y);
  double theta = atan2(radius, _center_z);
  return theta;
}

double RawTowerGeomv3::get_eta() const
{
  double theta = get_theta();
  double eta = -log(tan(theta / 2.));
  return eta;
}

double RawTowerGeomv3::get_phi() const
{
  return atan2(_center_y, _center_x);
}

void RawTowerGeomv3::identify(std::ostream& os) const
{
  os << "RawTowerGeomv3:  x: " << get_center_x() << "  y: " << get_center_y() << "  z: " << get_center_z()
     << "\n           dx: " << get_size_x() << " dy: " << get_size_y() << " dz: " << get_size_z()
     << "\n           tower_type = " << _tower_type << std::endl;
}
