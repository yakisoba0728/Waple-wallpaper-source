// Function: FUN_14013f010
// Addr: 14013f010
// Size: 494 bytes


void FUN_14013f010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong *local_res20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined4 *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 ******local_60 [3];
  ulonglong local_48;
  longlong local_40 [3];
  ulonglong local_28;
  
  puVar12 = auStack_a8;
  FUN_140005950(local_60);
  pppppppuVar10 = local_60;
  if (7 < local_48) {
    pppppppuVar10 = (undefined8 *******)local_60[0];
  }
  iVar4 = (*DAT_140426b98)(pppppppuVar10,local_80);
  if (iVar4 < 0) {
UNWIND_INFO_14013f1c9_UnwindCodes_16__OffsetInProlog:
    if (local_48 < 8) {
      return;
    }
    uVar11 = local_48 * 2 + 2;
    pppppppuVar10 = (undefined8 *******)local_60[0];
    if (uVar11 < 0x1000) {
code_r0x00014013f22a:
      func_0x00014028b040(pppppppuVar10,uVar11);
      return;
    }
    pppppppuVar10 = (undefined8 *******)local_60[0][-1];
    if ((ulonglong)((longlong)local_60[0] + (-8 - (longlong)pppppppuVar10)) < 0x20) {
      uVar11 = local_48 * 2 + 0x29;
      goto code_r0x00014013f22a;
    }
  }
  else {
    local_res20 = (longlong *)0x0;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                      (*(longlong **)(param_1 + 0x20),local_80,&local_res20);
    if (iVar4 < 0) goto UNWIND_INFO_14013f1c9_UnwindCodes_16__OffsetInProlog;
    puVar6 = (undefined8 *)FUN_140005950(local_40,param_3);
    if (7 < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    uVar5 = FUN_1402d6b70(puVar6);
    if (uVar5 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar13 = (ulonglong)uVar5;
      uVar11 = uVar13 * 2 + 0x20;
      if (0xffffffff < uVar11) {
        FUN_140141510(local_70,"length");
        func_0x0001402bbb30(local_70,&DAT_1404d8860);
        return;
      }
      uVar8 = FUN_1402ed5b4();
      puVar7 = (undefined4 *)FUN_1402ed5ae(uVar8,0,uVar11);
      if (puVar7 == (undefined4 *)0x0) goto LAB_14013f254;
      puVar1 = puVar7 + 7;
      *puVar7 = 0;
      *(undefined4 **)(puVar7 + 4) = puVar1;
      puVar7[1] = uVar5;
      LOCK();
      puVar7[6] = 1;
      UNLOCK();
      *(undefined2 *)((longlong)puVar7 + uVar13 * 2 + 0x1c) = 0;
      if (uVar13 != 0) {
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402cb004();
        }
        if (puVar6 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar1,puVar6);
        }
        func_0x000140421870(puVar1,0);
        return;
      }
    }
    local_88 = puVar7;
    if (local_28 < 8) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))
                (*(longlong **)(param_1 + 0x20),&local_88);
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
        local_res20 = (longlong *)0x0;
      }
      puVar7 = local_88;
      if (local_88 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = local_88 + 6;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar8 = FUN_1402ed5b4();
          func_0x0001402ed5a8(uVar8,0,puVar7);
        }
        else if (iVar4 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
      }
      goto UNWIND_INFO_14013f1c9_UnwindCodes_16__OffsetInProlog;
    }
    uVar11 = local_28 * 2 + 2;
    lVar9 = local_40[0];
    if (uVar11 < 0x1000) {
LAB_14013f18c:
      func_0x00014028b040(lVar9,uVar11);
      return;
    }
    lVar9 = *(longlong *)(local_40[0] + -8);
    if ((local_40[0] - lVar9) - 8U < 0x20) {
      uVar11 = local_28 * 2 + 0x29;
      goto LAB_14013f18c;
    }
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar12 = auStack_a0;
LAB_14013f254:
  *(undefined8 *)(puVar12 + -8) = 0x14013f25e;
  FUN_1401414f0(puVar12 + 0x38);
  *(undefined **)(puVar12 + -8) = &UNK_14013f26f;
  func_0x0001402bbb30(puVar12 + 0x38,&DAT_1404d8840);
  return;
}

