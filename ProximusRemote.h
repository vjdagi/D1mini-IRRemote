struct Remote {
    char* name;
    uint16_t value[35];
} Remote[] = {
    //0
    {"0",{528, 166,  276, 166,  276, 500,  276, 166,  276, 500,  276, 668,  276, 166,  276, 166,  276, 168,  276, 168,  276, 502,  276, 334,  276, 500,  276, 166,  276, 168,  276, 168,  276, 168,  276}},
    {"1",{520, 174,  270, 174,  270, 508,  270, 172,  270, 508,  270, 674,  270, 174,  270, 174,  270, 174,  270, 174,  268, 510,  268, 342,  270, 508,  270, 174,  270, 174,  268, 174,  268, 342,  268}},
    {"2",{532, 162,  282, 162,  282, 496,  282, 162,  282, 496,  282, 662,  282, 160,  282, 160,  282, 162,  280, 162,  280, 496,  282, 328,  282, 496,  282, 160,  282, 162,  280, 162,  280, 496,  282}},
    {"3",{526, 168,  274, 170,  274, 504,  274, 170,  274, 504,  274, 670,  274, 168,  274, 168,  274, 168,  274, 170,  272, 504,  274, 336,  274, 504,  274, 168,  274, 170,  274, 170,  272, 672,  274}},
    {"4",{520, 174,  270, 174,  270, 508,  270, 172,  270, 508,  270, 674,  270, 172,  270, 174,  268, 174,  268, 174,  268, 508,  270, 342,  270, 508,  270, 174,  268, 174,  268, 342,  268, 174,  270}},
    {"5",{552, 162,  278, 162,  278, 494,  276, 162,  278, 494,  278, 658,  278, 162,  278, 162,  278, 162,  278, 164,  276, 494,  278, 328,  276, 494,  278, 162,  278, 164,  276, 330,  276, 328,  278}},
    {"6",{528, 164,  278, 166,  278, 500,  278, 166,  278, 500,  278, 666,  278, 164,  278, 166,  278, 166,  278, 166,  278, 500,  278, 332,  278, 498,  278, 164,  278, 164,  278, 334,  278, 500,  278}},
    {"7",{532, 162,  282, 162,  280, 498,  280, 162,  280, 496,  280, 664,  280, 162,  280, 162,  280, 162,  280, 164,  280, 498,  280, 330,  280, 496,  280, 162,  280, 162,  280, 330,  280, 664,  282}},
    {"8",{526, 168,  276, 168,  276, 502,  276, 168,  276, 502,  276, 668,  276, 166,  276, 166,  276, 168,  274, 168,  274, 502,  276, 334,  276, 502,  276, 166,  276, 166,  276, 502,  276, 166,  276}},
    {"9",{528, 166,  276, 166,  276, 500,  276, 166,  276, 500,  276, 668,  276, 166,  276, 168,  276, 168,  276, 168,  276, 502,  276, 334,  276, 502,  276, 168,  276, 168,  276, 502,  276, 336,  276}},
    //10
    {"Channel up",{524, 170,  272, 170,  272, 504,  272, 170,  272, 504,  272, 672,  274, 170,  274, 170,  272, 172,  272, 172,  272, 506,  272, 338,  272, 504,  274, 170,  272, 504,  274, 170,  272, 338,  272}},
    {"Channel down",{516, 178,  264, 180,  264, 514,  264, 178,  264, 514,  264, 682,  264, 180,  264, 180,  262, 180,  262, 180,  262, 516,  264, 348,  262, 514,  262, 180,  264, 514,  262, 180,  262, 180,  262}},
    {"OK",{526, 168,  274, 168,  274, 502,  274, 168,  274, 502,  274, 670,  274, 170,  274, 170,  274, 170,  272, 170,  274, 504,  274, 338,  272, 504,  274, 336,  274, 336,  274, 672,  274, 170,  274}},
    {"UP",{520, 174,  270, 174,  268, 508,  268, 174,  268, 508,  268, 676,  270, 174,  268, 174,  268, 176,  268, 176,  268, 510,  268, 342,  268, 508,  268, 342,  268, 342,  268, 508,  268, 174,  268}},
    {"Down",{526, 168,  276, 168,  276, 502,  276, 168,  276, 502,  276, 668,  276, 166,  276, 168,  276, 168,  276, 168,  276, 502,  276, 336,  276, 502,  276, 334,  276, 334,  276, 502,  276, 334,  276}},
    {"Left",{514, 180,  262, 182,  262, 516,  262, 180,  262, 516,  262, 682,  264, 180,  262, 180,  262, 180,  262, 182,  260, 516,  262, 348,  262, 514,  262, 348,  262, 348,  262, 516,  262, 514,  262}},
    {"Right",{526, 168,  274, 168,  274, 502,  274, 168,  274, 502,  274, 670,  274, 168,  274, 170,  274, 170,  274, 170,  274, 504,  274, 338,  274, 502,  274, 336,  274, 338,  274, 502,  274, 670,  274}},
    {"Back",{518, 176,  268, 176,  266, 510,  268, 176,  266, 510,  268, 676,  268, 176,  268, 176,  266, 176,  266, 176,  266, 510,  266, 344,  266, 510,  266, 510,  266, 176,  266, 176,  266, 678,  268}},
    {"TV",{526, 168,  276, 168,  276, 502,  276, 168,  276, 502,  276, 670,  276, 168,  276, 168,  276, 168,  274, 168,  276, 502,  276, 336,  276, 502,  276, 668,  276, 334,  276, 334,  276, 670,  276}},
    {"On/Off",{526, 168,  274, 168,  274, 504,  274, 168,  274, 504,  274, 670,  274, 168,  274, 168,  274, 168,  274, 170,  274, 504,  274, 336,  274, 502,  274, 168,  274, 168,  274, 670,  274, 168,  274}},
    //20
    {"PVR",{530, 164,  280, 164,  278, 498,  280, 164,  278, 498,  280, 664,  280, 164,  280, 164,  278, 166,  278, 166,  278, 500,  278, 332,  278, 498,  280, 666,  280, 664,  280, 664,  280, 330,  280}},
    {"TV-Guide",{524, 170,  272, 172,  270, 506,  272, 172,  272, 506,  272, 672,  272, 170,  272, 172,  272, 172,  270, 172,  270, 506,  270, 340,  270, 506,  272, 674,  272, 172,  272, 672,  272, 170,  272}},
    {"Info",{526, 168,  274, 168,  274, 504,  274, 168,  274, 504,  274, 670,  276, 168,  274, 168,  274, 170,  274, 170,  274, 504,  274, 336,  274, 502,  274, 168,  274, 168,  274, 670,  274, 670,  274}},  
    {"TeleTekst",{522, 172,  270, 174,  270, 508,  270, 172,  270, 508,  270, 674,  272, 172,  270, 172,  270, 174,  270, 174,  270, 508,  270, 340,  270, 506,  270, 172,  270, 674,  270, 674,  272, 172,  270}},
    {"Play",{518, 176,  268, 176,  266, 510,  268, 176,  266, 510,  268, 676,  268, 174,  268, 176,  266, 178,  266, 178,  266, 512,  266, 344,  266, 510,  266, 176,  266, 512,  266, 678,  268, 176,  266}},
    {"Pause",{528, 166,  278, 166,  276, 500,  276, 166,  276, 504,  274, 668,  278, 166,  278, 166,  276, 168,  276, 168,  276, 502,  276, 334,  278, 500,  278, 166,  276, 668,  276, 166,  276, 166,  276}},
    {"Previous",{524, 172,  272, 172,  272, 506,  272, 172,  272, 506,  272, 672,  272, 170,  272, 172,  270, 172,  270, 172,  270, 506,  272, 340,  270, 506,  270, 340,  272, 172,  272, 674,  272, 338,  272}},
    {"Next",{538, 156,  288, 156,  286, 490,  288, 156,  286, 490,  288, 656,  288, 156,  288, 156,  288, 156,  286, 156,  286, 492,  286, 324,  288, 490,  288, 324,  286, 156,  286, 658,  288, 156,  288}},
    {"Rewind",{536, 158,  284, 158,  284, 492,  284, 160,  284, 494,  284, 660,  284, 158,  284, 158,  284, 158,  284, 160,  284, 494,  284, 326,  284, 492,  284, 160,  284, 494,  284, 492,  284, 326,  284}},
    {"Forward",{526, 166,  276, 168,  276, 502,  276, 168,  276, 502,  276, 668,  276, 166,  276, 168,  276, 168,  274, 168,  274, 502,  276, 334,  276, 502,  276, 168,  276, 502,  276, 502,  276, 168,  276}},
    //30
    {"Stop",{530, 164,  278, 164,  278, 498,  280, 164,  280, 498,  280, 666,  280, 164,  278, 164,  278, 164,  278, 164,  278, 498,  278, 332,  278, 498,  278, 164,  278, 666,  280, 164,  280, 332,  278}}, 
    {"Record",{534, 160,  284, 160,  284, 494,  284, 158,  284, 494,  284, 660,  284, 160,  284, 160,  284, 160,  284, 160,  284, 494,  284, 328,  284, 494,  284, 160,  284, 660,  284, 326,  284, 660,  284}}, 
};

