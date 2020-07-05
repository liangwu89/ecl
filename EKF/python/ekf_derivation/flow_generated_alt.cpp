// Sub Expressions
const float HK0 = -Tbs(1,0)*q2 + Tbs(1,1)*q1 + Tbs(1,2)*q0;
const float HK1 = Tbs(1,0)*q3 + Tbs(1,1)*q0 - Tbs(1,2)*q1;
const float HK2 = Tbs(1,0)*q0 - Tbs(1,1)*q3 + Tbs(1,2)*q2;
const float HK3 = HK0*vd + HK1*ve + HK2*vn;
const float HK4 = 1.0F/range;
const float HK5 = 2*HK4;
const float HK6 = Tbs(1,0)*q1 + Tbs(1,1)*q2 + Tbs(1,2)*q3;
const float HK7 = -HK0*ve + HK1*vd + HK6*vn;
const float HK8 = HK0*vn - HK2*vd + HK6*ve;
const float HK9 = -HK1*vn + HK2*ve + HK6*vd;
const float HK10 = q0*q2;
const float HK11 = q1*q3;
const float HK12 = HK10 + HK11;
const float HK13 = 2*Tbs(1,2);
const float HK14 = q0*q3;
const float HK15 = q1*q2;
const float HK16 = HK14 - HK15;
const float HK17 = 2*Tbs(1,1);
const float HK18 = powf(q1, 2);
const float HK19 = powf(q2, 2);
const float HK20 = -HK19;
const float HK21 = powf(q0, 2);
const float HK22 = powf(q3, 2);
const float HK23 = HK21 - HK22;
const float HK24 = HK18 + HK20 + HK23;
const float HK25 = HK12*HK13 - HK16*HK17 + HK24*Tbs(1,0);
const float HK26 = HK14 + HK15;
const float HK27 = 2*Tbs(1,0);
const float HK28 = q0*q1;
const float HK29 = q2*q3;
const float HK30 = HK28 - HK29;
const float HK31 = -HK18;
const float HK32 = HK19 + HK23 + HK31;
const float HK33 = -HK13*HK30 + HK26*HK27 + HK32*Tbs(1,1);
const float HK34 = HK28 + HK29;
const float HK35 = HK10 - HK11;
const float HK36 = HK20 + HK21 + HK22 + HK31;
const float HK37 = HK17*HK34 - HK27*HK35 + HK36*Tbs(1,2);
const float HK38 = 2*HK3;
const float HK39 = 2*HK7;
const float HK40 = 2*HK8;
const float HK41 = 2*HK9;
const float HK42 = HK25*P(0,4) + HK33*P(0,5) + HK37*P(0,6) + HK38*P(0,0) + HK39*P(0,1) + HK40*P(0,2) + HK41*P(0,3);
const float HK43 = powf(range, -2);
const float HK44 = HK25*P(4,6) + HK33*P(5,6) + HK37*P(6,6) + HK38*P(0,6) + HK39*P(1,6) + HK40*P(2,6) + HK41*P(3,6);
const float HK45 = HK25*P(4,5) + HK33*P(5,5) + HK37*P(5,6) + HK38*P(0,5) + HK39*P(1,5) + HK40*P(2,5) + HK41*P(3,5);
const float HK46 = HK25*P(4,4) + HK33*P(4,5) + HK37*P(4,6) + HK38*P(0,4) + HK39*P(1,4) + HK40*P(2,4) + HK41*P(3,4);
const float HK47 = HK25*P(2,4) + HK33*P(2,5) + HK37*P(2,6) + HK38*P(0,2) + HK39*P(1,2) + HK40*P(2,2) + HK41*P(2,3);
const float HK48 = HK25*P(3,4) + HK33*P(3,5) + HK37*P(3,6) + HK38*P(0,3) + HK39*P(1,3) + HK40*P(2,3) + HK41*P(3,3);
const float HK49 = HK25*P(1,4) + HK33*P(1,5) + HK37*P(1,6) + HK38*P(0,1) + HK39*P(1,1) + HK40*P(1,2) + HK41*P(1,3);
const float HK50 = HK4/(HK25*HK43*HK46 + HK33*HK43*HK45 + HK37*HK43*HK44 + HK38*HK42*HK43 + HK39*HK43*HK49 + HK40*HK43*HK47 + HK41*HK43*HK48 + R_LOS);
const float HK51 = Tbs(0,1)*q1;
const float HK52 = Tbs(0,2)*q0;
const float HK53 = Tbs(0,0)*q2;
const float HK54 = HK51 + HK52 - HK53;
const float HK55 = Tbs(0,0)*q3;
const float HK56 = Tbs(0,1)*q0;
const float HK57 = Tbs(0,2)*q1;
const float HK58 = HK55 + HK56 - HK57;
const float HK59 = Tbs(0,0)*q0;
const float HK60 = Tbs(0,2)*q2;
const float HK61 = Tbs(0,1)*q3;
const float HK62 = HK59 + HK60 - HK61;
const float HK63 = HK54*vd + HK58*ve + HK62*vn;
const float HK64 = Tbs(0,0)*q1 + Tbs(0,1)*q2 + Tbs(0,2)*q3;
const float HK65 = HK58*vd + HK64*vn;
const float HK66 = -HK54*ve + HK65;
const float HK67 = HK54*vn + HK64*ve;
const float HK68 = -HK62*vd + HK67;
const float HK69 = HK62*ve + HK64*vd;
const float HK70 = -HK58*vn + HK69;
const float HK71 = 2*Tbs(0,1);
const float HK72 = 2*Tbs(0,2);
const float HK73 = HK12*HK72 + HK24*Tbs(0,0);
const float HK74 = -HK16*HK71 + HK73;
const float HK75 = 2*Tbs(0,0);
const float HK76 = HK26*HK75 + HK32*Tbs(0,1);
const float HK77 = -HK30*HK72 + HK76;
const float HK78 = HK34*HK71 + HK36*Tbs(0,2);
const float HK79 = -HK35*HK75 + HK78;
const float HK80 = 2*HK63;
const float HK81 = 2*HK65 + 2*ve*(-HK51 - HK52 + HK53);
const float HK82 = 2*HK67 + 2*vd*(-HK59 - HK60 + HK61);
const float HK83 = 2*HK69 + 2*vn*(-HK55 - HK56 + HK57);
const float HK84 = HK71*(-HK14 + HK15) + HK73;
const float HK85 = HK72*(-HK28 + HK29) + HK76;
const float HK86 = HK75*(-HK10 + HK11) + HK78;
const float HK87 = HK80*P(0,0) + HK81*P(0,1) + HK82*P(0,2) + HK83*P(0,3) + HK84*P(0,4) + HK85*P(0,5) + HK86*P(0,6);
const float HK88 = HK80*P(0,6) + HK81*P(1,6) + HK82*P(2,6) + HK83*P(3,6) + HK84*P(4,6) + HK85*P(5,6) + HK86*P(6,6);
const float HK89 = HK80*P(0,5) + HK81*P(1,5) + HK82*P(2,5) + HK83*P(3,5) + HK84*P(4,5) + HK85*P(5,5) + HK86*P(5,6);
const float HK90 = HK80*P(0,4) + HK81*P(1,4) + HK82*P(2,4) + HK83*P(3,4) + HK84*P(4,4) + HK85*P(4,5) + HK86*P(4,6);
const float HK91 = HK80*P(0,2) + HK81*P(1,2) + HK82*P(2,2) + HK83*P(2,3) + HK84*P(2,4) + HK85*P(2,5) + HK86*P(2,6);
const float HK92 = 2*HK43;
const float HK93 = HK80*P(0,3) + HK81*P(1,3) + HK82*P(2,3) + HK83*P(3,3) + HK84*P(3,4) + HK85*P(3,5) + HK86*P(3,6);
const float HK94 = HK80*P(0,1) + HK81*P(1,1) + HK82*P(1,2) + HK83*P(1,3) + HK84*P(1,4) + HK85*P(1,5) + HK86*P(1,6);
const float HK95 = HK4/(HK43*HK74*HK90 + HK43*HK77*HK89 + HK43*HK79*HK88 + HK43*HK80*HK87 + HK66*HK92*HK94 + HK68*HK91*HK92 + HK70*HK92*HK93 + R_LOS);


