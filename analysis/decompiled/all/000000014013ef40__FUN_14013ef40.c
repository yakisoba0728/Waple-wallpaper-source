// Function: FUN_14013ef40
// Addr: 14013ef40
// Size: 646 bytes


void FUN_14013ef40(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  HRESULT HVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  HANDLE pvVar9;
  longlong lVar10;
  LPCOLESTR ******pppppppOVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong *local_res20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined4 *local_88;
  IID local_80;
  undefined1 local_70 [16];
  LPCOLESTR *****local_60 [3];
  ulonglong local_48;
  longlong local_40 [3];
  ulonglong local_28;
  
  puVar13 = auStack_a8;
  FUN_140005880(local_60);
  pppppppOVar11 = local_60;
  if (7 < local_48) {
    pppppppOVar11 = (LPCOLESTR ******)local_60[0];
  }
  HVar3 = IIDFromString((LPCOLESTR)pppppppOVar11,&local_80);
  if (HVar3 < 0) {
LAB_14013f11d:
    if (local_48 < 8) {
      return;
    }
    uVar12 = local_48 * 2 + 2;
    pppppppOVar11 = (LPCOLESTR ******)local_60[0];
    if (uVar12 < 0x1000) {
LAB_14013f15a:
      thunk_FUN_14028af80(pppppppOVar11,uVar12);
      return;
    }
    pppppppOVar11 = (LPCOLESTR ******)local_60[0][-1];
    if ((ulonglong)((longlong)local_60[0] + (-8 - (longlong)pppppppOVar11)) < 0x20) {
      uVar12 = local_48 * 2 + 0x29;
      goto LAB_14013f15a;
    }
  }
  else {
    local_res20 = (longlong *)0x0;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
                      (*(longlong **)(param_1 + 0x20),&local_80,&local_res20);
    if (iVar4 < 0) goto LAB_14013f11d;
    puVar6 = (undefined8 *)FUN_140005880(local_40);
    if (7 < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    uVar5 = FUN_1402d6aa0(puVar6);
    if (uVar5 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar14 = (ulonglong)uVar5;
      uVar12 = uVar14 * 2 + 0x20;
      if (0xffffffff < uVar12) {
        FUN_140141440(local_70,"length");
                    /* WARNING: Subroutine does not return */
        FUN_1402bba60(local_70,&DAT_1404d8790);
      }
      pvVar9 = GetProcessHeap();
      puVar7 = HeapAlloc(pvVar9,0,uVar12);
      if (puVar7 == (undefined4 *)0x0) goto LAB_14013f184;
      puVar8 = puVar7 + 7;
      *puVar7 = 0;
      *(undefined4 **)(puVar7 + 4) = puVar8;
      puVar7[1] = uVar5;
      LOCK();
      puVar7[6] = 1;
      UNLOCK();
      *(undefined2 *)((longlong)puVar7 + uVar14 * 2 + 0x1c) = 0;
      if (uVar14 != 0) {
        if (puVar8 != (undefined4 *)0x0) {
          if (puVar6 != (undefined8 *)0x0) {
            FUN_1404210f0(puVar8,puVar6);
            goto LAB_14013f073;
          }
          FUN_1404217a0(puVar8,0);
        }
        puVar8 = (undefined4 *)FUN_1402caf34();
        *puVar8 = 0x16;
        FUN_1402cad8c();
      }
    }
LAB_14013f073:
    local_88 = puVar7;
    if (local_28 < 8) {
LAB_14013f0c1:
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))();
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
        local_res20 = (longlong *)0x0;
      }
      puVar7 = local_88;
      if (local_88 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_88 + 6;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,puVar7);
        }
        else if (iVar4 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
      }
      goto LAB_14013f11d;
    }
    uVar12 = local_28 * 2 + 2;
    lVar10 = local_40[0];
    if (uVar12 < 0x1000) {
LAB_14013f0bc:
      thunk_FUN_14028af80(lVar10,uVar12);
      goto LAB_14013f0c1;
    }
    lVar10 = *(longlong *)(local_40[0] + -8);
    if ((local_40[0] - lVar10) - 8U < 0x20) {
      uVar12 = local_28 * 2 + 0x29;
      goto LAB_14013f0bc;
    }
  }
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar13 = auStack_a0;
LAB_14013f184:
  *(undefined8 *)(puVar13 + -8) = 0x14013f18e;
  FUN_140141420(puVar13 + 0x38);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_14013f19f;
  FUN_1402bba60(puVar13 + 0x38,&DAT_1404d8770);
}

