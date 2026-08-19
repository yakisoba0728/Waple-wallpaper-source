// Function: FUN_1402ed844
// Addr: 1402ed844
// Size: 17 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1402ed844(ulonglong param_1,ulonglong param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  uint auStack_48 [6];
  
  puVar7 = auStack_68;
  uVar4 = func_0x0001402ed7b0(auStack_48,auStack_48 + 1);
  if (uVar4 == 0) {
    *param_4 = 4;
    return;
  }
  if (DAT_1404e4fe8 == 0) {
    DAT_1404e4fe8 = 1;
    puVar7 = auStack_68;
    if ((auStack_48[1] & 0x80000000) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar7 = auStack_60;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1402ed8b5;
    func_0x0001402ed718(uVar4,*(undefined4 *)(puVar7 + 0x20));
  }
  if (param_1 == 0) {
    if (param_2 != 0) goto code_r0x0001402ed8c6;
code_r0x0001402ed8f6:
    param_2 = (ulonglong)*(uint *)(puVar7 + 0x20);
  }
  else {
    puVar2 = puVar7;
    if (param_2 == 0) {
code_r0x0001402ed8c6:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = puVar7 + 8;
      puVar7 = puVar7 + 8;
      puVar2 = puVar6;
      if (param_1 == 0) goto code_r0x0001402ed8f6;
    }
    puVar7 = puVar2;
    uVar5 = *(uint *)(puVar7 + 0x20) + uVar4;
    if ((((uVar5 <= uVar4) || (param_1 + param_2 <= param_1)) || (param_1 < uVar4)) ||
       (uVar4 = param_1, uVar5 < param_1 + param_2)) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar7 = puVar7 + 8;
      uVar4 = param_1;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1402ed90f;
  iVar3 = (*DAT_1404264a8)(uVar4,param_2,param_3,param_4);
  if (iVar3 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
  }
  return;
}

