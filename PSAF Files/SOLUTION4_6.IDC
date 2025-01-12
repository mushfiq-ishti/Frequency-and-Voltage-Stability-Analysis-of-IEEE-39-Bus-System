//   PSAF bus ID    Associated bus number
BUS,                    B10                 ,    1
BUS,                    B20                 ,    2
BUS,                    B30                 ,    3
BUS,                    B11                 ,    4
BUS,                    B21                 ,    5
BUS,                    B31                 ,    6
BUS,                    B12                 ,    7
BUS,                    B22                 ,    8
BUS,                    B32                 ,    9
BUS,                    B13                 ,   10
BUS,                    B23                 ,   11
BUS,                    B33                 ,   12
BUS,                    B14                 ,   13
BUS,                    B24                 ,   14
BUS,                    B34                 ,   15
BUS,                    B15                 ,   16
BUS,                    B25                 ,   17
BUS,                    B35                 ,   18
BUS,                    B16                 ,   19
BUS,                    B26                 ,   20
BUS,                    B36                 ,   21
BUS,                    B17                 ,   22
BUS,                    B27                 ,   23
BUS,                    B37                 ,   24
BUS,                    B18                 ,   25
BUS,                    B28                 ,   26
BUS,                    B38                 ,   27
BUS,                    B19                 ,   28
BUS,                    B29                 ,   29
BUS,                    B39                 ,   30
BUS,                    B1                  ,   31
BUS,                    B2                  ,   32
BUS,                    B3                  ,   33
BUS,                    B4                  ,   34
BUS,                    B5                  ,   35
BUS,                    B6                  ,   36
BUS,                    B7                  ,   37
BUS,                    B8                  ,   38
BUS,                    B9                  ,   39
//   Zone ID           Zone number
ZONE,                    0                   ,    1
ZONE,                    4                   ,    2
ZONE,                    3                   ,    3
ZONE,                    1                   ,    4
ZONE,                    2                   ,    5
//[Type], PSAF ID  ,       Bus from nbr. , To nbr. , circ. nbr.
LINE,   L10                                     ,   35 ,        38 ,        1
LINE,   L20                                     ,   16 ,        19 ,        1
LINE,   L30                                     ,   17 ,        20 ,        1
LINE,   L11                                     ,   36 ,        37 ,        1
LINE,   L21                                     ,   19 ,        22 ,        1
LINE,   L31                                     ,   20 ,        23 ,        1
LINE,   L12                                     ,   36 ,         4 ,        1
LINE,   L22                                     ,   19 ,        28 ,        1
LINE,   L32                                     ,   20 ,        26 ,        1
LINE,   L13                                     ,   37 ,        38 ,        1
LINE,   L23                                     ,   19 ,         5 ,        1
LINE,   L33                                     ,   20 ,        29 ,        1
LINE,   L14                                     ,   38 ,        39 ,        1
LINE,   L24                                     ,   19 ,        14 ,        1
LINE,   L34                                     ,   26 ,        29 ,        1
LINE,   L15                                     ,   39 ,        30 ,        1
LINE,   L25                                     ,   22 ,        25 ,        1
LINE,   L16                                     ,    1 ,         4 ,        1
LINE,   L26                                     ,   22 ,        23 ,        1
LINE,   L17                                     ,    1 ,        10 ,        1
LINE,   L27                                     ,    5 ,         8 ,        1
LINE,   L18                                     ,   10 ,        13 ,        1
LINE,   L28                                     ,    8 ,        11 ,        1
LINE,   L19                                     ,   13 ,        16 ,        1
LINE,   L29                                     ,   11 ,        14 ,        1
LINE,   L1                                      ,   31 ,        32 ,        1
LINE,   L2                                      ,   31 ,        30 ,        1
LINE,   L3                                      ,   32 ,        33 ,        1
LINE,   L4                                      ,   32 ,        17 ,        1
LINE,   L5                                      ,   33 ,        34 ,        1
LINE,   L6                                      ,   33 ,        25 ,        1
LINE,   L7                                      ,   34 ,        35 ,        1
LINE,   L8                                      ,   34 ,        13 ,        1
LINE,   L9                                      ,   35 ,        36 ,        1
TXFIX,  T10                                     ,   32 ,         3 ,        1
TXFIX,  T01                                     ,    7 ,         4 ,        1
TXFIX,  T11                                     ,   29 ,        27 ,        1
TXFIX,  T02                                     ,    7 ,        10 ,        1
TXFIX,  T12                                     ,   28 ,         2 ,        1
TXFIX,  T03                                     ,   36 ,         6 ,        1
TXFIX,  T04                                     ,    1 ,         9 ,        1
TXFIX,  T05                                     ,   28 ,        12 ,        1
TXFIX,  T06                                     ,    2 ,        15 ,        1
TXFIX,  T07                                     ,    8 ,        18 ,        1
TXFIX,  T08                                     ,   11 ,        21 ,        1
TXFIX,  T09                                     ,   17 ,        24 ,        1

[Generator Output]
//Generator Id, Fp, Fq
G10, 1, 1
G02, 1, 1
G03, 1, 1
G04, 1, 1
G05, 1, 1
G06, 1, 1
G07, 1, 1
G08, 1, 1
G09, 1, 1
G01, 1, 1
[End Generator Output]

[Synchronous Motor Output]
//Sync motor Id, Fp, Fq
[End Synchronous Motor Output]

[Induction Motor Output]
//Induct motor Id, Fp, Fq
[End Induction Motor Output]
