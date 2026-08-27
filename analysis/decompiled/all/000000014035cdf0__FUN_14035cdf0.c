// Function: FUN_14035cdf0
// Addr: 14035cdf0
// Size: 559 bytes


bool FUN_14035cdf0(longlong *param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = param_1[3];
  *param_4 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (**(code **)(lVar1 + 0x40))(lVar1);
    bVar3 = iVar2 != 0;
    if (iVar2 != 0) {
      return bVar3;
    }
  }
  if (*param_1 == 0) {
    return bVar3;
  }
  if ((*(byte *)(*param_1 + 0xb4) & 8) != 0) {
    return bVar3;
  }
  switch(param_3) {
  case 0x5b4:
    if (param_2 == 0x5d9) {
      *param_4 = 0xfb1d;
      return true;
    }
    break;
  case 0x5b7:
    if (param_2 == 0x5f2) {
      *param_4 = 0xfb1f;
      return true;
    }
    if (param_2 == 0x5d0) {
      *param_4 = 0xfb2e;
      return true;
    }
    break;
  case 0x5b8:
    if (param_2 == 0x5d0) {
      *param_4 = 0xfb2f;
      return true;
    }
    break;
  case 0x5b9:
    if (param_2 == 0x5d5) {
      *param_4 = 0xfb4b;
      return true;
    }
    break;
  case 0x5bc:
    if (param_2 - 0x5d0U < 0x1b) {
      iVar2 = *(int *)(&DAT_140470ea0 + (ulonglong)(param_2 - 0x5d0U) * 4);
      *param_4 = iVar2;
      return iVar2 != 0;
    }
    if (param_2 == 0xfb2a) {
LAB_14035cfd0:
      *param_4 = 0xfb2c;
      return true;
    }
    bVar4 = param_2 == 0xfb2b;
    goto LAB_14035d008;
  case 0x5bf:
    if (param_2 == 0x5d1) {
      *param_4 = 0xfb4c;
      return true;
    }
    if (param_2 == 0x5db) {
      *param_4 = 0xfb4d;
      return true;
    }
    if (param_2 == 0x5e4) {
      *param_4 = 0xfb4e;
      return true;
    }
    break;
  case 0x5c1:
    if (param_2 == 0x5e9) {
      *param_4 = 0xfb2a;
      return true;
    }
    if (param_2 == 0xfb49) goto LAB_14035cfd0;
    break;
  case 0x5c2:
    if (param_2 == 0x5e9) {
      *param_4 = 0xfb2b;
      return true;
    }
    bVar4 = param_2 == 0xfb49;
LAB_14035d008:
    if (bVar4) {
      *param_4 = 0xfb2d;
      bVar3 = true;
    }
  }
  return bVar3;
}

