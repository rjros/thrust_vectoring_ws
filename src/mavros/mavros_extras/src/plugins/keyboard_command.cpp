 //Example taken from https://docs.px4.io/main/en/ros/mavros_custom_messages.html
 //Test functionality for custom msgs 
 
 #include <mavros/mavros_plugin.h>
 #include <pluginlib/class_list_macros.h>
 #include <iostream>
 #include <std_msgs/Char.h>

 namespace mavros {
 namespace extra_plugins{

 class KeyboardCommandPlugin : public plugin::PluginBase {
 public:
     KeyboardCommandPlugin() : PluginBase(),
         nh("~keyboard_command")

  { };

     void initialize(UAS &uas_)
     {
         PluginBase::initialize(uas_);
         keyboard_sub = nh.subscribe("keyboard_sub", 10, &KeyboardCommandPlugin::keyboard_cb, this);
     };

     Subscriptions get_subscriptions()
     {
         return {/* RX disabled */ };
     }

 private:
     ros::NodeHandle nh;
     ros::Subscriber keyboard_sub;

    void keyboard_cb(const std_msgs::Char::ConstPtr &req)
     {
         std::cout << "Got Char : " << req->data <<  std::endl;
         mavlink::common::msg::KEY_COMMAND kc {};
         kc.command = req->data;
         UAS_FCU(m_uas)->send_message_ignore_drop(kc);
     }
 };
 }   // namespace extra_plugins
 }   // namespace mavros

PLUGINLIB_EXPORT_CLASS(mavros::extra_plugins::KeyboardCommandPlugin, mavros::plugin::PluginBase)