// Sub Expressions
const float HK0 = q0*vn;
const float HK1 = q3*ve;
const float HK2 = q2*vd;
const float HK3 = HK0 + HK1 - HK2;
const float HK4 = 2*HK3;
const float HK5 = q1*vn + q2*ve + q3*vd;
const float HK6 = 2*HK5;
const float HK7 = q1*ve;
const float HK8 = q0*vd;
const float HK9 = q2*vn;
const float HK10 = q0*ve;
const float HK11 = q1*vd;
const float HK12 = q3*vn;
const float HK13 = HK10 + HK11 - HK12;
const float HK14 = 2*HK13;
const float HK15 = powf(q1, 2);
const float HK16 = powf(q2, 2);
const float HK17 = -HK16;
const float HK18 = powf(q0, 2);
const float HK19 = powf(q3, 2);
const float HK20 = HK18 - HK19;
const float HK21 = HK15 + HK17 + HK20;
const float HK22 = q0*q3;
const float HK23 = q1*q2;
const float HK24 = HK22 + HK23;
const float HK25 = q1*q3;
const float HK26 = q0*q2;
const float HK27 = 2*HK24;
const float HK28 = -2*HK25 + 2*HK26;
const float HK29 = 2*HK5;
const float HK30 = 2*HK3;
const float HK31 = -HK7 + HK8 + HK9;
const float HK32 = 2*HK31;
const float HK33 = HK32*P(0,2);
const float HK34 = 2*HK13;
const float HK35 = HK34*P(0,3);
const float HK36 = HK21*P(0,4) + HK27*P(0,5) - HK28*P(0,6) + HK29*P(0,1) + HK30*P(0,0) - HK33 + HK35;
const float HK37 = HK21*P(4,5) + HK27*P(5,5) - HK28*P(5,6) + HK29*P(1,5) + HK30*P(0,5) - HK32*P(2,5) + HK34*P(3,5);
const float HK38 = HK21*P(4,6) + HK27*P(5,6) - HK28*P(6,6) + HK29*P(1,6) + HK30*P(0,6) - HK32*P(2,6) + HK34*P(3,6);
const float HK39 = HK32*P(1,2);
const float HK40 = HK34*P(1,3);
const float HK41 = HK21*P(1,4) + HK27*P(1,5) - HK28*P(1,6) + HK29*P(1,1) + HK30*P(0,1) - HK39 + HK40;
const float HK42 = HK29*P(1,2);
const float HK43 = HK30*P(0,2);
const float HK44 = HK21*P(2,4) + HK27*P(2,5) - HK28*P(2,6) - HK32*P(2,2) + HK34*P(2,3) + HK42 + HK43;
const float HK45 = HK29*P(1,3);
const float HK46 = HK30*P(0,3);
const float HK47 = HK21*P(3,4) + HK27*P(3,5) - HK28*P(3,6) - HK32*P(2,3) + HK34*P(3,3) + HK45 + HK46;
const float HK48 = HK21*P(4,4) + HK27*P(4,5) - HK28*P(4,6) + HK29*P(1,4) + HK30*P(0,4) - HK32*P(2,4) + HK34*P(3,4);
const float HK49 = 1.0F/(HK21*HK48 + HK27*HK37 - HK28*HK38 + HK29*HK41 + HK30*HK36 - HK32*HK44 + HK34*HK47 + R_VEL);
const float HK50 = 2*HK31;
const float HK51 = -HK15;
const float HK52 = HK16 + HK20 + HK51;
const float HK53 = q0*q1;
const float HK54 = q2*q3;
const float HK55 = HK53 + HK54;
const float HK56 = 2*HK55;
const float HK57 = 2*HK22 - 2*HK23;
const float HK58 = HK32*P(0,1);
const float HK59 = HK29*P(0,2) + HK34*P(0,0) - HK46 + HK52*P(0,5) + HK56*P(0,6) - HK57*P(0,4) + HK58;
const float HK60 = HK29*P(2,6) - HK30*P(3,6) + HK32*P(1,6) + HK34*P(0,6) + HK52*P(5,6) + HK56*P(6,6) - HK57*P(4,6);
const float HK61 = HK29*P(2,4) - HK30*P(3,4) + HK32*P(1,4) + HK34*P(0,4) + HK52*P(4,5) + HK56*P(4,6) - HK57*P(4,4);
const float HK62 = HK30*P(2,3);
const float HK63 = HK29*P(2,2) + HK34*P(0,2) + HK39 + HK52*P(2,5) + HK56*P(2,6) - HK57*P(2,4) - HK62;
const float HK64 = HK34*P(0,1);
const float HK65 = -HK30*P(1,3) + HK32*P(1,1) + HK42 + HK52*P(1,5) + HK56*P(1,6) - HK57*P(1,4) + HK64;
const float HK66 = HK29*P(2,3);
const float HK67 = -HK30*P(3,3) + HK32*P(1,3) + HK35 + HK52*P(3,5) + HK56*P(3,6) - HK57*P(3,4) + HK66;
const float HK68 = HK29*P(2,5) - HK30*P(3,5) + HK32*P(1,5) + HK34*P(0,5) + HK52*P(5,5) + HK56*P(5,6) - HK57*P(4,5);
const float HK69 = 1.0F/(HK29*HK63 - HK30*HK67 + HK32*HK65 + HK34*HK59 + HK52*HK68 + HK56*HK60 - HK57*HK61 + R_VEL);
const float HK70 = HK25 + HK26;
const float HK71 = HK17 + HK18 + HK19 + HK51;
const float HK72 = 2*HK70;
const float HK73 = 2*HK53 - 2*HK54;
const float HK74 = HK29*P(0,3) + HK32*P(0,0) + HK43 - HK64 + HK71*P(0,6) + HK72*P(0,4) - HK73*P(0,5);
const float HK75 = HK29*P(3,4) + HK30*P(2,4) + HK32*P(0,4) - HK34*P(1,4) + HK71*P(4,6) + HK72*P(4,4) - HK73*P(4,5);
const float HK76 = HK29*P(3,5) + HK30*P(2,5) + HK32*P(0,5) - HK34*P(1,5) + HK71*P(5,6) + HK72*P(4,5) - HK73*P(5,5);
const float HK77 = HK29*P(3,3) + HK32*P(0,3) - HK40 + HK62 + HK71*P(3,6) + HK72*P(3,4) - HK73*P(3,5);
const float HK78 = HK30*P(1,2) - HK34*P(1,1) + HK45 + HK58 + HK71*P(1,6) + HK72*P(1,4) - HK73*P(1,5);
const float HK79 = HK30*P(2,2) + HK33 - HK34*P(1,2) + HK66 + HK71*P(2,6) + HK72*P(2,4) - HK73*P(2,5);
const float HK80 = HK29*P(3,6) + HK30*P(2,6) + HK32*P(0,6) - HK34*P(1,6) + HK71*P(6,6) + HK72*P(4,6) - HK73*P(5,6);
const float HK81 = 1.0F/(HK29*HK77 + HK30*HK79 + HK32*HK74 - HK34*HK78 + HK71*HK80 + HK72*HK75 - HK73*HK76 + R_VEL);


