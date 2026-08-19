// Function: FUN_1403f3cf0
// Addr: 1403f3cf0
// Size: 1117 bytes


void FUN_1403f3cf0(uint param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double dStack_18;
  double dStack_10;
  
  if (0x122 < param_1) {
    if (param_1 == 0x123) {
      FUN_1403c4990(param_2,param_3);
    }
    else if (param_1 == 0x124) {
      FUN_1403df1d0(param_2,param_3);
    }
    else {
      if (param_1 != 0x125) goto switchD_1403f3d49_caseD_2;
      FUN_1403c3e30(param_2,param_3);
    }
    goto LAB_1403f422e;
  }
  if (param_1 == 0x122) {
    if (*(int *)(param_2 + 0x1c) == 7) {
      pdVar4 = &DAT_1404e4ff0;
      dVar1 = *(double *)(param_2 + 0x11c8);
      local_58 = *(double *)(param_2 + 0x11c0) + *(double *)(param_2 + 0x20);
      uStack_50._0_4_ = SUB84(dVar1,0);
      uStack_50._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (*(uint *)(param_2 + 0x1c) < 3) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        pdVar5 = &DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar5 = (double *)(param_2 + 0x30);
      }
      if (*(uint *)(param_2 + 0x1c) < 2) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar3 = &DAT_1404e4ff0;
      }
      else {
        pdVar3 = (double *)(param_2 + 0x28);
      }
      dStack_60 = dVar1 + *pdVar5;
      local_68 = local_58 + *pdVar3;
      if (*(uint *)(param_2 + 0x1c) < 4) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar5 = &DAT_1404e4ff0;
      }
      else {
        pdVar5 = (double *)(param_2 + 0x38);
      }
      dStack_48 = local_68 + *pdVar5;
      if (*(uint *)(param_2 + 0x1c) < 5) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar5 = &DAT_1404e4ff0;
      }
      else {
        pdVar5 = (double *)(param_2 + 0x40);
      }
      dStack_18 = dStack_48 + *pdVar5;
      if (*(uint *)(param_2 + 0x1c) < 6) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar5 = &DAT_1404e4ff0;
      }
      else {
        pdVar5 = (double *)(param_2 + 0x48);
      }
      dStack_28 = dStack_18 + *pdVar5;
      uStack_20 = (undefined4)uStack_50;
      uStack_1c = uStack_50._4_4_;
      uStack_30 = (undefined4)uStack_50;
      uStack_2c = uStack_50._4_4_;
      if (*(uint *)(param_2 + 0x1c) < 7) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar4 = (double *)(param_2 + 0x50);
      }
      dStack_38 = dStack_28 + *pdVar4;
      uStack_50 = dVar1;
      local_40 = dStack_60;
      dStack_10 = dStack_60;
      FUN_1403bcf60(param_2,param_3,&local_58,&local_68,&dStack_48);
      FUN_1403bcf60(param_2,param_3,&dStack_18,&dStack_28,&dStack_38);
    }
    else {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x10) + 1;
    }
    goto LAB_1403f422e;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    *(int *)(param_2 + 0x104c) = *(int *)(param_2 + 0x104c) + (*(uint *)(param_2 + 0x1c) >> 1);
    break;
  default:
switchD_1403f3d49_caseD_2:
    FUN_1403f43b0(param_1,param_2);
    return;
  case 3:
  case 0x17:
    *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
    break;
  case 4:
    local_68 = *(double *)(param_2 + 0x11c0);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      dStack_60 = *(double *)(param_2 + 0x11c8) + DAT_14045dde0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar2;
      dStack_60 = *(double *)(param_2 + 0x11c8) + *(double *)(param_2 + ((ulonglong)uVar2 + 4) * 8);
    }
    goto LAB_1403f3ea8;
  case 5:
    FUN_1403fa530(param_2,param_3);
    break;
  case 6:
    FUN_1403e08e0(param_2,param_3);
    break;
  case 7:
    FUN_1404128a0(param_2,param_3);
    break;
  case 8:
    FUN_1403faf00(param_2,param_3);
    break;
  case 10:
    FUN_1403b2ea0(param_2,param_2 + 0x11b0,2);
    return;
  case 0xb:
    func_0x0001403f8df0(param_2);
    return;
  case 0xe:
    *(undefined1 *)(param_2 + 0x1048) = 1;
    break;
  case 0x13:
  case 0x14:
    if (*(char *)(param_2 + 0x104a) == '\0') {
      *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
      *(undefined1 *)(param_2 + 0x104a) = 1;
      *(uint *)(param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x1050) + 7 + *(int *)(param_2 + 0x104c)) >> 3;
    }
    if (*(uint *)(param_2 + 0x10) < (uint)(*(int *)(param_2 + 0x1054) + *(int *)(param_2 + 0x14))) {
      return;
    }
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1054);
    return;
  case 0x15:
    local_68 = *(double *)(param_2 + 0x11c0);
    pdVar4 = &DAT_1404e4ff0;
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar5 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar2;
      pdVar5 = (double *)(param_2 + ((ulonglong)uVar2 + 4) * 8);
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar2;
      pdVar4 = (double *)(param_2 + ((ulonglong)uVar2 + 4) * 8);
    }
    dStack_60 = *(double *)(param_2 + 0x11c8) + *pdVar5;
    goto LAB_1403f3e9a;
  case 0x16:
    local_68 = *(double *)(param_2 + 0x11c0);
    dStack_60 = *(double *)(param_2 + 0x11c8);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar4 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar2;
      pdVar4 = (double *)(param_2 + ((ulonglong)uVar2 + 4) * 8);
    }
LAB_1403f3e9a:
    local_68 = local_68 + *pdVar4;
LAB_1403f3ea8:
    FUN_1403ec9b0(param_2,param_3,&local_68);
    if (*(char *)(param_2 + 0x1049) == '\0') {
      if (*(char *)(param_2 + 0x104a) == '\0') {
        *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
        *(undefined1 *)(param_2 + 0x104a) = 1;
        *(uint *)(param_2 + 0x1054) =
             (uint)(*(int *)(param_2 + 0x1050) + 7 + *(int *)(param_2 + 0x104c)) >> 3;
      }
      *(undefined1 *)(param_2 + 0x1049) = 1;
    }
    break;
  case 0x18:
    FUN_1403f6980(param_2,param_3);
    break;
  case 0x19:
    FUN_1403f9c70(param_2,param_3);
    break;
  case 0x1a:
    func_0x000140413310(param_2,param_3);
    break;
  case 0x1b:
    func_0x0001403dfb90(param_2,param_3);
    break;
  case 0x1d:
    FUN_1403b2ea0(param_2,param_2 + 0x11a0,1);
    return;
  case 0x1e:
    FUN_140411440(param_2,param_3);
    break;
  case 0x1f:
    func_0x0001403e2a60(param_2,param_3);
    break;
  case 0xff:
    FUN_1403f5830(param_2 + 0x18,param_2);
    return;
  }
LAB_1403f422e:
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

