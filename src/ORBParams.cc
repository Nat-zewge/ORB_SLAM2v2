#include "ORBParams.h"

namespace ORB_SLAM2
{

ORBParams::ORBParams(){
    publish_tf = false;
    publish_odom = false;
    mapping = false;
    build_octomap = false;
}

ORBParams::ORBParams(bool p, bool o, bool m, bool b){
    publish_tf = p;
    publish_odom = o;
    mapping = m;
    build_octomap = b;
}

void ORBParams::setPublishTf(bool p){
    publish_tf = p;
}
void ORBParams::setPublishOdom(bool o){
    publish_odom = o;
}
void ORBParams::setMapping(bool m){
    mapping = m;
}
void ORBParams::setBuildOctomap(bool b){
    build_octomap = b;
}

bool ORBParams::getPublishTf(){
    return publish_tf;
}
bool ORBParams::getpublishOdom(){
    return publish_odom;
}

bool ORBParams::getMapping(){
    return mapping;
}
bool ORBParams::getBuildOctomap(){
    return build_octomap;
}

}
