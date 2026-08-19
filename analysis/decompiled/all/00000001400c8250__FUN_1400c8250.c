// Function: FUN_1400c8250
// Addr: 1400c8250
// Size: 201 bytes


undefined8 FUN_1400c8250(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  iVar5 = func_0x000140290e50(param_1 + 0x450);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  lVar2 = *(longlong *)(param_1 + 0x4c0);
  uVar6 = *(ulonglong *)(param_1 + 0x4d8) &
          ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3;
  plVar3 = *(longlong **)(param_1 + 0x4b0);
  plVar7 = *(longlong **)(lVar2 + 8 + uVar6 * 0x10);
  if (plVar7 != plVar3) {
    iVar5 = (int)plVar7[2];
    while ((int)param_2 != iVar5) {
      if (plVar7 == *(longlong **)(lVar2 + uVar6 * 0x10))
      goto UNWIND_INFO_1400c831c_UnwindCodes_86__OffsetInProlog;
      plVar7 = (longlong *)plVar7[1];
      iVar5 = (int)plVar7[2];
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = plVar3;
    }
    if (plVar7 != plVar3) {
      uVar6 = *(ulonglong *)(param_1 + 0x4d8) &
              (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3;
      plVar4 = *(longlong **)(lVar2 + uVar6 * 0x10);
      if (*(longlong **)(lVar2 + 8 + uVar6 * 0x10) == plVar7) {
        if (plVar4 == plVar7) {
          *(longlong **)(lVar2 + uVar6 * 0x10) = plVar3;
          *(longlong **)(lVar2 + 8 + uVar6 * 0x10) = plVar3;
        }
        else {
          *(longlong *)(lVar2 + 8 + uVar6 * 0x10) = plVar7[1];
        }
      }
      else if (plVar4 == plVar7) {
        *(longlong *)(lVar2 + uVar6 * 0x10) = *plVar7;
      }
      lVar2 = *plVar7;
      *(longlong *)(param_1 + 0x4b8) = *(longlong *)(param_1 + 0x4b8) + -1;
      *(longlong *)plVar7[1] = lVar2;
      *(longlong *)(lVar2 + 8) = plVar7[1];
      func_0x0001400cd600();
      *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + -1;
      if (*(longlong *)(param_1 + 0x4b8) == 0) {
        func_0x0001400c8f30(param_1);
      }
    }
  }
UNWIND_INFO_1400c831c_UnwindCodes_86__OffsetInProlog:
  piVar1 = (int *)(param_1 + 0x49c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x498) = 0xffffffff;
    (*DAT_140426298)(param_1 + 0x460);
  }
  return 0;
}

