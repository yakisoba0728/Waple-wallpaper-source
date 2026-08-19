// Function: FUN_1401a8ce0
// Addr: 1401a8ce0
// Size: 67 bytes


undefined4
FUN_1401a8ce0(char *param_1,float param_2,float param_3,float *param_4,char param_5,char param_6)

{
  float fVar1;
  int iVar2;
  
  param_4[4] = param_3;
  *param_4 = 1.0;
  if ((0.0 < param_2) &&
     (param_4[2] = (float)(int)param_3 / param_2, fVar1 = DAT_1404927d4,
     0.0 < (float)(int)param_3 / param_2)) {
    param_4[3] = 0.0;
    *param_4 = fVar1 / param_2;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      iVar2 = FUN_1402c11a0(fVar1 / param_2,"mirror");
      if (iVar2 == 0) {
        param_4[3] = (float)((uint)param_4[3] | 1);
      }
      else {
        iVar2 = FUN_1402c11a0(param_1,"single");
        if (iVar2 == 0) {
          param_4[3] = (float)((uint)param_4[3] | 2);
        }
      }
    }
    if (param_5 != '\0') {
      param_4[3] = (float)((uint)param_4[3] | 4);
    }
    if (param_6 != '\0') {
      param_4[3] = (float)((uint)param_4[3] | 0x20000000);
    }
    return 1;
  }
  return 0;
}

