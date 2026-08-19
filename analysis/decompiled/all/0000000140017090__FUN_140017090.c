// Function: FUN_140017090
// Addr: 140017090
// Size: 59 bytes


ulonglong * FUN_140017090(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < param_2[3]) {
    param_2 = (ulonglong *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    return param_1;
  }
  uVar4 = uVar2 | 0xf;
  if (uVar4 < 0x8000000000000000) goto code_r0x000140017125;
  uVar7 = 0x8000000000000027;
  puVar8 = auStack_48;
  uVar4 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar8 + -8) = 0x140017116;
    lVar5 = func_0x00014028aff0(uVar7);
    if (lVar5 != 0) break;
    pcVar3 = (code *)swi(0x29);
    uVar4 = (*pcVar3)(5);
    puVar8 = puVar8 + 8;
code_r0x000140017125:
    if (uVar4 < 0x16) {
      uVar4 = 0x16;
    }
    uVar1 = uVar4 + 1;
    if (uVar1 == 0) goto code_r0x00014001716b;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x14001716b;
      uVar6 = func_0x00014028aff0(uVar1);
      goto code_r0x00014001716b;
    }
    uVar7 = uVar4 + 0x28;
    if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar8 + -8) = 0x14001719d;
      FUN_140017440();
    }
  }
  uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar5;
code_r0x00014001716b:
  *param_1 = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar8 + -8) = 0x140017185;
  FUN_1404211c0(uVar6,param_2,uVar2 + 1);
}

