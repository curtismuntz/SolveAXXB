#ifndef TYPE_H
#define TYPE_H
#include <vector>
#include<Eigen/Core>
namespace axxb {

typedef Eigen::Matrix4d Pose;
typedef std::vector<Pose> Poses;
} // namespace axxb
#endif // TYPE_H
