;; Auto-generated. Do not edit!


(when (boundp 'duckietown_msgs::AprilTags)
  (if (not (find-package "DUCKIETOWN_MSGS"))
    (make-package "DUCKIETOWN_MSGS"))
  (shadow 'AprilTags (find-package "DUCKIETOWN_MSGS")))
(unless (find-package "DUCKIETOWN_MSGS::APRILTAGS")
  (make-package "DUCKIETOWN_MSGS::APRILTAGS"))

(in-package "ROS")
;;//! \htmlinclude AprilTags.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass duckietown_msgs::AprilTags
  :super ros::object
  :slots (_header _detections _infos ))

(defmethod duckietown_msgs::AprilTags
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:detections __detections) (let (r) (dotimes (i 0) (push (instance duckietown_msgs::TagDetection :init) r)) r))
    ((:infos __infos) (let (r) (dotimes (i 0) (push (instance duckietown_msgs::TagInfo :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _detections __detections)
   (setq _infos __infos)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:detections
   (&rest __detections)
   (if (keywordp (car __detections))
       (send* _detections __detections)
     (progn
       (if __detections (setq _detections (car __detections)))
       _detections)))
  (:infos
   (&rest __infos)
   (if (keywordp (car __infos))
       (send* _infos __infos)
     (progn
       (if __infos (setq _infos (car __infos)))
       _infos)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; duckietown_msgs/TagDetection[] _detections
    (apply #'+ (send-all _detections :serialization-length)) 4
    ;; duckietown_msgs/TagInfo[] _infos
    (apply #'+ (send-all _infos :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; duckietown_msgs/TagDetection[] _detections
     (write-long (length _detections) s)
     (dolist (elem _detections)
       (send elem :serialize s)
       )
     ;; duckietown_msgs/TagInfo[] _infos
     (write-long (length _infos) s)
     (dolist (elem _infos)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; duckietown_msgs/TagDetection[] _detections
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _detections (let (r) (dotimes (i n) (push (instance duckietown_msgs::TagDetection :init) r)) r))
     (dolist (elem- _detections)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; duckietown_msgs/TagInfo[] _infos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _infos (let (r) (dotimes (i n) (push (instance duckietown_msgs::TagInfo :init) r)) r))
     (dolist (elem- _infos)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get duckietown_msgs::AprilTags :md5sum-) "7c108c3c8d01b0a8176c23ae1a8c54e2")
(setf (get duckietown_msgs::AprilTags :datatype-) "duckietown_msgs/AprilTags")
(setf (get duckietown_msgs::AprilTags :definition-)
      "Header header
duckietown_msgs/TagDetection[] detections
duckietown_msgs/TagInfo[] infos

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: duckietown_msgs/TagDetection
#Mirrors TagDetection.h in the apriltags pkg
bool good
int32 id
float32[] p
float32[] cxy
float32 observedPerimeter
float32[] homography
float32 orientation
float32[] hxy
geometry_msgs/Transform transform

================================================================================
MSG: geometry_msgs/Transform
# This represents the transform between two coordinate frames in free space.

Vector3 translation
Quaternion rotation

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: duckietown_msgs/TagInfo
Header header
int32 id

# (StreetName, TrafficSign, Localization, Vehicle…)
uint8 tag_type

uint8 S_NAME=0
uint8 SIGN=1	
uint8 LIGHT=2
uint8 LOCALIZE=3
uint8 VEHICLE=4

string street_name

uint8 traffic_sign_type
# (12 possible traffic sign types)

uint8 STOP=5
uint8 YIELD=6
uint8 NO_RIGHT_TURN=7
uint8 NO_LEFT_TURN=8
uint8 ONEWAY_RIGHT=9
uint8 ONEWAY_LEFT=10
uint8 FOUR_WAY=11
uint8 RIGHT_T_INTERSECT=12
uint8 LEFT_T_INTERSECT=13
uint8 T_INTERSECTION=14
uint8 DO_NOT_ENTER=15
uint8 PEDESTRIAN=16
uint8 T_LIGHT_AHEAD=17
uint8 DUCK_CROSSING=18

string vehicle_name

# Just added a single number for location. Probably want to use Vector2D.msg, but I get errors when I try to add it.
float32 location

")



(provide :duckietown_msgs/AprilTags "7c108c3c8d01b0a8176c23ae1a8c54e2")

