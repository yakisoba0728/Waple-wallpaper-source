// Function: FUN_1403166d0
// Addr: 1403166d0
// Size: 814 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1403166d0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  char *_Str1;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined4 local_a0 [6];
  uint local_88;
  uint local_84;
  undefined8 uStack_80;
  int aiStack_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 == (uint *)0x0) {
    local_a8[0] = 6;
  }
  else {
    uVar13 = 0;
    uVar8 = *puVar2;
    uVar1 = puVar2[1];
    if (uVar1 != 0) {
      lVar12 = 0;
      do {
        uVar13 = uVar13 + 1;
        (&uStack_80)[lVar12 * 2] = *(undefined8 *)(puVar2 + lVar12 * 2 + 2);
        piVar3 = *(int **)(puVar2 + (lVar12 + 7) * 6 + 2);
        aiStack_78[lVar12 * 4] = *piVar3;
        aiStack_78[lVar12 * 4 + 1] = piVar3[(ulonglong)(byte)puVar2[(lVar12 + 7) * 6] - 1];
        lVar12 = lVar12 + 1;
      } while (uVar13 < uVar1);
    }
    local_a8[0] = 0;
    uVar10 = (ulonglong)uVar1 * 2 + 7 & 0xfffffffffffffff8;
    local_88 = uVar1;
    local_84 = uVar8;
    puVar6 = (uint *)FUN_1402f7fa0(*(undefined8 *)(param_1 + 0x98),(uVar1 + 1) * 0x20 + (int)uVar10,
                                   local_a8);
    if (local_a8[0] == 0) {
      puVar6[1] = uVar8;
      *puVar6 = uVar1;
      puVar6[2] = 0;
      FUN_1404217a0(puVar6 + 8,0,(ulonglong)uVar1 * 2);
      uVar9 = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(ulonglong *)(puVar6 + 4) = (longlong)(puVar6 + 8) + uVar10;
      if (uVar1 != 0) {
LAB_140316820:
        lVar12 = uVar9 * 0x20;
        *(undefined8 *)(lVar12 + *(longlong *)(puVar6 + 4)) = (&uStack_80)[uVar9 * 2];
        *(int *)(lVar12 + 8 + *(longlong *)(puVar6 + 4)) = aiStack_78[uVar9 * 4] << 0x10;
        *(int *)(lVar12 + 0x10 + *(longlong *)(puVar6 + 4)) = aiStack_78[uVar9 * 4 + 1] << 0x10;
        *(undefined4 *)(lVar12 + 0x18 + *(longlong *)(puVar6 + 4)) = 0xffffffff;
        *(undefined4 *)(lVar12 + 0x14 + *(longlong *)(puVar6 + 4)) = 0xffffffff;
        puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 4) + lVar12);
        _Str1 = (char *)*puVar11;
        if (_Str1 != (char *)0x0) {
          lVar12 = 0;
          do {
            lVar7 = lVar12 + 1;
            if (_Str1[lVar12] != "Weight"[lVar12]) {
              lVar12 = 0;
              goto LAB_1403168b2;
            }
            lVar12 = lVar7;
          } while (lVar7 != 7);
          *(undefined4 *)((longlong)puVar11 + 0x14) = 0x77676874;
        }
        goto LAB_140316958;
      }
LAB_140316962:
      FUN_14031a8f0(*(undefined8 *)(puVar2 + 0x44),local_a0,puVar2[1]);
      uVar10 = 0;
      if (uVar1 != 0) {
        do {
          uVar5 = FUN_14031a850(puVar2 + (uVar10 + 7) * 6,local_a0[uVar10]);
          lVar12 = uVar10 * 0x20;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
          *(undefined4 *)(lVar12 + 0xc + *(longlong *)(puVar6 + 4)) = uVar5;
        } while (uVar8 < uVar1);
      }
      *param_2 = puVar6;
    }
  }
  return local_a8[0];
  while (lVar12 = lVar7, lVar7 != 6) {
LAB_1403168b2:
    lVar7 = lVar12 + 1;
    if (_Str1[lVar12] != "Width"[lVar12]) {
      iVar4 = strcmp(_Str1,"OpticalSize");
      if (iVar4 != 0) {
        lVar12 = 0;
        goto LAB_140316900;
      }
      *(undefined4 *)((longlong)puVar11 + 0x14) = 0x6f70737a;
      goto LAB_140316958;
    }
  }
  *(undefined4 *)((longlong)puVar11 + 0x14) = 0x77647468;
  goto LAB_140316958;
  while (lVar12 = lVar7, lVar7 != 6) {
LAB_140316900:
    lVar7 = lVar12 + 1;
    if (_Str1[lVar12] != "Slant"[lVar12]) {
      lVar12 = 0;
      goto LAB_140316930;
    }
  }
  *(undefined4 *)((longlong)puVar11 + 0x14) = 0x736c6e74;
  goto LAB_140316958;
  while (lVar12 = lVar7, lVar7 != 7) {
LAB_140316930:
    lVar7 = lVar12 + 1;
    if (_Str1[lVar12] != "Italic"[lVar12]) goto LAB_140316958;
  }
  *(undefined4 *)((longlong)puVar11 + 0x14) = 0x6974616c;
LAB_140316958:
  uVar8 = (int)uVar9 + 1;
  uVar9 = (ulonglong)uVar8;
  if (uVar1 <= uVar8) goto LAB_140316962;
  goto LAB_140316820;
}

