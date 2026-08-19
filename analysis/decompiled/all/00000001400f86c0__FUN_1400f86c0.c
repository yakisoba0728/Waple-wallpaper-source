// Function: FUN_1400f86c0
// Addr: 1400f86c0
// Size: 38 bytes


longlong FUN_1400f86c0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_RDI;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar10;
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 0x10;
    return lVar4;
  }
  lVar4 = *param_1;
  if (param_1[1] - lVar4 == -0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar11 = param_1[2] - lVar4 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar1 = (param_1[1] - lVar4 >> 4) + 1;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (uVar12 < 0x1000000000000000) {
      uVar12 = uVar12 * 0x10;
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else if (uVar12 < 0x1000) {
        uVar11 = func_0x00014028aff0(uVar12);
      }
      else {
        if (uVar12 + 0x27 <= uVar12) goto code_r0x0001400f9b07;
        lVar9 = func_0x00014028aff0();
        if (lVar9 == 0) {
          pcVar5 = (code *)swi(0x29);
          uVar10 = (*pcVar5)(5);
          func_0x00014028b040(uVar10);
          *param_1 = unaff_RDI;
          param_1[1] = uVar1 * 0x10 + unaff_RDI;
          param_1[2] = uVar12 + unaff_RDI;
          return lVar4;
        }
        uVar11 = lVar9 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar11 - 8) = lVar9;
      }
      uVar6 = *(undefined4 *)((longlong)param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 1);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar2 = (undefined4 *)(((longlong)puVar3 - lVar4 & 0xfffffffffffffff0U) + uVar11);
      *puVar2 = *(undefined4 *)param_2;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      lVar4 = *param_1;
      if (puVar3 == (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar11,lVar4,param_1[1] - lVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar11,lVar4,(longlong)puVar3 - lVar4);
    }
  }
code_r0x0001400f9b07:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

