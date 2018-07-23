//#line 2 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
//
// File autogenerated for the costmap_converter package
// by the dynamic_reconfigure package.
// Please do not edit.
//
// ********************************************************/

#ifndef __costmap_converter__COSTMAPTOLINESDBSMCCHCONFIG_H__
#define __costmap_converter__COSTMAPTOLINESDBSMCCHCONFIG_H__

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace costmap_converter
{
  class CostmapToLinesDBSMCCHConfigStatics;

  class CostmapToLinesDBSMCCHConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l,
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }

      virtual void clamp(CostmapToLinesDBSMCCHConfig &config, const CostmapToLinesDBSMCCHConfig &max, const CostmapToLinesDBSMCCHConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const CostmapToLinesDBSMCCHConfig &config1, const CostmapToLinesDBSMCCHConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, CostmapToLinesDBSMCCHConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const CostmapToLinesDBSMCCHConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, CostmapToLinesDBSMCCHConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const CostmapToLinesDBSMCCHConfig &config) const = 0;
      virtual void getValue(const CostmapToLinesDBSMCCHConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;

    template <class T>
    class ParamDescription : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string a_name, std::string a_type, uint32_t a_level,
          std::string a_description, std::string a_edit_method, T CostmapToLinesDBSMCCHConfig::* a_f) :
        AbstractParamDescription(a_name, a_type, a_level, a_description, a_edit_method),
        field(a_f)
      {}

      T (CostmapToLinesDBSMCCHConfig::* field);

      virtual void clamp(CostmapToLinesDBSMCCHConfig &config, const CostmapToLinesDBSMCCHConfig &max, const CostmapToLinesDBSMCCHConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;

        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const CostmapToLinesDBSMCCHConfig &config1, const CostmapToLinesDBSMCCHConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, CostmapToLinesDBSMCCHConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const CostmapToLinesDBSMCCHConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, CostmapToLinesDBSMCCHConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const CostmapToLinesDBSMCCHConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const CostmapToLinesDBSMCCHConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, CostmapToLinesDBSMCCHConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    template<class T, class PT>
    class GroupDescription : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string a_name, std::string a_type, int a_parent, int a_id, bool a_s, T PT::* a_f) : AbstractGroupDescription(a_name, a_type, a_parent, a_id, a_s), field(a_f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, CostmapToLinesDBSMCCHConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T (PT::* field);
      std::vector<CostmapToLinesDBSMCCHConfig::AbstractGroupDescriptionConstPtr> groups;
    };

class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(CostmapToLinesDBSMCCHConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("cluster_max_distance"==(*_i)->name){cluster_max_distance = boost::any_cast<double>(val);}
        if("cluster_min_pts"==(*_i)->name){cluster_min_pts = boost::any_cast<int>(val);}
        if("cluster_max_pts"==(*_i)->name){cluster_max_pts = boost::any_cast<int>(val);}
        if("convex_hull_min_pt_separation"==(*_i)->name){convex_hull_min_pt_separation = boost::any_cast<double>(val);}
        if("support_pts_max_dist"==(*_i)->name){support_pts_max_dist = boost::any_cast<double>(val);}
        if("support_pts_max_dist_inbetween"==(*_i)->name){support_pts_max_dist_inbetween = boost::any_cast<double>(val);}
        if("min_support_pts"==(*_i)->name){min_support_pts = boost::any_cast<int>(val);}
      }
    }

    double cluster_max_distance;
int cluster_min_pts;
int cluster_max_pts;
double convex_hull_min_pt_separation;
double support_pts_max_dist;
double support_pts_max_dist_inbetween;
int min_support_pts;

    bool state;
    std::string name;

    
}groups;



