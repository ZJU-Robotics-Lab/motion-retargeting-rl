# Test forward kinematics
- source devel/setup.bash
- rosrun kdl_fk_solver TEST_KDL_FK_Solver 

# Test trajectory execute
- source devel/setup.bash
- roslaunch yumi_sign_language_robot_moveit_config demo1.launch
- python yumi_dual_arm_exexute.py

# Reinforcement  learning
- source devel/setup.bash
- rosrun yumi_collision_checking yumi_api_server      # Start the yumi api service
- python reinforce_learning.py
