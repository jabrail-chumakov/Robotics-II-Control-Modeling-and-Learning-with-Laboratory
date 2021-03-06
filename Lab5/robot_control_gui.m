clear L
deg = pi/180;

L(1) = Revolute('d', 1, 'a', 0, 'alpha', pi/2, ...
    'I', [0, 0, 0], ...
    'm', 0, ...
    'Jm', 1e-4, ...
    'G', 500, ...
    'B', 10e-4, ...
    'Tc', 10e-4, ...
    'qlim', [-180 180]*deg );

L(2) = Revolute('d', 0, 'a', 1, 'alpha', 0, ...
    'I', [1/80, 403/480, 403/480], ...
    'm', 10, ...
    'Jm', 1e-4, ...
    'G', 500, ...
    'B', 10e-4, ...
    'Tc', 10e-4, ...
    'qlim', [-90 90]*deg );

L(3) = Revolute('d', 0, 'a', 1, 'alpha', 0,  ...
    'I', [1/80, 403/480, 403/480], ...
    'm', 10, ...
    'Jm', 1e-4, ...
    'G', 500, ...
    'B', 10e-4, ...
    'Tc', 10e-4, ...
    'qlim', [-90 90]*deg );

puma_three_joints = SerialLink(L, 'name', 'puma_three_joints');

figure(1)
puma_three_joints.plot([0 pi/2 0])
puma_three_joints.teach([0 0 0])

j0 = puma_three_joints.jacob0([0 pi/2 0]);
taug0 = puma_three_joints.gravload([0 0 1]);
t_0 = j0.*taug0;

j1 = puma_three_joints.jacob0([0 0 0]);
taug1 = puma_three_joints.gravload([0 0 1]);
t_1 = j1.*taug1;
