// Function: FUN_14037c440
// Addr: 14037c440
// Size: 592 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14037c440(longlong param_1,undefined4 param_2)

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
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x98) + 0x148);
  puVar9 = (undefined8 *)*puVar12;
  puVar8 = &DAT_14045dd10;
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = puVar9;
  }
  if (*(uint *)(puVar8 + 3) < 4) {
    puVar9 = &DAT_14045dd10;
  }
  else {
    puVar9 = (undefined8 *)puVar8[2];
  }
  lVar7 = FUN_1403cbf00(puVar9,param_2);
  uVar11 = *(uint *)(param_1 + 0x124);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = param_2;
  uVar15 = (uint)*(byte *)(lVar7 + 2) * 0x100 + (uint)*(byte *)(lVar7 + 3);
  if ((uVar15 & 0x10) != 0) {
    uVar10 = (ulonglong)CONCAT11(*(undefined1 *)(lVar7 + 4),*(undefined1 *)(lVar7 + 5));
    uVar15 = ((uint)*(byte *)(lVar7 + 6 + uVar10 * 2) * 0x100 +
             (uint)*(byte *)(lVar7 + 7 + uVar10 * 2)) * 0x10000 + uVar15;
  }
  uVar16 = uVar15;
  if (((uVar15 & 0x10) != 0) &&
     (uVar16 = uVar15 & 0xffffffef, uVar15 >> 0x10 < *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc))
     ) {
    uVar16 = uVar15;
  }
  *(uint *)(param_1 + 0x124) = uVar16;
  FUN_1403e3b80(param_1);
  uVar2 = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x144) = 8;
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  *(undefined1 **)(param_1 + 0x148) = local_68;
  local_78 = uVar2;
  local_74 = uVar3;
  local_70 = uVar4;
  lVar7 = FUN_1403c59b0(puVar12,param_2);
  if (lVar7 != 0) {
    *(longlong *)(param_1 + 0x100) = lVar7;
    puVar12 = (undefined8 *)(lVar7 + 0x20);
    for (iVar13 = *(int *)(lVar7 + 0x18); iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar9 = &DAT_14045dd10;
      if (iVar13 != 0) {
        puVar9 = puVar12;
      }
      uVar10 = 0;
      do {
        if (((ulonglong)puVar9[uVar10 + 5] >>
             (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) +
                       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) >>
              ((byte)(&DAT_14045c3c8)[uVar10] & 0x1f) & 0x3f) & 1) == 0) goto LAB_14037c5fa;
        uVar15 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
      } while (uVar15 < 3);
      cVar6 = (*(code *)puVar9[1])(*puVar9,param_1,puVar9[4]);
      if (cVar6 != '\0') {
        uVar14 = 1;
        goto LAB_14037c60a;
      }
LAB_14037c5fa:
      puVar12 = puVar12 + 8;
    }
  }
  uVar14 = 0;
LAB_14037c60a:
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  if (((uVar11 & 0x10) != 0) && (*(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc) <= uVar11 >> 0x10))
  {
    uVar11 = uVar11 & 0xffffffef;
  }
  *(uint *)(param_1 + 0x124) = uVar11;
  FUN_1403e3b80(param_1);
  iVar13 = *(int *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  if (1 < iVar13 + 1U) {
    thunk_FUN_1402d9040(uVar5);
  }
  return uVar14;
}

