// Function: FUN_1401a3040
// Addr: 1401a3040
// Size: 58 bytes


void FUN_1401a3040(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 0x2000000000000000) {
    param_2 = param_2 * 8;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else if (param_2 < 0x1000) {
      uVar3 = func_0x00014028aff0(param_2);
    }
    else {
      if (param_2 + 0x27 <= param_2) goto UNWIND_INFO_1401a307c_UnwindCodes_33__OffsetInProlog;
      lVar2 = func_0x00014028aff0();
      lVar4 = lVar2;
      if (lVar2 == 0) {
        lVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
      }
      uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar4;
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + param_2;
    return;
  }
UNWIND_INFO_1401a307c_UnwindCodes_33__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