//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double cluster_max_distance;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int cluster_min_pts;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int cluster_max_pts;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double convex_hull_min_pt_separation;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double support_pts_max_dist;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double support_pts_max_dist_inbetween;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int min_support_pts;
//#line 218 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("CostmapToLinesDBSMCCHConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }

    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }

    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const CostmapToLinesDBSMCCHConfig &__max__ = __getMax__();
      const CostmapToLinesDBSMCCHConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const CostmapToLinesDBSMCCHConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }

    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const CostmapToLinesDBSMCCHConfig &__getDefault__();
    static const CostmapToLinesDBSMCCHConfig &__getMax__();
    static const CostmapToLinesDBSMCCHConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();

  private:
    static const CostmapToLinesDBSMCCHConfigStatics *__get_statics__();
  };

  template <> // Max and min are ignored for strings.
  inline void CostmapToLinesDBSMCCHConfig::ParamDescription<std::string>::clamp(CostmapToLinesDBSMCCHConfig &config, const CostmapToLinesDBSMCCHConfig &max, const CostmapToLinesDBSMCCHConfig &min) const
  {
    (void) config;
    (void) min;
    (void) max;
    return;
  }

  class CostmapToLinesDBSMCCHConfigStatics
  {
    friend class CostmapToLinesDBSMCCHConfig;

    CostmapToLinesDBSMCCHConfigStatics()
    {
CostmapToLinesDBSMCCHConfig::GroupDescription<CostmapToLinesDBSMCCHConfig::DEFAULT, CostmapToLinesDBSMCCHConfig> Default("Default", "", 0, 0, true, &CostmapToLinesDBSMCCHConfig::groups);
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.cluster_max_distance = 0.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.cluster_max_distance = 10.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.cluster_max_distance = 0.4;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("cluster_max_distance", "double", 0, "Parameter for DB_Scan, maximum distance to neighbors [m]", "", &CostmapToLinesDBSMCCHConfig::cluster_max_distance)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("cluster_max_distance", "double", 0, "Parameter for DB_Scan, maximum distance to neighbors [m]", "", &CostmapToLinesDBSMCCHConfig::cluster_max_distance)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.cluster_min_pts = 1;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.cluster_min_pts = 20;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.cluster_min_pts = 2;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<int>("cluster_min_pts", "int", 0, "Parameter for DB_Scan: minimum number of points that define a cluster", "", &CostmapToLinesDBSMCCHConfig::cluster_min_pts)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<int>("cluster_min_pts", "int", 0, "Parameter for DB_Scan: minimum number of points that define a cluster", "", &CostmapToLinesDBSMCCHConfig::cluster_min_pts)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.cluster_max_pts = 2;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.cluster_max_pts = 200;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.cluster_max_pts = 30;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<int>("cluster_max_pts", "int", 0, "Parameter for DB_Scan: maximum number of points that define a cluster (limit cluster size to avoid large L- and U-shapes)", "", &CostmapToLinesDBSMCCHConfig::cluster_max_pts)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<int>("cluster_max_pts", "int", 0, "Parameter for DB_Scan: maximum number of points that define a cluster (limit cluster size to avoid large L- and U-shapes)", "", &CostmapToLinesDBSMCCHConfig::cluster_max_pts)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.convex_hull_min_pt_separation = 0.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.convex_hull_min_pt_separation = 10.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.convex_hull_min_pt_separation = 0.1;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("convex_hull_min_pt_separation", "double", 0, "Clear keypoints of the convex polygon that are close to each other [distance in meters] (0: keep all)", "", &CostmapToLinesDBSMCCHConfig::convex_hull_min_pt_separation)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("convex_hull_min_pt_separation", "double", 0, "Clear keypoints of the convex polygon that are close to each other [distance in meters] (0: keep all)", "", &CostmapToLinesDBSMCCHConfig::convex_hull_min_pt_separation)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.support_pts_max_dist = 0.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.support_pts_max_dist = 10.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.support_pts_max_dist = 0.3;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("support_pts_max_dist", "double", 0, "Minimum distance from a point to the line to be counted as support point", "", &CostmapToLinesDBSMCCHConfig::support_pts_max_dist)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("support_pts_max_dist", "double", 0, "Minimum distance from a point to the line to be counted as support point", "", &CostmapToLinesDBSMCCHConfig::support_pts_max_dist)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.support_pts_max_dist_inbetween = 0.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.support_pts_max_dist_inbetween = 10.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.support_pts_max_dist_inbetween = 1.0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("support_pts_max_dist_inbetween", "double", 0, "A line is only defined, if the distance between two consecutive support points is less than this treshold. Set to 0 in order to deactivate this check.", "", &CostmapToLinesDBSMCCHConfig::support_pts_max_dist_inbetween)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<double>("support_pts_max_dist_inbetween", "double", 0, "A line is only defined, if the distance between two consecutive support points is less than this treshold. Set to 0 in order to deactivate this check.", "", &CostmapToLinesDBSMCCHConfig::support_pts_max_dist_inbetween)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.min_support_pts = 0;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.min_support_pts = 50;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.min_support_pts = 2;
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<int>("min_support_pts", "int", 0, "Minimum number of support points to represent a line", "", &CostmapToLinesDBSMCCHConfig::min_support_pts)));
//#line 292 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::ParamDescription<int>("min_support_pts", "int", 0, "Minimum number of support points to represent a line", "", &CostmapToLinesDBSMCCHConfig::min_support_pts)));
//#line 245 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 245 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(CostmapToLinesDBSMCCHConfig::AbstractGroupDescriptionConstPtr(new CostmapToLinesDBSMCCHConfig::GroupDescription<CostmapToLinesDBSMCCHConfig::DEFAULT, CostmapToLinesDBSMCCHConfig>(Default)));
//#line 356 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<CostmapToLinesDBSMCCHConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__);
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__);
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__);
    }
    std::vector<CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<CostmapToLinesDBSMCCHConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    CostmapToLinesDBSMCCHConfig __max__;
    CostmapToLinesDBSMCCHConfig __min__;
    CostmapToLinesDBSMCCHConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const CostmapToLinesDBSMCCHConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static CostmapToLinesDBSMCCHConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &CostmapToLinesDBSMCCHConfig::__getDescriptionMessage__()
  {
    return __get_statics__()->__description_message__;
  }

  inline const CostmapToLinesDBSMCCHConfig &CostmapToLinesDBSMCCHConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }

  inline const CostmapToLinesDBSMCCHConfig &CostmapToLinesDBSMCCHConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }

  inline const CostmapToLinesDBSMCCHConfig &CostmapToLinesDBSMCCHConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }

  inline const std::vector<CostmapToLinesDBSMCCHConfig::AbstractParamDescriptionConstPtr> &CostmapToLinesDBSMCCHConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<CostmapToLinesDBSMCCHConfig::AbstractGroupDescriptionConstPtr> &CostmapToLinesDBSMCCHConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const CostmapToLinesDBSMCCHConfigStatics *CostmapToLinesDBSMCCHConfig::__get_statics__()
  {
    const static CostmapToLinesDBSMCCHConfigStatics *statics;

    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = CostmapToLinesDBSMCCHConfigStatics::get_instance();

    return statics;
  }


}

#endif // __COSTMAPTOLINESDBSMCCHRECONFIGURATOR_H__
