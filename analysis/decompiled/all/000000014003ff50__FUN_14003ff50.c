// Function: FUN_14003ff50
// Addr: 14003ff50
// Size: 64 bytes


void FUN_14003ff50(undefined8 *param_1)

{
  short *psVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  short *psVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  int aiStack_38 [2];
  undefined **ppuStack_30;
  undefined1 auStack_28 [32];
  
  uVar2 = param_1[3];
  puVar9 = param_1;
  if (7 < uVar2) {
    puVar9 = (undefined8 *)*param_1;
  }
  uVar3 = param_1[2];
  psVar8 = (short *)((longlong)puVar9 + uVar3 * 2);
  for (psVar5 = (short *)FUN_140015f60(puVar9); psVar5 != psVar8; psVar5 = psVar5 + 1) {
    if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) goto code_r0x00014003ffb0;
  }
LAB_14003ffcf:
  uVar6 = (longlong)psVar8 - (longlong)puVar9 >> 1;
  if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_140012a10();
  }
  param_1[2] = uVar6;
  puVar7 = param_1;
  if (7 < uVar2) {
    puVar7 = (undefined8 *)*param_1;
  }
  aiStack_38[0] = 0;
  *(undefined2 *)(((longlong)psVar8 - (longlong)puVar9 & 0xfffffffffffffffeU) + (longlong)puVar7) =
       0;
  ppuStack_30 = &PTR_DAT_1404df600;
  func_0x000140052090(auStack_28,param_1,aiStack_38);
  if (aiStack_38[0] == 0) {
    func_0x000140016630(param_1,auStack_28);
                    /* WARNING: Subroutine does not return */
    FUN_140016840(auStack_28);
  }
  func_0x000140053c90();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_r0x00014003ffb0:
  psVar1 = psVar8 + -1;
  if (psVar8[-1] == 0x5c) goto LAB_14003ffcf;
  if ((psVar8[-1] == 0x2f) || (psVar8 = psVar1, psVar5 == psVar1)) goto LAB_14003ffcf;
  goto code_r0x00014003ffb0;
}

