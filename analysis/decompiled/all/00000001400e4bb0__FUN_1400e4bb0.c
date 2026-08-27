// Function: FUN_1400e4bb0
// Addr: 1400e4bb0
// Size: 852 bytes


longlong *
FUN_1400e4bb0(longlong *param_1,byte param_2,undefined1 *param_3,undefined1 *param_4,uint *param_5,
             longlong param_6,uint param_7)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  int iVar5;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  void *_Buf2;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  puVar11 = auStack_a8;
  local_58 = 0;
  uVar13 = 0xf;
  local_50 = 0xf;
  uStack_60 = 0;
  local_68 = (undefined8 ****)0x0;
  ppppuVar15 = (undefined8 ****)local_68;
  if (param_5 != (uint *)0x0) {
    local_68 = (undefined8 ***)(ulonglong)param_2;
    local_80 = 1;
    local_58 = 1;
    uVar8 = 1;
    ppppuVar15 = (undefined8 ****)local_68;
    if (1 < *param_5) {
      local_78 = 1;
      uVar12 = uVar13;
      puVar10 = param_3;
      local_70 = (ulonglong)*param_5;
      do {
        pppuVar4 = local_68;
        uVar8 = local_80;
        puVar10 = puVar10 + 1;
        uVar13 = uVar12;
        ppppuVar15 = (undefined8 ****)local_68;
        if (puVar10 == param_4) break;
        local_88 = *puVar10;
        if ((param_7 & 0x100) != 0) {
          local_88 = (**(code **)(**(longlong **)(param_6 + 8) + 0x20))();
        }
        if (uVar8 < uVar12) {
          local_58 = uVar8 + 1;
          ppppuVar15 = &local_68;
          if (0xf < uVar12) {
            ppppuVar15 = (undefined8 ****)pppuVar4;
          }
          *(undefined1 *)((longlong)ppppuVar15 + uVar8) = local_88;
          *(undefined1 *)((longlong)ppppuVar15 + uVar8 + 1) = 0;
          local_80 = local_58;
          uVar13 = local_50;
        }
        else {
          if (uVar8 == 0x7fffffffffffffff) goto LAB_1400e4efa;
          local_80 = uVar8 + 1;
          uVar13 = local_80 | 0xf;
          if (uVar13 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar12 >> 1) < uVar12) {
              uVar13 = 0x7fffffffffffffff;
              uVar7 = 0x8000000000000027;
              goto LAB_1400e4d44;
            }
            uVar7 = (uVar12 >> 1) + uVar12;
            if (uVar13 < uVar7) {
              uVar13 = uVar7;
            }
            uVar1 = uVar13 + 1;
            if (uVar1 == 0) {
              ppppuVar15 = (undefined8 ****)0x0;
            }
            else {
              if (0xfff < uVar1) {
                uVar7 = uVar13 + 0x28;
                if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1400e4d44;
              }
              ppppuVar15 = (undefined8 ****)FUN_14028af20(uVar1);
            }
          }
          else {
            uVar13 = 0x7fffffffffffffff;
            uVar7 = 0x8000000000000027;
LAB_1400e4d44:
            pppuVar6 = (undefined8 ***)FUN_14028af20(uVar7);
            if (pppuVar6 == (undefined8 ***)0x0) goto LAB_1400e4ef3;
            ppppuVar15 = (undefined8 ****)((longlong)pppuVar6 + 0x27U & 0xffffffffffffffe0);
            ppppuVar15[-1] = pppuVar6;
          }
          local_58 = local_80;
          local_50 = uVar13;
          if (uVar12 < 0x10) {
            FUN_1404210f0(ppppuVar15,&local_68,uVar8);
            *(undefined1 *)((longlong)ppppuVar15 + uVar8) = local_88;
            *(undefined1 *)((longlong)ppppuVar15 + uVar8 + 1) = 0;
            local_68 = ppppuVar15;
          }
          else {
            FUN_1404210f0(ppppuVar15,pppuVar4,uVar8);
            *(undefined1 *)((longlong)ppppuVar15 + uVar8) = local_88;
            *(undefined1 *)((longlong)ppppuVar15 + uVar8 + 1) = 0;
            if (uVar12 + 1 < 0x1000) {
              thunk_FUN_14028af80(pppuVar4);
              local_68 = ppppuVar15;
            }
            else {
              if (0x1f < (ulonglong)((longlong)pppuVar4 + (-8 - (longlong)pppuVar4[-1])))
              goto LAB_1400e4ef3;
              thunk_FUN_14028af80(pppuVar4[-1],uVar12 + 0x28);
              local_68 = ppppuVar15;
            }
          }
        }
        local_78 = local_78 + 1;
        uVar8 = local_80;
        uVar12 = uVar13;
        ppppuVar15 = (undefined8 ****)local_68;
      } while (local_78 < local_70);
    }
    do {
      uVar2 = *param_5;
      uVar12 = (ulonglong)uVar2;
      if (uVar12 <= uVar8) {
        uVar9 = param_5[3];
        _Buf2 = *(void **)(param_5 + 4);
        uVar8 = local_80;
        ppppuVar14 = &local_68;
        if (0xf < uVar13) {
          ppppuVar14 = ppppuVar15;
        }
        for (; local_80 = uVar8, uVar2 <= uVar9; uVar9 = uVar9 - uVar2) {
          iVar5 = memcmp(ppppuVar14,_Buf2,uVar12);
          if (iVar5 == 0) {
            *param_1 = (longlong)(param_3 + uVar12);
            goto LAB_1400e4eac;
          }
          _Buf2 = (void *)((longlong)_Buf2 + uVar12);
          uVar8 = local_80;
        }
      }
      param_5 = *(uint **)(param_5 + 6);
    } while (param_5 != (uint *)0x0);
  }
  *param_1 = (longlong)param_3;
LAB_1400e4eac:
  if (0xf < uVar13) {
    uVar8 = uVar13 + 1;
    ppppuVar14 = ppppuVar15;
    if (0xfff < uVar8) {
      ppppuVar14 = (undefined8 ****)ppppuVar15[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar15 + (-8 - (longlong)ppppuVar14))) {
LAB_1400e4ef3:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar11 = auStack_a0;
LAB_1400e4efa:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar11 + -8) = &UNK_1400e4eff;
        FUN_1400172e0();
      }
      uVar8 = uVar13 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar14,uVar8);
  }
  return param_1;
}

