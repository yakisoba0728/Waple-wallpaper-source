// Function: FUN_1400e5480
// Addr: 1400e5480
// Size: 528 bytes


longlong FUN_1400e5480(byte param_1,longlong param_2,undefined1 *param_3,uint *param_4,
                      longlong param_5,uint param_6)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
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
  
  puVar10 = auStack_98;
  local_50 = 0;
  uVar13 = 0xf;
  local_48 = 0xf;
  uStack_58 = 0;
  local_60 = (undefined8 ****)0x0;
  ppppuVar7 = (undefined8 ****)local_60;
  if (param_4 != (uint *)0x0) {
    local_70 = 1;
    local_50 = 1;
    local_60 = (undefined8 ***)(ulonglong)param_1;
    ppppuVar7 = (undefined8 ****)local_60;
    uVar8 = 1;
    if (1 < *param_4) {
      local_78 = (undefined1 *)(param_2 + 1);
      local_res20 = 1;
      local_68 = (ulonglong)*param_4;
      do {
        uVar13 = local_48;
        uVar8 = local_50;
        pppuVar4 = local_60;
        ppppuVar7 = (undefined8 ****)local_60;
        local_70 = local_50;
        if (local_78 == param_3) break;
        uVar5 = *local_78;
        if ((param_6 & 0x100) != 0) {
          uVar5 = (**(code **)(**(longlong **)(param_5 + 8) + 0x20))
                            (*(longlong **)(param_5 + 8),uVar5);
        }
        if (uVar13 <= uVar8) {
          if (uVar8 != 0x7fffffffffffffff) {
            local_70 = uVar8 + 1;
            uVar14 = local_70 | 0xf;
            if (uVar14 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (uVar13 >> 1) < uVar13) {
                uVar14 = 0x8000000000000027;
              }
              else {
                uVar1 = (uVar13 >> 1) + uVar13;
                if (uVar14 < uVar1) {
                  uVar14 = uVar1;
                }
                uVar1 = uVar14 + 1;
                if (uVar1 == 0) {
                  local_50 = local_70;
                  local_48 = uVar14;
                  if (0xf < uVar13) {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(0,pppuVar4,uVar8);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_1404211c0(0,&local_60,uVar8);
                }
                if (uVar1 < 0x1000) {
                  lVar12 = func_0x00014028aff0(uVar1);
                  return lVar12;
                }
                uVar14 = uVar14 + 0x28;
                if (uVar14 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017440();
                }
              }
            }
            else {
              uVar14 = 0x8000000000000027;
            }
            lVar12 = func_0x00014028aff0(uVar14);
            return lVar12;
          }
          goto LAB_1400e57bc;
        }
        local_50 = uVar8 + 1;
        ppppuVar7 = &local_60;
        if (0xf < uVar13) {
          ppppuVar7 = (undefined8 ****)pppuVar4;
        }
        *(undefined1 *)((longlong)ppppuVar7 + uVar8) = uVar5;
        *(undefined1 *)((longlong)ppppuVar7 + uVar8 + 1) = 0;
        local_70 = local_50;
        local_res20 = local_res20 + 1;
        local_78 = local_78 + 1;
        ppppuVar7 = (undefined8 ****)local_60;
        uVar8 = local_50;
        uVar13 = local_48;
      } while (local_res20 < local_68);
    }
    do {
      uVar2 = *param_4;
      uVar14 = (ulonglong)uVar2;
      if (uVar14 <= uVar8) {
        uVar9 = param_4[3];
        lVar12 = *(longlong *)(param_4 + 4);
        uVar8 = local_70;
        ppppuVar11 = &local_60;
        if (0xf < uVar13) {
          ppppuVar11 = ppppuVar7;
        }
        for (; local_70 = uVar8, uVar2 <= uVar9; uVar9 = uVar9 - uVar2) {
          iVar6 = func_0x0001404210c0(ppppuVar11,lVar12,uVar14);
          if (iVar6 == 0) {
            param_2 = param_2 + uVar14;
            goto LAB_1400e5753;
          }
          lVar12 = lVar12 + uVar14;
          uVar8 = local_70;
        }
      }
      param_4 = *(uint **)(param_4 + 6);
    } while (param_4 != (uint *)0x0);
  }
LAB_1400e5753:
  if (0xf < uVar13) {
    uVar8 = uVar13 + 1;
    ppppuVar11 = ppppuVar7;
    if (0xfff < uVar8) {
      ppppuVar11 = (undefined8 ****)ppppuVar7[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar11))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = auStack_90;
LAB_1400e57bc:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_1400e57c1;
        FUN_1400173b0();
      }
      uVar8 = uVar13 + 0x28;
    }
    func_0x00014028b040(ppppuVar11,uVar8);
  }
  return param_2;
}