// Observation Jacobians - axis 0
Hfusion[0] = HK3*HK5;
Hfusion[1] = HK5*HK7;
Hfusion[2] = HK5*HK8;
Hfusion[3] = HK5*HK9;
Hfusion[4] = HK25*HK4;
Hfusion[5] = HK33*HK4;
Hfusion[6] = HK37*HK4;
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
Kfusion[0] = HK42*HK50;
Kfusion[1] = HK49*HK50;
Kfusion[2] = HK47*HK50;
Kfusion[3] = HK48*HK50;
Kfusion[4] = HK46*HK50;
Kfusion[5] = HK45*HK50;
Kfusion[6] = HK44*HK50;
Kfusion[7] = HK50*(HK25*P(4,7) + HK33*P(5,7) + HK37*P(6,7) + HK38*P(0,7) + HK39*P(1,7) + HK40*P(2,7) + HK41*P(3,7));
Kfusion[8] = HK50*(HK25*P(4,8) + HK33*P(5,8) + HK37*P(6,8) + HK38*P(0,8) + HK39*P(1,8) + HK40*P(2,8) + HK41*P(3,8));
Kfusion[9] = HK50*(HK25*P(4,9) + HK33*P(5,9) + HK37*P(6,9) + HK38*P(0,9) + HK39*P(1,9) + HK40*P(2,9) + HK41*P(3,9));
Kfusion[10] = HK50*(HK25*P(4,10) + HK33*P(5,10) + HK37*P(6,10) + HK38*P(0,10) + HK39*P(1,10) + HK40*P(2,10) + HK41*P(3,10));
Kfusion[11] = HK50*(HK25*P(4,11) + HK33*P(5,11) + HK37*P(6,11) + HK38*P(0,11) + HK39*P(1,11) + HK40*P(2,11) + HK41*P(3,11));
Kfusion[12] = HK50*(HK25*P(4,12) + HK33*P(5,12) + HK37*P(6,12) + HK38*P(0,12) + HK39*P(1,12) + HK40*P(2,12) + HK41*P(3,12));
Kfusion[13] = HK50*(HK25*P(4,13) + HK33*P(5,13) + HK37*P(6,13) + HK38*P(0,13) + HK39*P(1,13) + HK40*P(2,13) + HK41*P(3,13));
Kfusion[14] = HK50*(HK25*P(4,14) + HK33*P(5,14) + HK37*P(6,14) + HK38*P(0,14) + HK39*P(1,14) + HK40*P(2,14) + HK41*P(3,14));
Kfusion[15] = HK50*(HK25*P(4,15) + HK33*P(5,15) + HK37*P(6,15) + HK38*P(0,15) + HK39*P(1,15) + HK40*P(2,15) + HK41*P(3,15));
Kfusion[16] = HK50*(HK25*P(4,16) + HK33*P(5,16) + HK37*P(6,16) + HK38*P(0,16) + HK39*P(1,16) + HK40*P(2,16) + HK41*P(3,16));
Kfusion[17] = HK50*(HK25*P(4,17) + HK33*P(5,17) + HK37*P(6,17) + HK38*P(0,17) + HK39*P(1,17) + HK40*P(2,17) + HK41*P(3,17));
Kfusion[18] = HK50*(HK25*P(4,18) + HK33*P(5,18) + HK37*P(6,18) + HK38*P(0,18) + HK39*P(1,18) + HK40*P(2,18) + HK41*P(3,18));
Kfusion[19] = HK50*(HK25*P(4,19) + HK33*P(5,19) + HK37*P(6,19) + HK38*P(0,19) + HK39*P(1,19) + HK40*P(2,19) + HK41*P(3,19));
Kfusion[20] = HK50*(HK25*P(4,20) + HK33*P(5,20) + HK37*P(6,20) + HK38*P(0,20) + HK39*P(1,20) + HK40*P(2,20) + HK41*P(3,20));
Kfusion[21] = HK50*(HK25*P(4,21) + HK33*P(5,21) + HK37*P(6,21) + HK38*P(0,21) + HK39*P(1,21) + HK40*P(2,21) + HK41*P(3,21));
Kfusion[22] = HK50*(HK25*P(4,22) + HK33*P(5,22) + HK37*P(6,22) + HK38*P(0,22) + HK39*P(1,22) + HK40*P(2,22) + HK41*P(3,22));
Kfusion[23] = HK50*(HK25*P(4,23) + HK33*P(5,23) + HK37*P(6,23) + HK38*P(0,23) + HK39*P(1,23) + HK40*P(2,23) + HK41*P(3,23));


