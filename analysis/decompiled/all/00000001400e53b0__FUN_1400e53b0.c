// Function: FUN_1400e53b0
// Addr: 1400e53b0
// Size: 834 bytes


longlong FUN_1400e53b0(byte param_1,longlong param_2,undefined1 *param_3,uint *param_4,
                      longlong param_5,uint param_6)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  void *_Buf2;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong local_res20;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 ***local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_50 = 0;
  uVar15 = 0xf;
  local_48 = 0xf;
  uStack_58 = 0;
  local_60 = (undefined8 ****)0x0;
  ppppuVar11 = (undefined8 ****)local_60;
  if (param_4 != (uint *)0x0) {
    local_70 = 1;
    local_50 = 1;
    local_60 = (undefined8 ***)(ulonglong)param_1;
    ppppuVar11 = (undefined8 ****)local_60;
    uVar9 = 1;
    if (1 < *param_4) {
      local_78 = (undefined1 *)(param_2 + 1);
      local_res20 = 1;
      uVar14 = 1;
      uVar16 = uVar15;
      local_68 = (ulonglong)*param_4;
      do {
        pppuVar4 = local_60;
        ppppuVar11 = (undefined8 ****)local_60;
        uVar9 = uVar14;
        uVar15 = uVar16;
        if (local_78 == param_3) break;
        uVar5 = *local_78;
        if ((param_6 & 0x100) != 0) {
          uVar5 = (**(code **)(**(longlong **)(param_5 + 8) + 0x20))
                            (*(longlong **)(param_5 + 8),uVar5);
        }
        if (uVar14 < uVar16) {
          local_50 = uVar14 + 1;
          ppppuVar11 = &local_60;
          if (0xf < uVar16) {
            ppppuVar11 = (undefined8 ****)pppuVar4;
          }
          *(undefined1 *)((longlong)ppppuVar11 + uVar14) = uVar5;
          *(undefined1 *)((longlong)ppppuVar11 + uVar14 + 1) = 0;
          local_70 = local_50;
          uVar9 = local_50;
          uVar15 = local_48;
        }
        else {
          if (uVar14 == 0x7fffffffffffffff) goto LAB_1400e56ec;
          uVar9 = uVar14 + 1;
          uVar15 = uVar9 | 0xf;
          local_70 = uVar9;
          if (uVar15 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar16 >> 1) < uVar16) {
              uVar15 = 0x7fffffffffffffff;
              uVar8 = 0x8000000000000027;
              goto LAB_1400e5551;
            }
            uVar8 = (uVar16 >> 1) + uVar16;
            if (uVar15 < uVar8) {
              uVar15 = uVar8;
            }
            uVar1 = uVar15 + 1;
            if (uVar1 == 0) {
              ppppuVar11 = (undefined8 ****)0x0;
            }
            else {
              if (0xfff < uVar1) {
                uVar8 = uVar15 + 0x28;
                if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1400e5551;
              }
              ppppuVar11 = (undefined8 ****)FUN_14028af20(uVar1);
            }
          }
          else {
            uVar15 = 0x7fffffffffffffff;
            uVar8 = 0x8000000000000027;
LAB_1400e5551:
            pppuVar7 = (undefined8 ***)FUN_14028af20(uVar8);
            if (pppuVar7 == (undefined8 ***)0x0) goto LAB_1400e56e5;
            ppppuVar11 = (undefined8 ****)((longlong)pppuVar7 + 0x27U & 0xffffffffffffffe0);
            ppppuVar11[-1] = pppuVar7;
          }
          local_50 = uVar9;
          local_48 = uVar15;
          if (uVar16 < 0x10) {
            FUN_1404210f0(ppppuVar11,&local_60,uVar14);
            *(undefined1 *)((longlong)ppppuVar11 + uVar14) = uVar5;
            *(undefined1 *)((longlong)ppppuVar11 + uVar14 + 1) = 0;
            local_60 = ppppuVar11;
          }
          else {
            FUN_1404210f0(ppppuVar11,pppuVar4,uVar14);
            *(undefined1 *)((longlong)ppppuVar11 + uVar14) = uVar5;
            *(undefined1 *)((longlong)ppppuVar11 + uVar14 + 1) = 0;
            if (uVar16 + 1 < 0x1000) {
              thunk_FUN_14028af80(pppuVar4);
              local_60 = ppppuVar11;
            }
            else {
              if (0x1f < (ulonglong)((longlong)pppuVar4 + (-8 - (longlong)pppuVar4[-1])))
              goto LAB_1400e56e5;
              thunk_FUN_14028af80(pppuVar4[-1],uVar16 + 0x28);
              local_60 = ppppuVar11;
            }
          }
        }
        local_res20 = local_res20 + 1;
        local_78 = local_78 + 1;
        ppppuVar11 = (undefined8 ****)local_60;
        uVar14 = uVar9;
        uVar16 = uVar15;
      } while (local_res20 < local_68);
    }
    do {
      uVar2 = *param_4;
      uVar14 = (ulonglong)uVar2;
      if (uVar14 <= uVar9) {
        uVar10 = param_4[3];
        _Buf2 = *(void **)(param_4 + 4);
        uVar9 = local_70;
        ppppuVar13 = &local_60;
        if (0xf < uVar15) {
          ppppuVar13 = ppppuVar11;
        }
        for (; local_70 = uVar9, uVar2 <= uVar10; uVar10 = uVar10 - uVar2) {
          iVar6 = memcmp(ppppuVar13,_Buf2,uVar14);
          if (iVar6 == 0) {
            param_2 = param_2 + uVar14;
            goto LAB_1400e5683;
          }
          _Buf2 = (void *)((longlong)_Buf2 + uVar14);
          uVar9 = local_70;
        }
      }
      param_4 = *(uint **)(param_4 + 6);
    } while (param_4 != (uint *)0x0);
  }
LAB_1400e5683:
  if (0xf < uVar15) {
    uVar9 = uVar15 + 1;
    ppppuVar13 = ppppuVar11;
    if (0xfff < uVar9) {
      ppppuVar13 = (undefined8 ****)ppppuVar11[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar11 + (-8 - (longlong)ppppuVar13))) {
LAB_1400e56e5:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar12 = auStack_90;
LAB_1400e56ec:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar12 + -8) = &UNK_1400e56f1;
        FUN_1400172e0();
      }
      uVar9 = uVar15 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar13,uVar9);
  }
  return param_2;
}

