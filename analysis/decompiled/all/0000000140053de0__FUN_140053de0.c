// Function: FUN_140053de0
// Addr: 140053de0
// Size: 88 bytes


ulonglong * FUN_140053de0(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar7 = auStack_48;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar8 = param_3 - param_2;
  if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar8 < 0x10) {
    param_1[2] = uVar8;
    param_1[3] = 0xf;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(0,param_2,uVar8);
  }
  uVar3 = uVar8 | 0xf;
  if (uVar3 < 0x8000000000000000) goto code_r0x000140053e8f;
  uVar6 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar7 + -8) = 0x140053e83;
    lVar4 = func_0x00014028aff0(uVar6);
    if (lVar4 != 0) break;
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
code_r0x000140053e8f:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) goto code_r0x000140053ed3;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x140053ed0;
      uVar5 = func_0x00014028aff0(uVar1);
      goto code_r0x000140053ed3;
    }
    uVar6 = uVar3 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar7 + -8) = 0x140053f09;
      FUN_140017440();
    }
  }
  uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar4;
code_r0x000140053ed3:
  *param_1 = uVar5;
  param_1[2] = uVar8;
  param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar7 + -8) = 0x140053eec;
  FUN_1404211c0(uVar5,param_2,uVar8);
}