// Observation Jacobians - axis 0
Hfusion[0] = HK4;
Hfusion[1] = HK6;
Hfusion[2] = 2*HK7 - 2*HK8 - 2*HK9;
Hfusion[3] = HK14;
Hfusion[4] = HK21;
Hfusion[5] = 2*HK24;
Hfusion[6] = 2*HK25 - 2*HK26;
Hfusion[7] = 0;
Hfusion[8] = 0;
Hfusion[9] = 0;
Hfusion[10] = 0;
Hfusion[11] = 0;
Hfusion[12] = 0;
Hfusion[13] = 0;
Hfusion[14] = 0;
Hfusion[15] = 0;
Hfusion[16] = 0;
Hfusion[17] = 0;
Hfusion[18] = 0;
Hfusion[19] = 0;
Hfusion[20] = 0;
Hfusion[21] = 0;
Hfusion[22] = 0;
Hfusion[23] = 0;


// Kalman gains - axis 0
Kfusion[0] = HK36*HK49;
Kfusion[1] = HK41*HK49;
Kfusion[2] = HK44*HK49;
Kfusion[3] = HK47*HK49;
Kfusion[4] = HK48*HK49;
Kfusion[5] = HK37*HK49;
Kfusion[6] = HK38*HK49;
Kfusion[7] = HK49*(HK21*P(4,7) + HK27*P(5,7) - HK28*P(6,7) + HK29*P(1,7) + HK30*P(0,7) - HK32*P(2,7) + HK34*P(3,7));
Kfusion[8] = HK49*(HK21*P(4,8) + HK27*P(5,8) - HK28*P(6,8) + HK29*P(1,8) + HK30*P(0,8) - HK32*P(2,8) + HK34*P(3,8));
Kfusion[9] = HK49*(HK21*P(4,9) + HK27*P(5,9) - HK28*P(6,9) + HK29*P(1,9) + HK30*P(0,9) - HK32*P(2,9) + HK34*P(3,9));
Kfusion[10] = HK49*(HK21*P(4,10) + HK27*P(5,10) - HK28*P(6,10) + HK29*P(1,10) + HK30*P(0,10) - HK32*P(2,10) + HK34*P(3,10));
Kfusion[11] = HK49*(HK21*P(4,11) + HK27*P(5,11) - HK28*P(6,11) + HK29*P(1,11) + HK30*P(0,11) - HK32*P(2,11) + HK34*P(3,11));
Kfusion[12] = HK49*(HK21*P(4,12) + HK27*P(5,12) - HK28*P(6,12) + HK29*P(1,12) + HK30*P(0,12) - HK32*P(2,12) + HK34*P(3,12));
Kfusion[13] = HK49*(HK21*P(4,13) + HK27*P(5,13) - HK28*P(6,13) + HK29*P(1,13) + HK30*P(0,13) - HK32*P(2,13) + HK34*P(3,13));
Kfusion[14] = HK49*(HK21*P(4,14) + HK27*P(5,14) - HK28*P(6,14) + HK29*P(1,14) + HK30*P(0,14) - HK32*P(2,14) + HK34*P(3,14));
Kfusion[15] = HK49*(HK21*P(4,15) + HK27*P(5,15) - HK28*P(6,15) + HK29*P(1,15) + HK30*P(0,15) - HK32*P(2,15) + HK34*P(3,15));
Kfusion[16] = HK49*(HK21*P(4,16) + HK27*P(5,16) - HK28*P(6,16) + HK29*P(1,16) + HK30*P(0,16) - HK32*P(2,16) + HK34*P(3,16));
Kfusion[17] = HK49*(HK21*P(4,17) + HK27*P(5,17) - HK28*P(6,17) + HK29*P(1,17) + HK30*P(0,17) - HK32*P(2,17) + HK34*P(3,17));
Kfusion[18] = HK49*(HK21*P(4,18) + HK27*P(5,18) - HK28*P(6,18) + HK29*P(1,18) + HK30*P(0,18) - HK32*P(2,18) + HK34*P(3,18));
Kfusion[19] = HK49*(HK21*P(4,19) + HK27*P(5,19) - HK28*P(6,19) + HK29*P(1,19) + HK30*P(0,19) - HK32*P(2,19) + HK34*P(3,19));
Kfusion[20] = HK49*(HK21*P(4,20) + HK27*P(5,20) - HK28*P(6,20) + HK29*P(1,20) + HK30*P(0,20) - HK32*P(2,20) + HK34*P(3,20));
Kfusion[21] = HK49*(HK21*P(4,21) + HK27*P(5,21) - HK28*P(6,21) + HK29*P(1,21) + HK30*P(0,21) - HK32*P(2,21) + HK34*P(3,21));
Kfusion[22] = HK49*(HK21*P(4,22) + HK27*P(5,22) - HK28*P(6,22) + HK29*P(1,22) + HK30*P(0,22) - HK32*P(2,22) + HK34*P(3,22));
Kfusion[23] = HK49*(HK21*P(4,23) + HK27*P(5,23) - HK28*P(6,23) + HK29*P(1,23) + HK30*P(0,23) - HK32*P(2,23) + HK34*P(3,23));


