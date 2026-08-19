// Function: FUN_140314e60
// Addr: 140314e60
// Size: 238 bytes


undefined8 FUN_140314e60(longlong *param_1)

{
  ushort *puVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  longlong lVar12;
  
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  if (((short)param_1[3] == 0) || (*(short *)((longlong)param_1 + 0x1a) == 0)) {
    return 0x97;
  }
  lVar2 = *param_1;
  *(int *)(param_1 + 9) = (int)param_1[3];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(int *)(param_1 + 10) = (int)param_1[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x24);
  puVar1 = (ushort *)(param_1 + 9);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(int *)(param_1 + 0xb) = (int)param_1[5];
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(param_1 + 0xc) = (int)param_1[6];
  if ((*(byte *)(lVar2 + 0x110) & 8) != 0) {
    lVar12 = (longlong)(int)param_1[10];
    lVar8 = *(short *)(lVar2 + 0x6a) * lVar12;
    *(uint *)((longlong)param_1 + 0x54) =
         (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar8 = *(short *)(lVar2 + 0x6c) * lVar12;
    *(uint *)(param_1 + 0xb) =
         (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar12 = *(short *)(lVar2 + 0x6e) * lVar12;
    *(uint *)((longlong)param_1 + 0x5c) =
         (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  }
  if ((*(byte *)(lVar2 + 0x110) & 8) != 0) {
    uVar7 = func_0x0001402efae0((ulonglong)*puVar1 << 6,*(undefined2 *)(lVar2 + 0x68));
    return uVar7;
  }
  uVar4 = *puVar1;
  if (uVar4 < *(ushort *)((longlong)param_1 + 0x4a)) {
    *(int *)(param_1 + 0xe) = (int)param_1[10];
    *(ushort *)((longlong)param_1 + 0x74) = *(ushort *)((longlong)param_1 + 0x4a);
    uVar5 = func_0x0001402efae0(uVar4,*(undefined2 *)((longlong)param_1 + 0x4a));
    *(undefined4 *)((longlong)param_1 + 100) = uVar5;
    uVar5 = 0x10000;
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(ushort *)((longlong)param_1 + 0x74) = uVar4;
    *(undefined4 *)((longlong)param_1 + 100) = 0x10000;
    uVar5 = func_0x0001402efae0(*(undefined2 *)((longlong)param_1 + 0x4a),uVar4);
  }
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  pbVar10 = (byte *)0x0;
  uVar9 = *(uint *)(lVar2 + 0x454);
  if (uVar9 != 0) {
    uVar11 = 0;
    do {
      uVar6 = uVar9 + uVar11 >> 1;
      pbVar3 = *(byte **)(*(longlong *)(lVar2 + 0x460) + (ulonglong)uVar6 * 8);
      uVar4 = (ushort)*pbVar3;
      if (uVar4 <= *puVar1) {
        if (*puVar1 <= uVar4) {
          pbVar10 = pbVar3 + 2;
          break;
        }
        uVar11 = uVar6 + 1;
        uVar6 = uVar9;
      }
      uVar9 = uVar6;
    } while (uVar11 < uVar9);
  }
  param_1[0xf] = (longlong)pbVar10;
  param_1[8] = (longlong)puVar1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  return 0;
}

