// Function: FUN_1403f3480
// Addr: 1403f3480
// Size: 1608 bytes


void FUN_1403f3480(uint param_1,longlong param_2,undefined1 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  double local_48;
  double local_40;
  double local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  
  if (0x122 < param_1) {
    if (param_1 == 0x123) {
      FUN_1403c4630(param_2,param_3);
    }
    else if (param_1 == 0x124) {
      FUN_1403deed0(param_2,param_3);
    }
    else {
      if (param_1 != 0x125) goto switchD_1403f34cf_caseD_2;
      FUN_1403c3a00(param_2,param_3);
    }
    goto LAB_1403f3ab0;
  }
  if (param_1 == 0x122) {
    if (*(int *)(param_2 + 0x1c) == 7) {
      dVar3 = *(double *)(param_2 + 0x11c8);
      local_58 = *(double *)(param_2 + 0x11c0) + *(double *)(param_2 + 0x20);
      pdVar9 = (double *)&DAT_1404e4f20;
      uStack_50._0_4_ = SUB84(dVar3,0);
      uStack_50._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (*(uint *)(param_2 + 0x1c) < 3) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        pdVar8 = (double *)&DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x30);
      }
      if (*(uint *)(param_2 + 0x1c) < 2) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar7 = (double *)&DAT_1404e4f20;
      }
      else {
        pdVar7 = (double *)(param_2 + 0x28);
      }
      dStack_60 = dVar3 + *pdVar8;
      local_68 = local_58 + *pdVar7;
      if (*(uint *)(param_2 + 0x1c) < 4) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar8 = (double *)&DAT_1404e4f20;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x38);
      }
      local_48 = local_68 + *pdVar8;
      if (*(uint *)(param_2 + 0x1c) < 5) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar8 = (double *)&DAT_1404e4f20;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x40);
      }
      local_18 = local_48 + *pdVar8;
      if (*(uint *)(param_2 + 0x1c) < 6) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar8 = (double *)&DAT_1404e4f20;
      }
      else {
        pdVar8 = (double *)(param_2 + 0x48);
      }
      local_28 = local_18 + *pdVar8;
      local_20 = (undefined4)uStack_50;
      uStack_1c = uStack_50._4_4_;
      local_30 = (undefined4)uStack_50;
      uStack_2c = uStack_50._4_4_;
      if (*(uint *)(param_2 + 0x1c) < 7) {
        *(undefined1 *)(param_2 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      else {
        pdVar9 = (double *)(param_2 + 0x50);
      }
      local_38 = local_28 + *pdVar9;
      uStack_50 = dVar3;
      local_40 = dStack_60;
      local_10 = dStack_60;
      FUN_1403bccd0(param_2,param_3,&local_58,&local_68,&local_48);
      FUN_1403bccd0(param_2,param_3,&local_18,&local_28,&local_38);
    }
    else {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x10) + 1;
    }
    goto LAB_1403f3ab0;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    *(int *)(param_2 + 0x104c) = *(int *)(param_2 + 0x104c) + (*(uint *)(param_2 + 0x1c) >> 1);
    break;
  default:
