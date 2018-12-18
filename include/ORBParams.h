#ifndef ORBPARAMS_H
#define ORBPARAMS_H

namespace ORB_SLAM2
{

class ORBParams
{
public:
    ORBParams();
    ORBParams(bool p, bool m, bool b);
    ORBParams(bool p, bool m, bool b, char* bpath, char* opath, char* ppath);
    ORBParams(bool p, bool o, bool m, bool b);

    void setPublishTf(bool p);
    void setPublishOdom(bool o); 
    void setMapping(bool m);
    void setBuildOctomap(bool b);
    void setMapBinaryPath(const char* m);
    void setMapOctomapPath(const char* m);
    void setMapWorkingPath(const char* m);
    void setMapPCLPath(const char* m);

    bool getPublishTf();
    bool getpublishOdom();
    bool getMapping();
    bool getBuildOctomap();
    const char* getMapBinaryPath();
    const char* getMapOctomapPath();
    const char* getMapWorkingPath();
    const char* getMapPCLPath();

private:
    bool publish_tf;
    bool publish_odom;
    bool mapping;
    bool build_octomap;
    const char* mapBinaryPath;
    const char* mapOctomapPath;
    const char* mapWorkingPath;
    const char* mapPCLPath;
};

}

#endif
