// Function: FUN_1400166d0
// Addr: 1400166d0
// Size: 77 bytes


ulonglong * FUN_1400166d0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar7 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < param_2[3]) {
    param_2 = (ulonglong *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return param_1;
  }
  uVar3 = uVar1 | 7;
  if (uVar3 < 0x7fffffffffffffff) goto code_r0x00014001677a;
  uVar6 = 0xfffffffffffffffe;
  puVar7 = auStack_48;
  uVar3 = 0x7ffffffffffffffe;
  do {
    if (uVar6 < 0x1000) {
      *(undefined **)(puVar7 + -8) = &UNK_1400167bd;
      uVar5 = func_0x00014028aff0();
      goto code_r0x0001400167bd;
    }
    if (uVar6 + 0x27 <= uVar6) {
code_r0x0001400167ed:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar7 + -8) = 0x1400167f2;
      FUN_140017440();
    }
    *(undefined **)(puVar7 + -8) = &UNK_14001676b;
    lVar4 = func_0x00014028aff0(uVar6 + 0x27);
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
      goto code_r0x0001400167bd;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
code_r0x00014001677a:
    if (uVar3 < 10) {
      uVar3 = 10;
    }
    if (0x7fffffffffffffff < uVar3 + 1) goto code_r0x0001400167ed;
    uVar6 = (uVar3 + 1) * 2;
    if (uVar6 == 0) {
code_r0x0001400167bd:
      *param_1 = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_1400167db;
      FUN_1404211c0(uVar5,param_2,uVar1 * 2 + 2);
    }
  } while( true );
}

