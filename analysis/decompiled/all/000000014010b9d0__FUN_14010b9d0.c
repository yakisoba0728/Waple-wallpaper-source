// Function: FUN_14010b9d0
// Addr: 14010b9d0
// Size: 428 bytes


void FUN_14010b9d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [144];
  uint local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  
  plVar1 = (longlong *)(param_1 + 0xa8);
  if (plVar1 == param_2) {
    if (*plVar1 == *(longlong *)(param_1 + 0xb0)) {
      return;
    }
    local_f0 = CONCAT31(local_f0._1_3_,7);
    local_f0 = local_f0 & 0xfffffeff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    func_0x00014028aff0(0x10);
    return;
  }
  lVar2 = *param_2;
  lVar5 = *plVar1;
  uVar8 = param_2[1] - lVar2 >> 3;
  uVar4 = *(longlong *)(param_1 + 0xb8) - lVar5 >> 3;
  if (uVar8 <= uVar4) {
    uVar4 = *(longlong *)(param_1 + 0xb0) - lVar5 >> 3;
    if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar5,lVar2,param_2[1] - lVar2 & 0xfffffffffffffff8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar5,lVar2,uVar4 * 8);
  }
  if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  else {
    uVar7 = (uVar4 >> 1) + uVar4;
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
  }
  if (lVar5 == 0) {
    puVar6 = auStack_188;
    if (uVar7 < 0x2000000000000000) {
      uVar7 = uVar7 * 8;
      if (uVar7 == 0) {
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(*plVar1,lVar2,uVar8 * 8);
      }
      if (uVar7 < 0x1000) {
        func_0x00014028aff0(uVar7);
        return;
      }
      puVar6 = auStack_188;
      if (uVar7 < uVar7 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
UNWIND_INFO_14010c3c8_UnwindCodes_3__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar6 + -8) = 0x14010c3d8;
    FUN_140017440();
  }
  uVar4 = uVar4 * 8;
  if (0xfff < uVar4) {
    if (0x1f < (lVar5 - *(longlong *)(lVar5 + -8)) - 8U) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar6 = auStack_180;
      goto UNWIND_INFO_14010c3c8_UnwindCodes_3__UnwindOpCode;
    }
    uVar4 = uVar4 + 0x27;
    lVar5 = *(longlong *)(lVar5 + -8);
  }
  func_0x00014028b040(lVar5,uVar4);
  return;
}

