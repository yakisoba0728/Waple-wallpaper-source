// Function: FUN_140390910
// Addr: 140390910
// Size: 415 bytes


undefined8 * FUN_140390910(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  lVar8 = 0x40;
  puVar7 = param_1 + 4;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar1 = puVar7 + 8;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    lVar8 = lVar8 + -1;
    puVar7 = puVar1;
  } while (lVar8 != 0);
  *puVar1 = 0;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  param_1[2] = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  FUN_140394310(param_1 + 0x20b);
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0x103c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1044) = 0;
  param_1[0x205] = uVar4;
  param_1[0x206] = uVar5;
  *(undefined4 *)(param_1 + 0x207) = uVar6;
  *(undefined2 *)((longlong)param_1 + 0x1049) = 1;
  *(undefined8 *)((longlong)param_1 + 0x104c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1054) = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x235] = param_3;
  if ((param_3 == (byte *)0x0) || (uVar9 = (uint)*param_3 * 0x100 + (uint)param_3[1], uVar9 < 0x4d8)
     ) {
    *(undefined4 *)(param_1 + 0x234) = 0x6b;
  }
  else {
    uVar6 = 0x8000;
    if (uVar9 < 0x846c) {
      uVar6 = 0x46b;
    }
    *(undefined4 *)(param_1 + 0x234) = uVar6;
  }
  param_1[0x237] = param_4;
  if ((param_4 != (byte *)0x0) && (uVar9 = (uint)*param_4 * 0x100 + (uint)param_4[1], 0x4d7 < uVar9)
     ) {
    uVar6 = 0x8000;
    if (uVar9 < 0x846c) {
      uVar6 = 0x46b;
    }
    *(undefined4 *)(param_1 + 0x236) = uVar6;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x236) = 0x6b;
  return param_1;
}

