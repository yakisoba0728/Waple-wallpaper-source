// Function: FUN_1403bd060
// Addr: 1403bd060
// Size: 301 bytes


ulonglong FUN_1403bd060(ulonglong *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  pbVar2 = (byte *)*param_1;
  pbVar5 = pbVar2 + 1;
  if (pbVar5 <= param_3) {
    *param_1 = (ulonglong)pbVar5;
    bVar1 = *pbVar2;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if (param_3 < pbVar2 + 2) goto LAB_1403bd182;
      *param_1 = (ulonglong)(pbVar2 + 2);
      uVar7 = (bVar1 & 0x7f) << 8 | (uint)*pbVar5;
    }
    pbVar5 = (byte *)FUN_1403a4580(param_2,uVar7);
    if ((char)pbVar5 != '\0') {
      iVar8 = 0;
      *(uint *)(param_2 + 4) = uVar7;
      pbVar5 = (byte *)0x0;
      if (uVar7 != 0) {
        do {
          pbVar3 = (byte *)*param_1;
          pbVar2 = pbVar3 + 1;
          if (param_3 < pbVar2) goto LAB_1403bd182;
          *param_1 = (ulonglong)pbVar2;
          bVar1 = *pbVar3;
          uVar6 = (bVar1 & 0x7f) + 1;
          uVar4 = (uint)pbVar5;
          uVar9 = uVar6 + uVar4;
          if (uVar7 < uVar9) goto LAB_1403bd182;
          if ((char)bVar1 < '\0') {
            if (param_3 < pbVar2 + uVar6 * 2) goto LAB_1403bd182;
            while (uVar4 < uVar9) {
              iVar8 = iVar8 + (uint)pbVar2[1] + (uint)*pbVar2 * 0x100;
              *(int *)(*(longlong *)(param_2 + 8) + (longlong)pbVar5 * 4) = iVar8;
              uVar4 = (int)pbVar5 + 1;
              pbVar5 = (byte *)(ulonglong)uVar4;
              *param_1 = *param_1 + 2;
              pbVar2 = (byte *)*param_1;
            }
          }
          else {
            if (param_3 < pbVar2 + uVar6) goto LAB_1403bd182;
            while (uVar4 < uVar9) {
              pbVar2 = (byte *)*param_1;
              *param_1 = (ulonglong)(pbVar2 + 1);
              iVar8 = iVar8 + (uint)*pbVar2;
              *(int *)(*(longlong *)(param_2 + 8) + (longlong)pbVar5 * 4) = iVar8;
              uVar4 = (int)pbVar5 + 1;
              pbVar5 = (byte *)(ulonglong)uVar4;
            }
          }
        } while ((uint)pbVar5 < uVar7);
      }
      return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
    }
  }
LAB_1403bd182:
  return (ulonglong)pbVar5 & 0xffffffffffffff00;
}

