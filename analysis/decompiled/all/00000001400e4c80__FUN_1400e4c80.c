// Function: FUN_1400e4c80
// Addr: 1400e4c80
// Size: 520 bytes


/* WARNING: Type propagation algorithm not settling */

longlong *
FUN_1400e4c80(longlong *param_1,byte param_2,undefined1 *param_3,undefined1 *param_4,uint *param_5,
             longlong param_6,uint param_7)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *******pppppppuVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  puVar10 = auStack_a8;
  local_58 = 0;
  uVar12 = 0xf;
  local_50 = 0xf;
  uStack_60 = 0;
  local_68 = (undefined8 *******)0x0;
  pppppppuVar14 = local_68;
  if (param_5 != (uint *)0x0) {
    local_68 = (undefined8 *******)(ulonglong)param_2;
    local_80 = 1;
    local_58 = 1;
    uVar7 = 1;
    pppppppuVar14 = local_68;
    if (1 < *param_5) {
      local_78 = 1;
      puVar9 = param_3;
      local_70 = (ulonglong)*param_5;
      do {
        uVar12 = local_50;
        uVar7 = local_58;
        pppppppuVar14 = local_68;
        puVar9 = puVar9 + 1;
        local_80 = local_58;
        if (puVar9 == param_4) break;
        local_88 = *puVar9;
        if ((param_7 & 0x100) != 0) {
          local_88 = (**(code **)(**(longlong **)(param_6 + 8) + 0x20))();
        }
        if (uVar12 <= uVar7) {
          if (uVar7 != 0x7fffffffffffffff) {
            local_80 = uVar7 + 1;
            uVar13 = local_80 | 0xf;
            if (uVar13 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (uVar12 >> 1) < uVar12) {
                uVar13 = 0x8000000000000027;
              }
              else {
                uVar1 = (uVar12 >> 1) + uVar12;
                if (uVar13 < uVar1) {
                  uVar13 = uVar1;
                }
                uVar1 = uVar13 + 1;
                if (uVar1 == 0) {
                  local_58 = local_80;
                  local_50 = uVar13;
                  if (uVar12 < 0x10) {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(0,&local_68,uVar7);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_1404211c0(0,pppppppuVar14,uVar7);
                }
                if (uVar1 < 0x1000) {
                  plVar6 = (longlong *)func_0x00014028aff0(uVar1);
                  return plVar6;
                }
                uVar13 = uVar13 + 0x28;
                if (uVar13 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017440();
                }
              }
            }
            else {
              uVar13 = 0x8000000000000027;
            }
            plVar6 = (longlong *)func_0x00014028aff0(uVar13);
            return plVar6;
          }
          goto UNWIND_INFO_1400e4f06_UnwindCodes_96__OffsetInProlog;
        }
        local_58 = uVar7 + 1;
        pppppppuVar5 = &local_68;
        if (0xf < uVar12) {
          pppppppuVar5 = pppppppuVar14;
        }
        *(undefined1 *)((longlong)pppppppuVar5 + uVar7) = local_88;
        *(undefined1 *)((longlong)pppppppuVar5 + uVar7 + 1) = 0;
        local_78 = local_78 + 1;
        uVar7 = local_58;
        uVar12 = local_50;
        pppppppuVar14 = local_68;
        local_80 = local_58;
      } while (local_78 < local_70);
    }
    do {
      uVar2 = *param_5;
      uVar13 = (ulonglong)uVar2;
      if (uVar13 <= uVar7) {
        uVar8 = param_5[3];
        lVar11 = *(longlong *)(param_5 + 4);
        uVar7 = local_80;
        pppppppuVar5 = &local_68;
        if (0xf < uVar12) {
          pppppppuVar5 = pppppppuVar14;
        }
        for (; local_80 = uVar7, uVar2 <= uVar8; uVar8 = uVar8 - uVar2) {
          iVar4 = func_0x0001404210c0(pppppppuVar5,lVar11,uVar13);
          if (iVar4 == 0) {
            *param_1 = (longlong)(param_3 + uVar13);
            goto code_r0x0001400e4f7c;
          }
          lVar11 = lVar11 + uVar13;
          uVar7 = local_80;
        }
      }
      param_5 = *(uint **)(param_5 + 6);
    } while (param_5 != (uint *)0x0);
  }
  *param_1 = (longlong)param_3;
code_r0x0001400e4f7c:
  if (0xf < uVar12) {
    uVar7 = uVar12 + 1;
    pppppppuVar5 = pppppppuVar14;
    if (0xfff < uVar7) {
      pppppppuVar5 = (undefined8 *******)pppppppuVar14[-1];
      if (0x1f < (ulonglong)((longlong)pppppppuVar14 + (-8 - (longlong)pppppppuVar5))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar10 = auStack_a0;
UNWIND_INFO_1400e4f06_UnwindCodes_96__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar10 + -8) = 0x1400e4fcf;
        FUN_1400173b0();
      }
      uVar7 = uVar12 + 0x28;
    }
    func_0x00014028b040(pppppppuVar5,uVar7);
  }
  return param_1;
}