// Observation Jacobians - axis 1
Hfusion[0] = HK14;
Hfusion[1] = HK50;
Hfusion[2] = HK6;
Hfusion[3] = -2*HK0 - 2*HK1 + 2*HK2;
Hfusion[4] = -2*HK22 + 2*HK23;
Hfusion[5] = HK52;
Hfusion[6] = 2*HK55;
Hfusion[7] = 0;
Hfusion[8] = 0;
Hfusion[9] = 0;
Hfusion[10] = 0;
Hfusion[11] = 0;
Hfusion[12] = 0;
Hfusion[13] = 0;
Hfusion[14] = 0;
Hfusion[15] = 0;
Hfusion[16] = 0;
Hfusion[17] = 0;
Hfusion[18] = 0;
Hfusion[19] = 0;
Hfusion[20] = 0;
Hfusion[21] = 0;
Hfusion[22] = 0;
Hfusion[23] = 0;


// Kalman gains - axis 1
Kfusion[0] = HK59*HK69;
Kfusion[1] = HK65*HK69;
Kfusion[2] = HK63*HK69;
Kfusion[3] = HK67*HK69;
Kfusion[4] = HK61*HK69;
Kfusion[5] = HK68*HK69;
Kfusion[6] = HK60*HK69;
Kfusion[7] = HK69*(HK29*P(2,7) - HK30*P(3,7) + HK32*P(1,7) + HK34*P(0,7) + HK52*P(5,7) + HK56*P(6,7) - HK57*P(4,7));
Kfusion[8] = HK69*(HK29*P(2,8) - HK30*P(3,8) + HK32*P(1,8) + HK34*P(0,8) + HK52*P(5,8) + HK56*P(6,8) - HK57*P(4,8));
Kfusion[9] = HK69*(HK29*P(2,9) - HK30*P(3,9) + HK32*P(1,9) + HK34*P(0,9) + HK52*P(5,9) + HK56*P(6,9) - HK57*P(4,9));
Kfusion[10] = HK69*(HK29*P(2,10) - HK30*P(3,10) + HK32*P(1,10) + HK34*P(0,10) + HK52*P(5,10) + HK56*P(6,10) - HK57*P(4,10));
Kfusion[11] = HK69*(HK29*P(2,11) - HK30*P(3,11) + HK32*P(1,11) + HK34*P(0,11) + HK52*P(5,11) + HK56*P(6,11) - HK57*P(4,11));
Kfusion[12] = HK69*(HK29*P(2,12) - HK30*P(3,12) + HK32*P(1,12) + HK34*P(0,12) + HK52*P(5,12) + HK56*P(6,12) - HK57*P(4,12));
Kfusion[13] = HK69*(HK29*P(2,13) - HK30*P(3,13) + HK32*P(1,13) + HK34*P(0,13) + HK52*P(5,13) + HK56*P(6,13) - HK57*P(4,13));
Kfusion[14] = HK69*(HK29*P(2,14) - HK30*P(3,14) + HK32*P(1,14) + HK34*P(0,14) + HK52*P(5,14) + HK56*P(6,14) - HK57*P(4,14));
Kfusion[15] = HK69*(HK29*P(2,15) - HK30*P(3,15) + HK32*P(1,15) + HK34*P(0,15) + HK52*P(5,15) + HK56*P(6,15) - HK57*P(4,15));
Kfusion[16] = HK69*(HK29*P(2,16) - HK30*P(3,16) + HK32*P(1,16) + HK34*P(0,16) + HK52*P(5,16) + HK56*P(6,16) - HK57*P(4,16));
Kfusion[17] = HK69*(HK29*P(2,17) - HK30*P(3,17) + HK32*P(1,17) + HK34*P(0,17) + HK52*P(5,17) + HK56*P(6,17) - HK57*P(4,17));
Kfusion[18] = HK69*(HK29*P(2,18) - HK30*P(3,18) + HK32*P(1,18) + HK34*P(0,18) + HK52*P(5,18) + HK56*P(6,18) - HK57*P(4,18));
Kfusion[19] = HK69*(HK29*P(2,19) - HK30*P(3,19) + HK32*P(1,19) + HK34*P(0,19) + HK52*P(5,19) + HK56*P(6,19) - HK57*P(4,19));
Kfusion[20] = HK69*(HK29*P(2,20) - HK30*P(3,20) + HK32*P(1,20) + HK34*P(0,20) + HK52*P(5,20) + HK56*P(6,20) - HK57*P(4,20));
Kfusion[21] = HK69*(HK29*P(2,21) - HK30*P(3,21) + HK32*P(1,21) + HK34*P(0,21) + HK52*P(5,21) + HK56*P(6,21) - HK57*P(4,21));
Kfusion[22] = HK69*(HK29*P(2,22) - HK30*P(3,22) + HK32*P(1,22) + HK34*P(0,22) + HK52*P(5,22) + HK56*P(6,22) - HK57*P(4,22));
Kfusion[23] = HK69*(HK29*P(2,23) - HK30*P(3,23) + HK32*P(1,23) + HK34*P(0,23) + HK52*P(5,23) + HK56*P(6,23) - HK57*P(4,23));


