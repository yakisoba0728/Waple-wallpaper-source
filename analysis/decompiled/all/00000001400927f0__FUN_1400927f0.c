// Function: FUN_1400927f0
// Addr: 1400927f0
// Size: 33 bytes


void FUN_1400927f0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  
  uVar8 = *(ulonglong *)(param_1 + 0x18);
  puVar5 = &uStack_48;
  if ((((int)uVar8 + (int)*(longlong *)(param_1 + 0x20) & 1U) != 0) ||
     (uVar7 = *(ulonglong *)(param_1 + 0x10), puVar5 = &uStack_48,
     *(longlong *)(param_1 + 0x20) + 2U >> 1 < uVar7)) {
code_r0x0001400929e3:
    *(ulonglong *)(param_1 + 0x18) =
         *(ulonglong *)(param_1 + 0x18) & *(longlong *)(param_1 + 0x10) * 2 - 1U;
    uVar8 = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18);
    uVar7 = uVar8 >> 1;
    uVar6 = *(longlong *)(param_1 + 0x10) - 1U & uVar7;
    if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar6 * 8) == 0) {
      *(undefined8 *)((longlong)puVar5 + -8) = 0x140092a1d;
      uVar4 = func_0x00014028aff0(0x10);
      *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar6 * 8) = uVar4;
    }
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar7) * 8) +
     (ulonglong)((uint)uVar8 & 1) * 8) = *param_2;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    return;
  }
  uVar6 = 1;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
  for (; (uVar6 == uVar7 || (uVar6 < 8)); uVar6 = uVar6 * 2) {
    if (0xfffffffffffffff - uVar6 < uVar6) {
      func_0x000140082ff0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (uVar6 < 0x2000000000000000) {
    uVar7 = uVar6 * 8;
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else if (uVar7 < 0x1000) {
      uVar7 = func_0x00014028aff0();
    }
    else {
      if (uVar7 + 0x27 <= uVar7) goto code_r0x000140092a5d;
      lVar2 = func_0x00014028aff0(uVar7 + 0x27);
      if (lVar2 == 0) {
        uVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar5 = (undefined8 *)auStack_40;
        uStack_48 = 0x1400929db;
        func_0x00014028b040(uVar4);
        *(undefined8 *)(param_1 + 8) = unaff_R14;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar6;
        goto code_r0x0001400929e3;
      }
      uVar7 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar7 - 8) = lVar2;
    }
    uVar8 = uVar8 >> 1;
    uVar3 = uVar6 >> 1;
    lVar2 = uVar8 * 8;
    for (; uVar6 <= uVar3; uVar6 = uVar6 * 2) {
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar2 + uVar7,*(longlong *)(param_1 + 8) + lVar2,
                  (*(longlong *)(param_1 + 0x10) - uVar8) * 8);
  }
code_r0x000140092a5d:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

