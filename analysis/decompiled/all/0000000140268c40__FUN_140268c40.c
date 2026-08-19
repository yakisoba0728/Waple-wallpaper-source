// Function: FUN_140268c40
// Addr: 140268c40
// Size: 65 bytes


undefined8 FUN_140268c40(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong unaff_RSI;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_140017090(lVar1);
  }
  lVar2 = *param_1;
  lVar7 = (param_1[1] - lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar7 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar5 = (param_1[2] - lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar4 = 0x276276276276276 - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar4 = lVar7 + 1;
    uVar8 = uVar4;
    if (uVar4 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 < 0x276276276276277) {
      uVar8 = uVar8 * 0x68;
      if (uVar8 == 0) {
        uVar5 = 0;
      }
      else if (uVar8 < 0x1000) {
        uVar5 = func_0x00014028aff0(uVar8);
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto code_r0x00014026a38d;
        lVar7 = func_0x00014028aff0();
        if (lVar7 == 0) {
          uVar6 = 5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          func_0x00014028b040(uVar6);
          *param_1 = unaff_RSI;
          param_1[1] = uVar4 * 0x68 + unaff_RSI;
          param_1[2] = uVar8 + unaff_RSI;
          return 0x4ec4ec4ec4ec4ec5;
        }
        uVar5 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140017090(((lVar1 - lVar2) / 0x68) * 0x68 + uVar5,param_2);
    }
  }
code_r0x00014026a38d:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

