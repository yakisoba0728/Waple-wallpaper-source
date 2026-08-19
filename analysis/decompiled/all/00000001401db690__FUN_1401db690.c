// Function: FUN_1401db690
// Addr: 1401db690
// Size: 241 bytes


void FUN_1401db690(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  lVar1 = *param_1;
  lVar6 = (param_1[1] - lVar1 >> 2) * -0x5555555555555555;
  if (lVar6 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = (param_1[2] - lVar1 >> 2) * -0x5555555555555555;
  uVar3 = 0x1555555555555555 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar3 < 0x1555555555555556) {
      uVar3 = uVar3 * 0xc;
      if (uVar3 == 0) {
        uVar4 = 0;
        puVar5 = auStack_38;
      }
      else {
        if (uVar3 < 0x1000) {
          func_0x00014028aff0();
          return;
        }
        if (uVar3 + 0x27 <= uVar3) goto UNWIND_INFO_1401db7af_UnwindCodes_53__UnwindOpCode;
        lVar6 = func_0x00014028aff0(uVar3 + 0x27);
        if (lVar6 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar6 = (*pcVar2)(5);
          puVar5 = auStack_30;
        }
        uVar4 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar6;
      }
      lVar1 = (param_2 - lVar1) / 0xc;
      *(undefined8 *)(uVar4 + lVar1 * 0xc) = *param_3;
      *(undefined4 *)(uVar4 + lVar1 * 0xc + 8) = *(undefined4 *)(param_3 + 1);
      lVar1 = param_1[1];
      lVar6 = *param_1;
      if (param_2 == lVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar5 + -8) = 0x1401db7e6;
        FUN_1404211c0(uVar4,lVar6,lVar1 - lVar6);
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar5 + -8) = 0x1401db7d3;
      FUN_1404211c0(uVar4,lVar6,param_2 - lVar6);
    }
  }
UNWIND_INFO_1401db7af_UnwindCodes_53__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