// Observation Jacobians - axis 2
Hfusion[0] = HK50;
Hfusion[1] = -2*HK10 - 2*HK11 + 2*HK12;
Hfusion[2] = HK4;
Hfusion[3] = HK6;
Hfusion[4] = 2*HK70;
Hfusion[5] = -2*HK53 + 2*HK54;
Hfusion[6] = HK71;
Hfusion[7] = 0;
Hfusion[8] = 0;
Hfusion[9] = 0;
Hfusion[10] = 0;
Hfusion[11] = 0;
Hfusion[12] = 0;
Hfusion[13] = 0;
Hfusion[14] = 0;
Hfusion[15] = 0;
Hfusion[16] = 0;
Hfusion[17] = 0;
Hfusion[18] = 0;
Hfusion[19] = 0;
Hfusion[20] = 0;
Hfusion[21] = 0;
Hfusion[22] = 0;
Hfusion[23] = 0;


// Kalman gains - axis 2
Kfusion[0] = HK74*HK81;
Kfusion[1] = HK78*HK81;
Kfusion[2] = HK79*HK81;
Kfusion[3] = HK77*HK81;
Kfusion[4] = HK75*HK81;
Kfusion[5] = HK76*HK81;
Kfusion[6] = HK80*HK81;
Kfusion[7] = HK81*(HK29*P(3,7) + HK30*P(2,7) + HK32*P(0,7) - HK34*P(1,7) + HK71*P(6,7) + HK72*P(4,7) - HK73*P(5,7));
Kfusion[8] = HK81*(HK29*P(3,8) + HK30*P(2,8) + HK32*P(0,8) - HK34*P(1,8) + HK71*P(6,8) + HK72*P(4,8) - HK73*P(5,8));
Kfusion[9] = HK81*(HK29*P(3,9) + HK30*P(2,9) + HK32*P(0,9) - HK34*P(1,9) + HK71*P(6,9) + HK72*P(4,9) - HK73*P(5,9));
Kfusion[10] = HK81*(HK29*P(3,10) + HK30*P(2,10) + HK32*P(0,10) - HK34*P(1,10) + HK71*P(6,10) + HK72*P(4,10) - HK73*P(5,10));
Kfusion[11] = HK81*(HK29*P(3,11) + HK30*P(2,11) + HK32*P(0,11) - HK34*P(1,11) + HK71*P(6,11) + HK72*P(4,11) - HK73*P(5,11));
Kfusion[12] = HK81*(HK29*P(3,12) + HK30*P(2,12) + HK32*P(0,12) - HK34*P(1,12) + HK71*P(6,12) + HK72*P(4,12) - HK73*P(5,12));
Kfusion[13] = HK81*(HK29*P(3,13) + HK30*P(2,13) + HK32*P(0,13) - HK34*P(1,13) + HK71*P(6,13) + HK72*P(4,13) - HK73*P(5,13));
Kfusion[14] = HK81*(HK29*P(3,14) + HK30*P(2,14) + HK32*P(0,14) - HK34*P(1,14) + HK71*P(6,14) + HK72*P(4,14) - HK73*P(5,14));
Kfusion[15] = HK81*(HK29*P(3,15) + HK30*P(2,15) + HK32*P(0,15) - HK34*P(1,15) + HK71*P(6,15) + HK72*P(4,15) - HK73*P(5,15));
Kfusion[16] = HK81*(HK29*P(3,16) + HK30*P(2,16) + HK32*P(0,16) - HK34*P(1,16) + HK71*P(6,16) + HK72*P(4,16) - HK73*P(5,16));
Kfusion[17] = HK81*(HK29*P(3,17) + HK30*P(2,17) + HK32*P(0,17) - HK34*P(1,17) + HK71*P(6,17) + HK72*P(4,17) - HK73*P(5,17));
Kfusion[18] = HK81*(HK29*P(3,18) + HK30*P(2,18) + HK32*P(0,18) - HK34*P(1,18) + HK71*P(6,18) + HK72*P(4,18) - HK73*P(5,18));
Kfusion[19] = HK81*(HK29*P(3,19) + HK30*P(2,19) + HK32*P(0,19) - HK34*P(1,19) + HK71*P(6,19) + HK72*P(4,19) - HK73*P(5,19));
Kfusion[20] = HK81*(HK29*P(3,20) + HK30*P(2,20) + HK32*P(0,20) - HK34*P(1,20) + HK71*P(6,20) + HK72*P(4,20) - HK73*P(5,20));
Kfusion[21] = HK81*(HK29*P(3,21) + HK30*P(2,21) + HK32*P(0,21) - HK34*P(1,21) + HK71*P(6,21) + HK72*P(4,21) - HK73*P(5,21));
Kfusion[22] = HK81*(HK29*P(3,22) + HK30*P(2,22) + HK32*P(0,22) - HK34*P(1,22) + HK71*P(6,22) + HK72*P(4,22) - HK73*P(5,22));
Kfusion[23] = HK81*(HK29*P(3,23) + HK30*P(2,23) + HK32*P(0,23) - HK34*P(1,23) + HK71*P(6,23) + HK72*P(4,23) - HK73*P(5,23));


