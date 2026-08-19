// Function: FUN_140016a10
// Addr: 140016a10
// Size: 65 bytes


ulonglong * FUN_140016a10(ulonglong *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar7 = auStack_48;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (param_2 < 0x10) {
    param_1[2] = param_2;
    param_1[3] = 0xf;
    func_0x000140421870(0,(int)param_3,param_2);
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return param_1;
  }
  uVar3 = param_2 | 0xf;
  if (uVar3 < 0x8000000000000000) goto code_r0x000140016aa2;
  uVar6 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined **)(puVar7 + -8) = &UNK_140016a96;
    lVar4 = func_0x00014028aff0(uVar6);
    if (lVar4 != 0) break;
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
code_r0x000140016aa2:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) goto code_r0x000140016ae6;
    if (uVar1 < 0x1000) {
      *(undefined **)(puVar7 + -8) = &UNK_140016ae3;
      uVar5 = func_0x00014028aff0(uVar1);
      goto code_r0x000140016ae6;
    }
    uVar6 = uVar3 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_140016b1c;
      FUN_140017440();
    }
  }
  uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar4;
code_r0x000140016ae6:
  *param_1 = uVar5;
  param_1[2] = param_2;
  param_1[3] = uVar3;
  *(undefined **)(puVar7 + -8) = &UNK_140016aff;
  func_0x000140421870(uVar5,(int)param_3,param_2);
  *(undefined1 *)(uVar5 + param_2) = 0;
  return param_1;
}

