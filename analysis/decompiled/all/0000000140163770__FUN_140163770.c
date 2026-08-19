// Function: FUN_140163770
// Addr: 140163770
// Size: 256 bytes


undefined8 FUN_140163770(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [88];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_a8 [16];
  
  puVar6 = auStack_148;
  local_a8[1] = 0;
  local_a8[2] = 2;
  local_a8[3] = 0xf;
  local_a8[0] = (ulonglong)DAT_14048bae4;
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  if (((1 < (ulonglong)param_2[2]) &&
      (lVar8 = param_2[2] + (longlong)puVar7, lVar2 = FUN_14028f4c0(puVar7,lVar8,local_a8,2),
      lVar2 != lVar8)) && (lVar2 - (longlong)puVar7 != -1)) {
    uVar5 = (lVar2 - (longlong)puVar7) + 2;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    if (uVar5 <= (ulonglong)param_2[2]) {
      lVar2 = param_2[2] - uVar5;
      lVar8 = -1;
      if (lVar2 != -1) {
        lVar8 = lVar2;
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      uVar3 = func_0x000140017550(&local_e8,(longlong)param_2 + uVar5,lVar8);
      return uVar3;
    }
LAB_1401640dd:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_1401640e2;
    FUN_140012a10();
  }
  if (0xf < local_a8[3]) {
    uVar5 = local_a8[3] + 1;
    uVar4 = local_a8[0];
    if (0xfff < uVar5) {
      uVar4 = *(ulonglong *)(local_a8[0] - 8);
      if (0x1f < (local_a8[0] - uVar4) - 8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_140;
        goto LAB_1401640dd;
      }
      uVar5 = local_a8[3] + 0x28;
    }
    func_0x00014028b040(uVar4,uVar5);
  }
  return 0;
}

