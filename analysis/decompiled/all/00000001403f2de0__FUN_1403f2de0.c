// Function: FUN_1403f2de0
// Addr: 1403f2de0
// Size: 1300 bytes


void FUN_1403f2de0(uint param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  if (0x122 < param_1) {
    if (param_1 == 0x123) {
      FUN_1403c4420(param_2,param_3);
    }
    else if (param_1 == 0x124) {
      func_0x0001403ded20(param_2,param_3);
    }
    else {
      if (param_1 != 0x125) goto switchD_1403f2e39_caseD_2;
      FUN_1403c3770(param_2,param_3);
    }
    goto LAB_1403f33d2;
  }
  if (param_1 == 0x122) {
    if (*(int *)(param_2 + 0x1c) == 7) {
      pdVar7 = &DAT_1404e4ff0;
      dVar4 = *(double *)(param_2 + 0x11c8);
      local_98 = *(double *)(param_2 + 0x11c0) + *(double *)(param_2 + 0x20);
      if (*(uint *)(param_2 + 0x1c) < 3) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        pdVar8 = &DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x30);
      }
      if (*(uint *)(param_2 + 0x1c) < 2) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar6 = &DAT_1404e4ff0;
      }
      else {
        pdVar6 = (double *)(param_2 + 0x28);
      }
      dVar3 = dVar4 + *pdVar8;
      local_a8 = local_98 + *pdVar6;
      if (*(uint *)(param_2 + 0x1c) < 4) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar8 = &DAT_1404e4ff0;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x38);
      }
      dVar1 = local_a8 + *pdVar8;
      if (*(uint *)(param_2 + 0x1c) < 5) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar8 = &DAT_1404e4ff0;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x40);
      }
      local_58 = dVar1 + *pdVar8;
      if (*(uint *)(param_2 + 0x1c) < 6) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar8 = &DAT_1404e4ff0;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x48);
      }
      dStack_68 = local_58 + *pdVar8;
      if (*(uint *)(param_2 + 0x1c) < 7) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar7 = (double *)(param_2 + 0x50);
      }
      dVar2 = dStack_68 + *pdVar7;
      dStack_a0 = dVar3;
      dStack_90 = dVar4;
      local_88 = dVar1;
      local_80 = dVar3;
      dStack_78 = dVar2;
      dStack_70 = dVar4;
      dStack_60 = dVar4;
      local_50 = dVar3;
      FUN_1403bca20(param_3,&local_98,&local_a8,&local_88);
      *(double *)(param_2 + 0x11c0) = dVar1;
      *(double *)(param_2 + 0x11c8) = dVar3;
      FUN_1403bca20(param_3,&local_58,&dStack_68,&dStack_78);
      *(double *)(param_2 + 0x11c0) = dVar2;
      *(double *)(param_2 + 0x11c8) = dVar4;
    }
    else {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x10) + 1;
    }
    goto LAB_1403f33d2;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    FUN_1403b3300(param_1,param_2);
    *(int *)(param_2 + 0x104c) = *(int *)(param_2 + 0x104c) + (*(uint *)(param_2 + 0x1c) >> 1);
    break;
  default:
switchD_1403f2e39_caseD_2:
    FUN_1403f43b0(param_1,param_2);
    return;
  case 3:
  case 0x17:
    FUN_1403b3300(param_1,param_2);
    *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
    break;
  case 4:
    FUN_1403b3300(param_1,param_2);
    local_a8 = *(double *)(param_2 + 0x11c0);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      dStack_a0 = *(double *)(param_2 + 0x11c8) + DAT_14045dde0;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar5;
      dStack_a0 = *(double *)(param_2 + 0x11c8) + *(double *)(param_2 + ((ulonglong)uVar5 + 4) * 8);
    }
    goto LAB_1403f2fd3;
  case 5:
    FUN_1403fa1a0(param_2,param_3);
    break;
  case 6:
    FUN_1403e0240(param_2,param_3);
    break;
  case 7:
    FUN_140412200(param_2,param_3);
    break;
  case 8:
    FUN_1403faa20(param_2,param_3);
    break;
  case 10:
    FUN_1403b2d30(param_2,param_2 + 0x11b0,2);
    return;
  case 0xb:
    func_0x0001403f8df0(param_2);
    return;
  case 0xe:
    FUN_1403b3300(param_1,param_2);
    *(undefined1 *)(param_2 + 0x1048) = 1;
    break;
  case 0x13:
  case 0x14:
    FUN_1403b3300(param_1,param_2);
    if (*(char *)(param_2 + 0x104a) == '\0') {
      *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
      *(undefined1 *)(param_2 + 0x104a) = 1;
      *(uint *)(param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x1050) + 7 + *(int *)(param_2 + 0x104c)) >> 3;
    }
    if (*(uint *)(param_2 + 0x10) < (uint)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1054))) {
      return;
    }
    *(undefined4 *)(param_2 + 0x11d4) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1054);
    return;
  case 0x15:
    FUN_1403b3300(param_1,param_2);
    local_a8 = *(double *)(param_2 + 0x11c0);
    pdVar7 = &DAT_1404e4ff0;
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar8 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar5;
      pdVar8 = (double *)(param_2 + ((ulonglong)uVar5 + 4) * 8);
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar5;
      pdVar7 = (double *)(param_2 + ((ulonglong)uVar5 + 4) * 8);
    }
    dStack_a0 = *(double *)(param_2 + 0x11c8) + *pdVar8;
    goto LAB_1403f2fc5;
  case 0x16:
    FUN_1403b3300(param_1,param_2);
    local_a8 = *(double *)(param_2 + 0x11c0);
    dStack_a0 = *(double *)(param_2 + 0x11c8);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar7 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar5;
      pdVar7 = (double *)(param_2 + ((ulonglong)uVar5 + 4) * 8);
    }
LAB_1403f2fc5:
    local_a8 = local_a8 + *pdVar7;
LAB_1403f2fd3:
    FUN_1403ec860(param_2,param_3,&local_a8);
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
    FUN_1403f62c0(param_2,param_3);
    break;
  case 0x19:
    FUN_1403f9490(param_2,param_3);
    break;
  case 0x1a:
    FUN_140412e80(param_2,param_3);
    break;
  case 0x1b:
    FUN_1403df6f0(param_2,param_3);
    break;
  case 0x1d:
    FUN_1403b2d30(param_2,param_2 + 0x11a0,1);
    return;
  case 0x1e:
    FUN_140410240(param_2,param_3);
    break;
  case 0x1f:
    FUN_1403e1840(param_2,param_3);
    break;
  case 0xff:
    FUN_1403f5830(param_2 + 0x18,param_2);
    return;
  }
LAB_1403f33d2:
  *(undefined4 *)(param_2 + 0x11d4) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

