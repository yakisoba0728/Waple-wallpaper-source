// Function: FUN_140037590
// Addr: 140037590
// Size: 68 bytes


void FUN_140037590(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *unaff_RDI;
  undefined8 local_res18;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)((longlong)(param_1[1] - *param_1) >> 3)) {
    FUN_140032690(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
code_r0x0001400376c0:
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
  uVar2 = param_2 * 8;
  if (uVar2 == 0) {
    unaff_RDI = (undefined8 *)0x0;
code_r0x000140037627:
    uVar3 = *param_1;
    if (param_1[2] - uVar3 == 0) goto code_r0x00014003766e;
    uVar6 = uVar3;
    puVar7 = auStack_28;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) >> 3) * 8)) &&
       (uVar6 = *(ulonglong *)(uVar3 - 8), puVar7 = auStack_28, 0x1f < (uVar3 - uVar6) - 8))
    goto code_r0x00014003765f;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RDI = (undefined8 *)func_0x00014028aff0(uVar2);
      goto code_r0x000140037627;
    }
    if (uVar2 + 0x27 <= uVar2) goto code_r0x0001400376c0;
    lVar5 = func_0x00014028aff0();
    if (lVar5 != 0) {
      unaff_RDI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar5;
      goto code_r0x000140037627;
    }
code_r0x00014003765f:
    pcVar4 = (code *)swi(0x29);
    uVar6 = (*pcVar4)(5);
    puVar7 = auStack_20;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14003766e;
  func_0x00014028b040(uVar6);
code_r0x00014003766e:
  *param_1 = (ulonglong)unaff_RDI;
  puVar1 = unaff_RDI + param_2;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  if (uVar2 != 0) {
    do {
      *unaff_RDI = param_3;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != puVar1);
  }
  return;
}

