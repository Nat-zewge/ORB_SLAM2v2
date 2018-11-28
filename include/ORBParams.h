#ifndef ORBPARAMS_H
#define ORBPARAMS_H

namespace ORB_SLAM2
{

class ORBParams
{
public:
    ORBParams();
    ORBParams(bool p, bool o, bool m, bool b);

    void setPublishTf(bool p);
    void setPublishOdom(bool o); 
    void setMapping(bool m);
    void setBuildOctomap(bool b);

    bool getPublishTf();
    bool getpublishOdom();
    bool getMapping();
    bool getBuildOctomap();

private:
    bool publish_tf;
    bool publish_odom;
    bool mapping;
    bool build_octomap;

};

}

#endif
