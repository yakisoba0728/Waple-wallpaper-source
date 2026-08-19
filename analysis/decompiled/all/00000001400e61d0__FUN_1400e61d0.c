// Function: FUN_1400e61d0
// Addr: 1400e61d0
// Size: 338 bytes


void FUN_1400e61d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  puVar7 = &uStack_68;
  lVar1 = *(longlong *)(param_1 + 0x90);
  uVar9 = *(ulonglong *)(param_1 + 0xb0);
  lVar10 = *(longlong *)(param_1 + 0x98) - lVar1;
  if (uVar9 < (ulonglong)(lVar10 >> 5)) {
    lVar10 = uVar9 * 0x20;
    *(undefined4 *)(lVar10 + lVar1) = param_2;
    *(undefined8 *)(lVar10 + 8 + lVar1) = param_3;
    *(undefined8 *)(lVar10 + 0x10 + lVar1) = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (*(ulonglong *)(param_1 + 0xb8) <= uVar9) {
UNWIND_INFO_1400e6379_UnwindCodes_20__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
      FUN_14028c410(0xc);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (*(longlong *)(param_1 + 0x98) == *(longlong *)(param_1 + 0xa0)) {
      uVar8 = *(longlong *)(param_1 + 0xa0) - lVar1 >> 5;
      uVar9 = 0x7ffffffffffffff;
      uVar6 = uVar8 >> 1;
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      if (uVar8 <= 0x7ffffffffffffff - uVar6) {
        uVar9 = uVar6 + uVar8;
      }
      if (uVar9 <= uVar8) goto UNWIND_INFO_1400e6379_UnwindCodes_20__OffsetInProlog;
      if (0x7ffffffffffffff < uVar9) {
UNWIND_INFO_1400e6379_UnwindCodes_25__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      uVar9 = uVar9 * 0x20;
      if (uVar9 == 0) {
        uVar9 = 0;
LAB_1400e62c3:
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar9,lVar1,lVar10);
      }
      if (uVar9 < 0x1000) {
        uVar9 = func_0x00014028aff0(uVar9);
        goto LAB_1400e62c3;
      }
      if (uVar9 + 0x27 <= uVar9) goto UNWIND_INFO_1400e6379_UnwindCodes_25__UnwindOpCode;
      lVar5 = func_0x00014028aff0();
      if (lVar5 != 0) {
        uVar9 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar9 - 8) = lVar5;
        goto LAB_1400e62c3;
      }
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = (undefined8 *)auStack_60;
      uStack_68 = 0x1400e6331;
      func_0x00014028b040(lVar1,uVar8);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x98);
    *puVar3 = *(undefined4 *)((longlong)puVar7 + 0x78);
    puVar3[1] = 0;
    *(undefined8 *)(puVar3 + 2) = param_3;
    *(undefined8 *)(puVar3 + 4) = uVar2;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
  }
  *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
  return;
}

