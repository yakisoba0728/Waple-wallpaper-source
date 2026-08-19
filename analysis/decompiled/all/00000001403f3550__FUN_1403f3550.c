// Function: FUN_1403f3550
// Addr: 1403f3550
// Size: 1349 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f3550(uint param_1,undefined8 *param_2,undefined1 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  double *pdVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double *pdVar11;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double dStack_18;
  double local_10;
  
  if (0x122 < param_1) {
    if (param_1 == 0x123) {
      FUN_1403c4700(param_2,param_3);
    }
    else if (param_1 == 0x124) {
      FUN_1403defa0(param_2,param_3);
    }
    else {
      if (param_1 != 0x125) goto switchD_1403f359f_caseD_2;
      FUN_1403c3ad0(param_2,param_3);
    }
    goto LAB_1403f3b80;
  }
  if (param_1 == 0x122) {
    if (*(int *)((longlong)param_2 + 0x1c) == 7) {
      dVar3 = (double)param_2[0x239];
      local_58 = (double)param_2[0x238] + (double)param_2[4];
      pdVar11 = (double *)&DAT_1404e4ff0;
      uStack_50._0_4_ = SUB84(dVar3,0);
      uStack_50._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (*(uint *)((longlong)param_2 + 0x1c) < 3) {
        *(undefined1 *)(param_2 + 3) = 1;
        pdVar10 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar10 = (double *)(param_2 + 6);
      }
      if (*(uint *)((longlong)param_2 + 0x1c) < 2) {
        *(undefined1 *)(param_2 + 3) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar8 = (double *)&DAT_1404e4ff0;
      }
      else {
        pdVar8 = (double *)(param_2 + 5);
      }
      dStack_60 = dVar3 + *pdVar10;
      local_68 = local_58 + *pdVar8;
      if (*(uint *)((longlong)param_2 + 0x1c) < 4) {
        *(undefined1 *)(param_2 + 3) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar10 = (double *)&DAT_1404e4ff0;
      }
      else {
        pdVar10 = (double *)(param_2 + 7);
      }
      local_48 = local_68 + *pdVar10;
      if (*(uint *)((longlong)param_2 + 0x1c) < 5) {
        *(undefined1 *)(param_2 + 3) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar10 = (double *)&DAT_1404e4ff0;
      }
      else {
        pdVar10 = (double *)(param_2 + 8);
      }
      dStack_18 = local_48 + *pdVar10;
      if (*(uint *)((longlong)param_2 + 0x1c) < 6) {
        *(undefined1 *)(param_2 + 3) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar10 = (double *)&DAT_1404e4ff0;
      }
      else {
        pdVar10 = (double *)(param_2 + 9);
      }
      dStack_28 = dStack_18 + *pdVar10;
      uStack_20 = (undefined4)uStack_50;
      uStack_1c = uStack_50._4_4_;
      uStack_30 = (undefined4)uStack_50;
      uStack_2c = uStack_50._4_4_;
      if (*(uint *)((longlong)param_2 + 0x1c) < 7) {
        *(undefined1 *)(param_2 + 3) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      else {
        pdVar11 = (double *)(param_2 + 10);
      }
      dStack_38 = dStack_28 + *pdVar11;
      uStack_50 = dVar3;
      local_40 = dStack_60;
      local_10 = dStack_60;
      FUN_1403bcda0(param_2,param_3,&local_58,&local_68,&local_48);
      FUN_1403bcda0(param_2,param_3,&dStack_18,&dStack_28,&dStack_38);
    }
    else {
      *(int *)((longlong)param_2 + 0x14) = *(int *)(param_2 + 2) + 1;
    }
    goto LAB_1403f3b80;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    *(int *)((longlong)param_2 + 0x104c) =
         *(int *)((longlong)param_2 + 0x104c) + (*(uint *)((longlong)param_2 + 0x1c) >> 1);
    break;
  default:
switchD_1403f359f_caseD_2:
    FUN_1403f43b0(param_1,param_2);
    return;
  case 3:
  case 0x17:
    *(uint *)(param_2 + 0x20a) =
         *(int *)(param_2 + 0x20a) + (*(uint *)((longlong)param_2 + 0x1c) >> 1);
    break;
  case 4:
    uVar5 = param_2[0x238];
    dVar3 = (double)param_2[0x239];
    if (*(int *)((longlong)param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 3) = 1;
      pdVar11 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar7 = *(int *)((longlong)param_2 + 0x1c) - 1;
      *(uint *)((longlong)param_2 + 0x1c) = uVar7;
      pdVar11 = (double *)(param_2 + (ulonglong)uVar7 + 4);
    }
    dVar4 = *pdVar11;
    *param_3 = 0;
    param_2[0x238] = uVar5;
    param_2[0x239] = dVar3 + dVar4;
    if (*(char *)((longlong)param_2 + 0x1049) != '\0') break;
    if (*(char *)((longlong)param_2 + 0x104a) == '\0') {
      *(uint *)(param_2 + 0x20a) =
           *(int *)(param_2 + 0x20a) + (*(uint *)((longlong)param_2 + 0x1c) >> 1);
      *(undefined1 *)((longlong)param_2 + 0x104a) = 1;
      *(uint *)((longlong)param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x20a) + 7 + *(int *)((longlong)param_2 + 0x104c)) >> 3;
      *(undefined1 *)((longlong)param_2 + 0x1049) = 1;
      break;
    }
    goto LAB_1403f377a;
  case 5:
    FUN_1403fa3a0(param_2,param_3);
    break;
  case 6:
    FUN_1403e0570(param_2,param_3);
    break;
  case 7:
    FUN_140412530(param_2,param_3);
    break;
  case 8:
    FUN_1403fac00(param_2,param_3);
    break;
  case 10:
    FUN_1403b2ea0(param_2,param_2 + 0x236,2);
    return;
  case 0xb:
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)(param_2 + 2) + 1;
    }
    if (*(int *)((longlong)param_2 + 0x105c) == 0) {
      *(undefined1 *)(param_2 + 0x20b) = 1;
      puVar9 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
      DAT_1404e4ff8 = _DAT_14045dde8;
      _DAT_1404e5000 = DAT_14045ddf0;
      _DAT_1404e5008 = _DAT_14045ddf8;
    }
    else {
      uVar7 = *(int *)((longlong)param_2 + 0x105c) - 1;
      *(uint *)((longlong)param_2 + 0x105c) = uVar7;
      puVar9 = param_2 + (ulonglong)uVar7 * 4 + 0x20c;
    }
    uVar5 = puVar9[1];
    param_2[0x205] = *puVar9;
    param_2[0x206] = uVar5;
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    param_2[0x207] = uVar5;
    param_2[0x208] = uVar6;
    *param_2 = param_2[0x205];
    param_2[1] = param_2[0x206];
    param_2[2] = uVar5;
    return;
  case 0xe:
    *(undefined1 *)(param_2 + 0x209) = 1;
    break;
  case 0x13:
  case 0x14:
    if (*(char *)((longlong)param_2 + 0x104a) == '\0') {
      *(uint *)(param_2 + 0x20a) =
           *(int *)(param_2 + 0x20a) + (*(uint *)((longlong)param_2 + 0x1c) >> 1);
      *(undefined1 *)((longlong)param_2 + 0x104a) = 1;
      *(uint *)((longlong)param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x20a) + 7 + *(int *)((longlong)param_2 + 0x104c)) >> 3;
    }
    if (*(uint *)(param_2 + 2) <
        (uint)(*(int *)((longlong)param_2 + 0x1054) + *(int *)((longlong)param_2 + 0x14))) {
      return;
    }
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    *(int *)((longlong)param_2 + 0x14) =
         *(int *)((longlong)param_2 + 0x14) + *(int *)((longlong)param_2 + 0x1054);
    return;
  case 0x15:
    pdVar11 = (double *)&DAT_1404e4ff0;
    dVar3 = (double)param_2[0x238];
    dVar4 = (double)param_2[0x239];
    if (*(int *)((longlong)param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 3) = 1;
      pdVar10 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar7 = *(int *)((longlong)param_2 + 0x1c) - 1;
      *(uint *)((longlong)param_2 + 0x1c) = uVar7;
      pdVar10 = (double *)(param_2 + (ulonglong)uVar7 + 4);
    }
    if (*(int *)((longlong)param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 3) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar7 = *(int *)((longlong)param_2 + 0x1c) - 1;
      *(uint *)((longlong)param_2 + 0x1c) = uVar7;
      pdVar11 = (double *)(param_2 + (ulonglong)uVar7 + 4);
    }
    dVar1 = *pdVar11;
    dVar2 = *pdVar10;
    *param_3 = 0;
    param_2[0x238] = dVar3 + dVar1;
    param_2[0x239] = dVar4 + dVar2;
    if (*(char *)((longlong)param_2 + 0x1049) != '\0') break;
    if (*(char *)((longlong)param_2 + 0x104a) == '\0') {
      *(uint *)(param_2 + 0x20a) =
           *(int *)(param_2 + 0x20a) + (*(uint *)((longlong)param_2 + 0x1c) >> 1);
      *(undefined1 *)((longlong)param_2 + 0x104a) = 1;
      *(uint *)((longlong)param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x20a) + 7 + *(int *)((longlong)param_2 + 0x104c)) >> 3;
    }
    goto LAB_1403f377a;
  case 0x16:
    dVar3 = (double)param_2[0x238];
    uVar5 = param_2[0x239];
    if (*(int *)((longlong)param_2 + 0x1c) == 0) {
      *(undefined1 *)(param_2 + 3) = 1;
      pdVar11 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      uVar7 = *(int *)((longlong)param_2 + 0x1c) - 1;
      *(uint *)((longlong)param_2 + 0x1c) = uVar7;
      pdVar11 = (double *)(param_2 + (ulonglong)uVar7 + 4);
    }
    dVar4 = *pdVar11;
    *param_3 = 0;
    param_2[0x239] = uVar5;
    param_2[0x238] = dVar3 + dVar4;
    if (*(char *)((longlong)param_2 + 0x1049) != '\0') break;
    if (*(char *)((longlong)param_2 + 0x104a) == '\0') {
      *(uint *)(param_2 + 0x20a) =
           *(int *)(param_2 + 0x20a) + (*(uint *)((longlong)param_2 + 0x1c) >> 1);
      *(undefined1 *)((longlong)param_2 + 0x104a) = 1;
      *(uint *)((longlong)param_2 + 0x1054) =
           (uint)(*(int *)(param_2 + 0x20a) + 7 + *(int *)((longlong)param_2 + 0x104c)) >> 3;
      *(undefined1 *)((longlong)param_2 + 0x1049) = 1;
      break;
    }
LAB_1403f377a:
    *(undefined1 *)((longlong)param_2 + 0x1049) = 1;
    break;
  case 0x18:
    FUN_1403f6550(param_2,param_3);
    break;
  case 0x19:
    FUN_1403f9840(param_2,param_3);
    break;
  case 0x1a:
    FUN_140413030(param_2,param_3);
    break;
  case 0x1b:
    FUN_1403df8b0(param_2,param_3);
    break;
  case 0x1d:
    FUN_1403b2ea0(param_2,param_2 + 0x234,1);
    return;
  case 0x1e:
    FUN_140410820(param_2,param_3);
    break;
  case 0x1f:
    FUN_1403e1e20(param_2,param_3);
    break;
  case 0xff:
    FUN_1403f5830(param_2 + 3,param_2);
    return;
  }
LAB_1403f3b80:
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  return;
}

