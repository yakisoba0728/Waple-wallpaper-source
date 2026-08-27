// Function: FUN_1400afc60
// Addr: 1400afc60
// Size: 198 bytes


char * FUN_1400afc60(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)0x0;
  pbVar9 = (byte *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) {
    pbVar8 = (byte *)(param_2[3] + lVar2);
    pbVar9 = (byte *)(param_2[2] + lVar2);
  }
  iVar7 = *(int *)(param_1 + 0xfc);
  bVar4 = true;
  if (iVar7 == 0) goto LAB_1400afcb0;
  if (iVar7 == 1) goto LAB_1400afcb2;
  if (iVar7 == 2) {
    while (uVar3 = *(ulonglong *)(param_1 + 0xfdb8),
          uVar3 <= (ulonglong)((longlong)pbVar9 - (longlong)pbVar8)) {
      pbVar8 = pbVar8 + uVar3;
LAB_1400afcb0:
      iVar7 = 1;
LAB_1400afcb2:
      if (pbVar8 == pbVar9) goto LAB_1400afcf5;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      if (bVar1 == 0) {
        pcVar5 = (char *)0x0;
        iVar6 = 0;
        goto LAB_1400afd03;
      }
      *(ulonglong *)(param_1 + 0xfdb8) = (ulonglong)bVar1;
      iVar7 = 2;
    }
    *(byte **)(param_1 + 0xfdb8) = pbVar8 + (uVar3 - (longlong)pbVar9);
    pbVar8 = pbVar9;
LAB_1400afcf5:
    pcVar5 = "$base: short read";
  }
  else {
    pcVar5 = (char *)0x0;
    bVar4 = false;
  }
  iVar6 = 0;
  if (bVar4) {
    iVar6 = iVar7;
  }
LAB_1400afd03:
  *(int *)(param_1 + 0xfc) = iVar6;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)pbVar8 - *param_2;
  }
  return pcVar5;
}

