// Function: FUN_1400770a0
// Addr: 1400770a0
// Size: 111 bytes


void FUN_1400770a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar9 = auStack_48;
  lVar3 = param_2[2];
  if (0x7fffffffffffffffU - lVar3 < *(ulonglong *)(param_3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar7 = (undefined8 *)0x0;
  uVar2 = lVar3 + *(ulonglong *)(param_3 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar2 < 0x10) {
    uVar5 = 0xf;
    puVar7 = param_1;
  }
  else {
    uVar5 = uVar2 | 0xf;
    puVar9 = auStack_48;
    if (uVar5 < 0x8000000000000000) goto code_r0x00014007713f;
    uVar8 = 0x8000000000000027;
    puVar9 = auStack_48;
    uVar5 = 0x7fffffffffffffff;
    while( true ) {
      *(undefined8 *)(puVar9 + -8) = 0x140077133;
      lVar6 = func_0x00014028aff0(uVar8);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = lVar6;
        *param_1 = puVar7;
        goto code_r0x000140077193;
      }
      pcVar4 = (code *)swi(0x29);
      uVar5 = (*pcVar4)(5);
      puVar9 = puVar9 + 8;
code_r0x00014007713f:
      if (uVar5 < 0x16) {
        uVar5 = 0x16;
      }
      uVar1 = uVar5 + 1;
      if (uVar1 == 0) break;
      if (uVar1 < 0x1000) {
        *(undefined8 *)(puVar9 + -8) = 0x140077183;
        puVar7 = (undefined8 *)func_0x00014028aff0(uVar1);
        break;
      }
      uVar8 = uVar5 + 0x28;
      if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar9 + -8) = &UNK_1400771e7;
        FUN_140017440();
      }
    }
    *param_1 = puVar7;
  }
code_r0x000140077193:
  param_1[2] = uVar2;
  param_1[3] = uVar5;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_1400771a9;
  FUN_1404211c0(puVar7,param_2,lVar3);
}