switchD_1403f34cf_caseD_2:
    FUN_1403f42e0(param_1,param_2);
    return;
  case 3:
  case 0x17:
    *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
    break;
  case 4:
    uVar5 = *(undefined8 *)(param_2 + 0x11c0);
    dVar3 = *(double *)(param_2 + 0x11c8);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar9 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      uVar6 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar6;
      pdVar9 = (double *)(param_2 + ((ulonglong)uVar6 + 4) * 8);
    }
    dVar4 = *pdVar9;
    *param_3 = 0;
    *(undefined8 *)(param_2 + 0x11c0) = uVar5;
    *(double *)(param_2 + 0x11c8) = dVar3 + dVar4;
    if (*(char *)(param_2 + 0x1049) != '\0') break;
    if (*(char *)(param_2 + 0x104a) == '\0') {
      *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
      *(undefined1 *)(param_2 + 0x104a) = 1;
      *(uint *)(param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x1050) + 7 + *(int *)(param_2 + 0x104c)) >> 3;
      *(undefined1 *)(param_2 + 0x1049) = 1;
      break;
    }
    goto LAB_1403f36aa;
  case 5:
    FUN_1403fa2d0(param_2,param_3);
    break;
  case 6:
    FUN_1403e04a0(param_2,param_3);
    break;
  case 7:
    FUN_140412460(param_2,param_3);
    break;
  case 8:
    FUN_1403fab30(param_2,param_3);
    break;
  case 10:
    FUN_1403b2dd0(param_2,param_2 + 0x11b0,2);
    return;
  case 0xb:
    FUN_1403f8d20(param_2);
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
    pdVar9 = (double *)&DAT_1404e4f20;
    dVar3 = *(double *)(param_2 + 0x11c0);
    dVar4 = *(double *)(param_2 + 0x11c8);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      uVar6 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar6;
      pdVar8 = (double *)(param_2 + ((ulonglong)uVar6 + 4) * 8);
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      uVar6 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar6;
      pdVar9 = (double *)(param_2 + ((ulonglong)uVar6 + 4) * 8);
    }
    dVar1 = *pdVar9;
    dVar2 = *pdVar8;
    *param_3 = 0;
    *(double *)(param_2 + 0x11c0) = dVar3 + dVar1;
    *(double *)(param_2 + 0x11c8) = dVar4 + dVar2;
    if (*(char *)(param_2 + 0x1049) != '\0') break;
    if (*(char *)(param_2 + 0x104a) == '\0') {
      *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
      *(undefined1 *)(param_2 + 0x104a) = 1;
      *(uint *)(param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x1050) + 7 + *(int *)(param_2 + 0x104c)) >> 3;
    }
    goto LAB_1403f36aa;
  case 0x16:
    dVar3 = *(double *)(param_2 + 0x11c0);
    uVar5 = *(undefined8 *)(param_2 + 0x11c8);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar9 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      uVar6 = *(int *)(param_2 + 0x1c) - 1;
      *(uint *)(param_2 + 0x1c) = uVar6;
      pdVar9 = (double *)(param_2 + ((ulonglong)uVar6 + 4) * 8);
    }
    dVar4 = *pdVar9;
    *param_3 = 0;
    *(undefined8 *)(param_2 + 0x11c8) = uVar5;
    *(double *)(param_2 + 0x11c0) = dVar3 + dVar4;
    if (*(char *)(param_2 + 0x1049) != '\0') break;
    if (*(char *)(param_2 + 0x104a) == '\0') {
      *(int *)(param_2 + 0x1050) = *(int *)(param_2 + 0x1050) + (*(uint *)(param_2 + 0x1c) >> 1);
      *(undefined1 *)(param_2 + 0x104a) = 1;
      *(uint *)(param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x1050) + 7 + *(int *)(param_2 + 0x104c)) >> 3;
      *(undefined1 *)(param_2 + 0x1049) = 1;
      break;
    }
LAB_1403f36aa:
    *(undefined1 *)(param_2 + 0x1049) = 1;
    break;
  case 0x18:
    FUN_1403f6480(param_2,param_3);
    break;
  case 0x19:
    FUN_1403f9770(param_2,param_3);
    break;
  case 0x1a:
    FUN_140412f60(param_2,param_3);
    break;
  case 0x1b:
    FUN_1403df7e0(param_2,param_3);
    break;
  case 0x1d:
    FUN_1403b2dd0(param_2,param_2 + 0x11a0,1);
    return;
  case 0x1e:
    FUN_140410750(param_2,param_3);
    break;
  case 0x1f:
    FUN_1403e1d50(param_2,param_3);
    break;
  case 0xff:
    FUN_1403f5760(param_2 + 0x18,param_2);
    return;
  }
LAB_1403f3ab0:
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

