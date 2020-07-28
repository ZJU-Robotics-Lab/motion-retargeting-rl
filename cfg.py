import numpy as np
from math import pi
YUMI_KINEMATIC_TREE = {
    "yumi_body":["yumi_link_1_r","yumi_link_1_l"],
    "yumi_link_1_r":["yumi_link_2_r"],
    "yumi_link_2_r":["yumi_link_3_r"],
    "yumi_link_3_r":["yumi_link_4_r"],
    "yumi_link_4_r":["yumi_link_5_r"],
    "yumi_link_5_r":["yumi_link_6_r"],
    "yumi_link_6_r":["yumi_link_7_r"],
    "yumi_link_7_r":[],
    "yumi_link_1_l":["yumi_link_2_l"],
    "yumi_link_2_l":["yumi_link_3_l"],
    "yumi_link_3_l":["yumi_link_4_l"],
    "yumi_link_4_l":["yumi_link_5_l"],
    "yumi_link_5_l":["yumi_link_6_l"],
    "yumi_link_6_l":["yumi_link_7_l"],
    "yumi_link_7_l":[],
}
YUMI_NAME2IND = {
    "yumi_body":0,
    "yumi_link_1_r":1,
    "yumi_link_2_r":2,
    "yumi_link_3_r":3,
    "yumi_link_4_r":4,
    "yumi_link_5_r":5,
    "yumi_link_6_r":6,
    "yumi_link_7_r":7,
    "yumi_link_1_l":8,
    "yumi_link_2_l":9,
    "yumi_link_3_l":10,
    "yumi_link_4_l":11,
    "yumi_link_5_l":12,
    "yumi_link_6_l":13,
    "yumi_link_7_l":14,
}
YUMI_TRANSLATIONS = \
        np.array([
            [0.05355, -0.0725, 0.51492],
            [0.03, 0.0, 0.1],
            [-0.03, 0.17283, 0.0],
            [-0.04188, 0.0, 0.07873],
            [0.0405, 0.16461, 0.0],
            [-0.027, 0, 0.10039],
            [0.027, 0.029, 0.0],
            [0.05355, 0.0725, 0.51492],
            [0.03, 0.0, 0.1],
            [-0.03, 0.17283, 0.0],
            [-0.04188, 0.0, 0.07873],
            [0.0405, 0.16461, 0.0],
            [-0.027, 0, 0.10039],
            [0.027, 0.029, 0.0]
        ])
YUMI_ROTATIONS = \
        np.array([
            [-0.9795,  -0.5682,   -2.3155],
            [1.57079632679, 0, 0],
            [-1.57079632679, 0, 0],
            [1.57079632679, -1.57079632679, 0],
            [-1.57079632679, 0, 0],
            [1.57079632679, 0, 0],
            [-1.57079632679, 0, 0],
            [0.9781, -0.5716, 2.3180],
            [1.57079632679, 0.0, 0.0],
            [-1.57079632679, 0.0, 0.0],
            [1.57079632679, -1.57079632679, 0],
            [-1.57079632679, 0, 0],
            [1.57079632679, 0, 0],
            [-1.57079632679, 0, 0]
        ])
YUMI_LOWER_LIMITS = \
        np.array([
            -2.94087978961,
            -2.50454747661,
            -2.94087978961,
            -2.15548162621,
            -5.06145483078,
            -1.53588974176,
            -3.99680398707,
            -2.94087978961,
            -2.50454747661,
            -2.94087978961,
            -2.15548162621,
            -5.06145483078,
            -1.53588974176,
            -3.99680398707
        ])
YUMI_UPPER_LIMITS = \
    np.array([
        2.94087978961,
        0.759218224618,
        2.94087978961,
        1.3962634016,
        5.06145483078,
        2.40855436775,
        3.99680398707,
        2.94087978961,
        0.759218224618,
        2.94087978961,
        1.3962634016,
        5.06145483078,
        2.40855436775,
        3.99680398707
    ])
YUMI_INITIAL_STATE = \
    np.array([
        -0.71,
        0.0,
        0.0,
        0.0,
        0.0,
        0.0,
        0.0,
        0.71,
        0.0,
        0.0,
        0.0,
        0.0,
        0.0,
        0.0
    ])
YUMI_NAMES = [
    "yumi_link_1_r",
    "yumi_link_2_r",
    "yumi_link_3_r",
    "yumi_link_4_r",
    "yumi_link_5_r",
    "yumi_link_6_r",
    "yumi_link_7_r"
]
YUMI_ROOT = "yumi_body"
YUMI_SHOULDER_R_NAME = "yumi_link_1_r"
YUMI_ELBOW_R_NAME = "yumi_link_4_r"
YUMI_WRIST_R_NAME = "yumi_link_7_r"
YUMI_SHOULDER_L_NAME = "yumi_link_1_l"
YUMI_ELBOW_L_NAME = "yumi_link_4_l"
YUMI_WRIST_L_NAME = "yumi_link_7_l"
ROBOTHAND_LB = np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.3, 0.4, 0.0, 0.0])
ROBOTHAND_UB = np.array([-1.6, -1.7, -1.6, -1.7, -1.6, -1.7, -1.6, -1.7, -1.0, 0.0, -0.4, -1.0])
WISEGLOVE_LB = np.array([0, 0, 53, 0, 0, 22, 0, 0, 22, 0, 0, 35, 0, 0])
WISEGLOVE_UB = np.array([45, 100, 0, 90, 120, 0, 90, 120, 0, 90, 120, 0, 90, 120])

Ipose_l_joints = np.array([-2.05,-1.85,1.94,-1.27,0.0,0.0,0.0])
Ipose_r_joints = np.array([2.05,-1.85,-1.94,-1.27,0.0,0.0,0.0])
Ipose_l_elbow = np.array([0.206464,0.148785,0.290244])
Ipose_l_wrist = np.array([0.246487,0.171258,-0.00296106])
Ipose_r_elbow = np.array([0.20692,-0.1477777,0.290215])
Ipose_r_wrist = np.array([0.247404,-0.169213,-0.00300447])

Apose_l_joints = np.array([-1.56,-1.53,1.94,-1.27,0.0,0.0,0.0])
Apose_r_joints = np.array([1.56,-1.53,-1.94,-1.27,0.0,0.0,0.0])
Apose_l_elbow = np.array([0.205456,0.292343,0.358094])
Apose_l_wrist = np.array([0.255764,0.472745,0.128785])
Apose_r_elbow = np.array([0.206066,-0.29156,0.35759])
Apose_r_wrist = np.array([0.25702,-0.471113,0.126851])

Tpose_l_joints = np.array([-0.91,-1.17,1.94,-1.27,0.0,0.0,0.0])
Tpose_r_joints = np.array([0.91,-1.17,-1.94,-1.27,0.0,0.0,0.0])
Tpose_l_elbow = np.array([0.177539,0.382939,0.525092])
Tpose_l_wrist = np.array([0.206616,0.673498,0.472118])
Tpose_r_elbow = np.array([0.178067,-0.382754,0.524248])
Tpose_r_wrist = np.array([0.207727,-0.673086,0.470359])

Opose_l_joints = np.array([-1.56,-1.35,1.76,0.0,0.0,0.0,1.57])
Opose_r_joints = np.array([1.56,-1.35,-1.76,0.0,0.0,0.0,-1.57])
Opose_l_elbow = np.array([0.247594,0.301456,0.388183])
Opose_l_wrist = np.array([0.381355,0.147038,0.172918])
Opose_r_elbow = np.array([0.248176,-0.300699,0.38771])
Opose_r_wrist = np.array([0.381977,-0.145338,0.173148])