int GetVal(String req){
  int val = -1;
       if (req.indexOf("/n0") != -1) val = 0;
  else if (req.indexOf("/n1") != -1) val = 1;
  else if (req.indexOf("/n2") != -1) val = 2;
  else if (req.indexOf("/n3") != -1) val = 3;
  else if (req.indexOf("/n4") != -1) val = 4;
  else if (req.indexOf("/n5") != -1) val = 5;
  else if (req.indexOf("/n6") != -1) val = 6;
  else if (req.indexOf("/n7") != -1) val = 7;
  else if (req.indexOf("/n8") != -1) val = 8;
  else if (req.indexOf("/n9") != -1) val = 9;
  else if (req.indexOf("/chdo") != -1) val = 10;
  else if (req.indexOf("/chup") != -1) val = 11;
  else if (req.indexOf("/ok") != -1) val = 12;
  else if (req.indexOf("/up") != -1) val = 13;
  else if (req.indexOf("/down") != -1) val = 14;
  else if (req.indexOf("/left") != -1) val = 15;
  else if (req.indexOf("/right") != -1) val = 16;
  else if (req.indexOf("/back") != -1) val = 17;
  else if (req.indexOf("/tv") != -1) val = 18;
  else if (req.indexOf("/onoff") != -1) val = 19;
  else if (req.indexOf("/pvr") != -1) val = 20;
  else if (req.indexOf("/guide") != -1) val = 21;
  else if (req.indexOf("/info") != -1) val = 22;
  else if (req.indexOf("/tt") != -1) val = 23;
  else if (req.indexOf("/play") != -1) val = 24;
  else if (req.indexOf("/pause") != -1) val = 25;
  else if (req.indexOf("/prev") != -1) val = 26;
  else if (req.indexOf("/next") != -1) val = 27;
  else if (req.indexOf("/rew") != -1) val = 28;
  else if (req.indexOf("/forw") != -1) val = 29;
  else if (req.indexOf("/stop") != -1) val = 30;
  else if (req.indexOf("/rec") != -1) val = 31;
  else if (req.indexOf("/dis") != -1) val = 100;
  return val;
  }