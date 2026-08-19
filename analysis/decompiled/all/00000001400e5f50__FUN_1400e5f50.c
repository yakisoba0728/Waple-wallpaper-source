// Function: FUN_1400e5f50
// Addr: 1400e5f50
// Size: 350 bytes


void FUN_1400e5f50(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  puVar7 = &uStack_68;
  lVar1 = *(longlong *)(param_1 + 0x90);
  uVar10 = *(ulonglong *)(param_1 + 0xb0);
  lVar9 = *(longlong *)(param_1 + 0x98) - lVar1;
  if (uVar10 < (ulonglong)(lVar9 >> 5)) {
    lVar9 = uVar10 * 0x20;
    *(undefined4 *)(lVar9 + lVar1) = param_2;
    *(undefined8 *)(lVar9 + 8 + lVar1) = param_3;
    *(undefined8 *)(lVar9 + 0x10 + lVar1) = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (*(ulonglong *)(param_1 + 0xb8) <= uVar10) {
LAB_1400e612e:
                    /* WARNING: Subroutine does not return */
      FUN_14028c410(0xc);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (*(longlong *)(param_1 + 0x98) == *(longlong *)(param_1 + 0xa0)) {
      uVar8 = *(longlong *)(param_1 + 0xa0) - lVar1 >> 5;
      uVar10 = 0x7ffffffffffffff;
      uVar6 = uVar8 >> 1;
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      if (uVar8 <= 0x7ffffffffffffff - uVar6) {
        uVar10 = uVar6 + uVar8;
      }
      if (uVar10 <= uVar8) goto LAB_1400e612e;
      if (0x7ffffffffffffff < uVar10) {
LAB_1400e6139:
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      uVar10 = uVar10 * 0x20;
      if (uVar10 == 0) {
        uVar10 = 0;
LAB_1400e6044:
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar10,lVar1,lVar9);
      }
      if (uVar10 < 0x1000) {
        uVar10 = func_0x00014028aff0(uVar10);
        goto LAB_1400e6044;
      }
      if (uVar10 + 0x27 <= uVar10) goto LAB_1400e6139;
      lVar5 = func_0x00014028aff0();
      if (lVar5 != 0) {
        uVar10 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar5;
        goto LAB_1400e6044;
      }
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = (undefined8 *)auStack_60;
      uStack_68 = 0x1400e60b2;
      func_0x00014028b040(lVar1,uVar8);
    }
    puVar3 = *(undefined4 **)(param_1 + 0x98);
    *puVar3 = *(undefined4 *)((longlong)puVar7 + 0x78);
    *(undefined8 *)(puVar3 + 4) = uVar2;
    puVar3[1] = 0;
    *(undefined8 *)(puVar3 + 2) = param_3;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
  }
  *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
  return;
}