// Observation Jacobians - axis 1
Hfusion[0] = -HK5*HK63;
Hfusion[1] = -HK5*HK66;
Hfusion[2] = -HK5*HK68;
Hfusion[3] = -HK5*HK70;
Hfusion[4] = -HK4*HK74;
Hfusion[5] = -HK4*HK77;
Hfusion[6] = -HK4*HK79;
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
Kfusion[0] = -HK87*HK95;
Kfusion[1] = -HK94*HK95;
Kfusion[2] = -HK91*HK95;
Kfusion[3] = -HK93*HK95;
Kfusion[4] = -HK90*HK95;
Kfusion[5] = -HK89*HK95;
Kfusion[6] = -HK88*HK95;
Kfusion[7] = -HK95*(HK80*P(0,7) + HK81*P(1,7) + HK82*P(2,7) + HK83*P(3,7) + HK84*P(4,7) + HK85*P(5,7) + HK86*P(6,7));
Kfusion[8] = -HK95*(HK80*P(0,8) + HK81*P(1,8) + HK82*P(2,8) + HK83*P(3,8) + HK84*P(4,8) + HK85*P(5,8) + HK86*P(6,8));
Kfusion[9] = -HK95*(HK80*P(0,9) + HK81*P(1,9) + HK82*P(2,9) + HK83*P(3,9) + HK84*P(4,9) + HK85*P(5,9) + HK86*P(6,9));
Kfusion[10] = -HK95*(HK80*P(0,10) + HK81*P(1,10) + HK82*P(2,10) + HK83*P(3,10) + HK84*P(4,10) + HK85*P(5,10) + HK86*P(6,10));
Kfusion[11] = -HK95*(HK80*P(0,11) + HK81*P(1,11) + HK82*P(2,11) + HK83*P(3,11) + HK84*P(4,11) + HK85*P(5,11) + HK86*P(6,11));
Kfusion[12] = -HK95*(HK80*P(0,12) + HK81*P(1,12) + HK82*P(2,12) + HK83*P(3,12) + HK84*P(4,12) + HK85*P(5,12) + HK86*P(6,12));
Kfusion[13] = -HK95*(HK80*P(0,13) + HK81*P(1,13) + HK82*P(2,13) + HK83*P(3,13) + HK84*P(4,13) + HK85*P(5,13) + HK86*P(6,13));
Kfusion[14] = -HK95*(HK80*P(0,14) + HK81*P(1,14) + HK82*P(2,14) + HK83*P(3,14) + HK84*P(4,14) + HK85*P(5,14) + HK86*P(6,14));
Kfusion[15] = -HK95*(HK80*P(0,15) + HK81*P(1,15) + HK82*P(2,15) + HK83*P(3,15) + HK84*P(4,15) + HK85*P(5,15) + HK86*P(6,15));
Kfusion[16] = -HK95*(HK80*P(0,16) + HK81*P(1,16) + HK82*P(2,16) + HK83*P(3,16) + HK84*P(4,16) + HK85*P(5,16) + HK86*P(6,16));
Kfusion[17] = -HK95*(HK80*P(0,17) + HK81*P(1,17) + HK82*P(2,17) + HK83*P(3,17) + HK84*P(4,17) + HK85*P(5,17) + HK86*P(6,17));
Kfusion[18] = -HK95*(HK80*P(0,18) + HK81*P(1,18) + HK82*P(2,18) + HK83*P(3,18) + HK84*P(4,18) + HK85*P(5,18) + HK86*P(6,18));
Kfusion[19] = -HK95*(HK80*P(0,19) + HK81*P(1,19) + HK82*P(2,19) + HK83*P(3,19) + HK84*P(4,19) + HK85*P(5,19) + HK86*P(6,19));
Kfusion[20] = -HK95*(HK80*P(0,20) + HK81*P(1,20) + HK82*P(2,20) + HK83*P(3,20) + HK84*P(4,20) + HK85*P(5,20) + HK86*P(6,20));
Kfusion[21] = -HK95*(HK80*P(0,21) + HK81*P(1,21) + HK82*P(2,21) + HK83*P(3,21) + HK84*P(4,21) + HK85*P(5,21) + HK86*P(6,21));
Kfusion[22] = -HK95*(HK80*P(0,22) + HK81*P(1,22) + HK82*P(2,22) + HK83*P(3,22) + HK84*P(4,22) + HK85*P(5,22) + HK86*P(6,22));
Kfusion[23] = -HK95*(HK80*P(0,23) + HK81*P(1,23) + HK82*P(2,23) + HK83*P(3,23) + HK84*P(4,23) + HK85*P(5,23) + HK86*P(6,23));


