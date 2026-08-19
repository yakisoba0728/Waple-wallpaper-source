// Function: FUN_14003b550
// Addr: 14003b550
// Size: 156 bytes


void FUN_14003b550(undefined8 *param_1,uint *param_2)

{
  short *psVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  short *psVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong local_48 [5];
  
  puVar11 = auStack_68;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 >> 10 & 1) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  uVar4 = FUN_1402d6b70(param_2 + 0xb);
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_140016240(local_48,param_2 + 0xb,uVar4);
  uVar10 = param_1[7];
  if (uVar10 < 8) {
    puVar12 = param_1 + 4;
  }
  else {
    puVar12 = (undefined8 *)param_1[4];
  }
  uVar2 = param_1[6];
  psVar9 = (short *)((longlong)puVar12 + uVar2 * 2);
  for (psVar5 = (short *)FUN_140015f60(puVar12); psVar5 != psVar9; psVar5 = psVar5 + 1) {
    if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) goto code_r0x00014003b610;
  }
code_r0x00014003b62c:
  uVar6 = (longlong)psVar9 - (longlong)puVar12 >> 1;
  if (uVar6 <= uVar2) {
    param_1[6] = uVar6;
    if (uVar10 < 8) {
      puVar7 = param_1 + 4;
    }
    else {
      puVar7 = (undefined8 *)param_1[4];
    }
    *(undefined2 *)(((longlong)psVar9 - (longlong)puVar12 & 0xfffffffffffffffeU) + (longlong)puVar7)
         = 0;
    FUN_140015530(param_1 + 4,local_48);
    if (7 < (ulonglong)local_48[3]) {
      uVar10 = local_48[3] * 2 + 2;
      lVar8 = local_48[0];
      if (0xfff < uVar10) {
        lVar8 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar8) - 8U) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar11 = auStack_60;
          goto code_r0x00014003b6b8;
        }
        uVar10 = local_48[3] * 2 + 0x29;
      }
      func_0x00014028b040(lVar8,uVar10);
    }
    return;
  }
code_r0x00014003b6b8:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar11 + -8) = 0x14003b6bd;
  FUN_140012a10();
code_r0x00014003b610:
  psVar1 = psVar9 + -1;
  if (psVar9[-1] == 0x5c) goto code_r0x00014003b62c;
  if ((psVar9[-1] == 0x2f) || (psVar9 = psVar1, psVar5 == psVar1)) goto code_r0x00014003b62c;
  goto code_r0x00014003b610;
}

