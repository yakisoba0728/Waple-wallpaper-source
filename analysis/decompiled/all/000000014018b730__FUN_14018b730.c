// Function: FUN_14018b730
// Addr: 14018b730
// Size: 709 bytes


undefined8 FUN_14018b730(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float fVar11;
  
  puVar4 = *(ulonglong **)(param_1 + 0x110);
  uVar9 = 0;
  if (puVar4 != *(ulonglong **)(param_1 + 0x118)) {
    while (*puVar4 != param_2) {
      puVar4 = puVar4 + 1;
      if (puVar4 == *(ulonglong **)(param_1 + 0x118)) {
        return 0;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    puVar8 = *(undefined8 **)(param_1 + 0x1d0);
    uVar9 = 1;
    uVar10 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
                   0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff)
                 * 0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^ param_2 >> 0x28 & 0xff)
               * 0x100000001b3 ^ param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ param_2 >> 0x38) *
             0x100000001b3;
    uVar7 = uVar10 & *(ulonglong *)(param_1 + 0x1f8);
    puVar6 = *(undefined8 **)(lVar1 + 8 + uVar7 * 0x10);
    if (puVar6 == puVar8) {
LAB_14018b841:
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar2 = puVar6[2];
      puVar5 = puVar6;
      while (param_2 != uVar2) {
        if (puVar5 == *(undefined8 **)(lVar1 + uVar7 * 0x10)) goto LAB_14018b841;
        puVar5 = (undefined8 *)puVar5[1];
        uVar2 = puVar5[2];
      }
    }
    if ((puVar5 == (undefined8 *)0x0) || (puVar5 == puVar8)) {
      if (puVar6 != puVar8) {
        if (param_2 == puVar6[2]) {
          return 1;
        }
        while (puVar8 = puVar6, puVar6 != *(undefined8 **)(lVar1 + uVar7 * 0x10)) {
          puVar6 = (undefined8 *)puVar6[1];
          if (param_2 == puVar6[2]) {
            return 1;
          }
        }
      }
      if (*(longlong *)(param_1 + 0x1d8) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar6 = (undefined8 *)FUN_14028af20(0x18);
      puVar6[2] = param_2;
      fVar11 = (float)(*(longlong *)(param_1 + 0x1d8) + 1) / (float)*(ulonglong *)(param_1 + 0x200);
      if (*(float *)(param_1 + 0x1c8) <= fVar11 && fVar11 != *(float *)(param_1 + 0x1c8)) {
        FUN_1401a2820(param_1 + 0x1c8);
        uVar7 = uVar10 & *(ulonglong *)(param_1 + 0x1f8);
        puVar8 = *(undefined8 **)(param_1 + 0x1d0);
        puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x1e0) + 8 + uVar7 * 0x10);
        if (puVar5 != puVar8) {
          lVar1 = puVar5[2];
          puVar8 = puVar5;
          while (puVar6[2] != lVar1) {
            if (puVar8 == *(undefined8 **)(*(longlong *)(param_1 + 0x1e0) + uVar7 * 0x10))
            goto LAB_14018b973;
            puVar8 = (undefined8 *)puVar8[1];
            lVar1 = puVar8[2];
          }
          puVar8 = (undefined8 *)*puVar8;
        }
      }
LAB_14018b973:
      puVar5 = (undefined8 *)puVar8[1];
      *(longlong *)(param_1 + 0x1d8) = *(longlong *)(param_1 + 0x1d8) + 1;
      *puVar6 = puVar8;
      puVar6[1] = puVar5;
      *puVar5 = puVar6;
      puVar8[1] = puVar6;
      lVar1 = *(longlong *)(param_1 + 0x1e0);
      uVar10 = *(ulonglong *)(param_1 + 0x1f8) & uVar10;
      puVar3 = *(undefined8 **)(lVar1 + uVar10 * 0x10);
      if (puVar3 == *(undefined8 **)(param_1 + 0x1d0)) {
        *(undefined8 **)(lVar1 + uVar10 * 0x10) = puVar6;
      }
      else {
        if (puVar3 == puVar8) {
          *(undefined8 **)(lVar1 + uVar10 * 0x10) = puVar6;
          return 1;
        }
        if (*(undefined8 **)(lVar1 + 8 + uVar10 * 0x10) != puVar5) {
          return 1;
        }
      }
      *(undefined8 **)(lVar1 + 8 + uVar10 * 0x10) = puVar6;
    }
  }
  return uVar9;
}

