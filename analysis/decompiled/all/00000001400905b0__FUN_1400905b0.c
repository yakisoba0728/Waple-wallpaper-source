// Function: FUN_1400905b0
// Addr: 1400905b0
// Size: 113 bytes


void FUN_1400905b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar10 = auStack_98;
  uVar1 = param_3[2];
  local_50 = 0;
  local_48 = 0xf;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uStack_58 = 0;
  local_60 = 0;
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_68 = uVar1;
  if (&local_60 != param_2) {
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(&local_60,puVar6,param_2[2]);
  }
  uVar12 = *(ulonglong *)(param_1 + 0x38);
  uStack_40 = param_4;
  if (*(longlong *)(param_1 + 0x48) + 1U < uVar12) {
    *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) & uVar12 - 1;
    uVar11 = *(longlong *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40);
    uVar12 = uVar12 - 1 & uVar11;
    if (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar12 * 8) == 0) {
      uVar8 = func_0x00014028aff0(0x40);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar12 * 8) = uVar8;
    }
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 0x30) + (*(longlong *)(param_1 + 0x38) - 1U & uVar11) * 8);
    *puVar6 = uVar4;
    puVar6[1] = uVar5;
    puVar6[2] = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_140017090(puVar6 + 3,&local_60);
  }
  uVar11 = 1;
  if (uVar12 != 0) {
    uVar11 = uVar12;
  }
  for (; (uVar11 == uVar12 || (uVar11 < 8)); uVar11 = uVar11 * 2) {
    if (0x3ffffffffffffff - uVar11 < uVar11) goto code_r0x0001400908f1;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (0x1fffffffffffffff < uVar11) {
code_r0x0001400908f7:
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
  uVar12 = uVar11 * 8;
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else if (uVar12 < 0x1000) {
    uVar12 = func_0x00014028aff0();
  }
  else {
    if (uVar12 + 0x27 <= uVar12) goto code_r0x0001400908f7;
    lVar7 = func_0x00014028aff0(uVar12 + 0x27);
    if (lVar7 == 0) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar10 = auStack_90;
code_r0x0001400908f1:
      *(undefined **)(puVar10 + -8) = &UNK_1400908f6;
      func_0x000140082ff0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = lVar7 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar12 - 8) = lVar7;
  }
  uVar9 = uVar11 >> 1;
  lVar7 = lVar2 * 8;
  for (; uVar11 <= uVar9; uVar11 = uVar11 * 2) {
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(lVar7 + uVar12,*(longlong *)(param_1 + 0x30) + lVar7,
                (*(longlong *)(param_1 + 0x38) - lVar2) * 8);
}

