// Function: FUN_14037c510
// Addr: 14037c510
// Size: 497 bytes


void FUN_14037c510(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_98;
  puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x98) + 0x148);
  puVar9 = (undefined8 *)*puVar12;
  puVar8 = &DAT_14045dde0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = puVar9;
  }
  if (*(uint *)(puVar8 + 3) < 4) {
    puVar9 = &DAT_14045dde0;
  }
  else {
    puVar9 = (undefined8 *)puVar8[2];
  }
  lVar7 = FUN_1403cbfd0(puVar9,param_2);
  uVar11 = *(uint *)(param_1 + 0x124);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = param_2;
  uVar14 = (uint)*(byte *)(lVar7 + 2) * 0x100 + (uint)*(byte *)(lVar7 + 3);
  if ((uVar14 & 0x10) != 0) {
    uVar10 = (ulonglong)CONCAT11(*(undefined1 *)(lVar7 + 4),*(undefined1 *)(lVar7 + 5));
    uVar14 = ((uint)*(byte *)(lVar7 + 6 + uVar10 * 2) * 0x100 +
             (uint)*(byte *)(lVar7 + 7 + uVar10 * 2)) * 0x10000 + uVar14;
  }
  uVar15 = uVar14;
  if (((uVar14 & 0x10) != 0) &&
     (uVar15 = uVar14 & 0xffffffef, uVar14 >> 0x10 < *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc))
     ) {
    uVar15 = uVar14;
  }
  *(uint *)(param_1 + 0x124) = uVar15;
  FUN_1403e3c50(param_1);
  uVar2 = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x144) = 8;
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  *(undefined1 **)(param_1 + 0x148) = local_68;
  local_78 = uVar2;
  local_74 = uVar3;
  local_70 = uVar4;
  lVar7 = FUN_1403c5a80(puVar12,param_2);
  if (lVar7 != 0) {
    *(longlong *)(param_1 + 0x100) = lVar7;
    puVar12 = (undefined8 *)(lVar7 + 0x20);
    for (iVar13 = *(int *)(lVar7 + 0x18); iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar9 = &DAT_14045dde0;
      if (iVar13 != 0) {
        puVar9 = puVar12;
      }
      uVar10 = 0;
      do {
        if (((ulonglong)puVar9[uVar10 + 5] >>
             (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) +
                       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) >>
              ((byte)(&DAT_14045c498)[uVar10] & 0x1f) & 0x3f) & 1) == 0) goto code_r0x00014037c6ca;
        uVar14 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar14;
      } while (uVar14 < 3);
      cVar6 = (*(code *)puVar9[1])(*puVar9,param_1,puVar9[4]);
      if (cVar6 != '\0') break;
code_r0x00014037c6ca:
      puVar12 = puVar12 + 8;
    }
  }
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  if (((uVar11 & 0x10) != 0) && (*(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc) <= uVar11 >> 0x10))
  {
    uVar11 = uVar11 & 0xffffffef;
  }
  *(uint *)(param_1 + 0x124) = uVar11;
  FUN_1403e3c50(param_1);
  iVar13 = *(int *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  if (iVar13 + 1U < 2) {
    func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_98);
    return;
  }
  func_0x0001402bf8e0(uVar5);
  return;
}

