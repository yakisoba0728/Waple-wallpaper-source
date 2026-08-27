// Function: FUN_1400b6620
// Addr: 1400b6620
// Size: 234 bytes


ulonglong FUN_1400b6620(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  uVar5 = param_3[1];
  bVar6 = 0;
  pbVar4 = (byte *)*param_2;
  bVar7 = 0;
  uVar2 = param_2[1];
  bVar8 = 0;
  bVar9 = 0;
  if (uVar5 == 0) {
    pbVar1 = pbVar4 + (uVar2 & 0xfffffffffffffffc);
    if (pbVar4 < pbVar1) {
      do {
        bVar6 = (bVar6 >> 1) + *pbVar4;
        *pbVar4 = bVar6;
        bVar7 = (bVar7 >> 1) + pbVar4[1];
        pbVar4[1] = bVar7;
        bVar8 = (bVar8 >> 1) + pbVar4[2];
        pbVar4[2] = bVar8;
        bVar9 = (bVar9 >> 1) + pbVar4[3];
        pbVar4[3] = bVar9;
        pbVar4 = pbVar4 + 4;
      } while (pbVar4 < pbVar1);
      return (ulonglong)pbVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    pbVar1 = pbVar4 + (uVar5 & 0xfffffffffffffffc);
    pbVar3 = (byte *)*param_3;
    for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 4) {
      bVar6 = (char)((uint)bVar6 + (uint)*pbVar3 >> 1) + *pbVar4;
      *pbVar4 = bVar6;
      bVar7 = (char)((uint)pbVar3[1] + (uint)bVar7 >> 1) + pbVar4[1];
      pbVar4[1] = bVar7;
      bVar8 = (char)((uint)pbVar3[2] + (uint)bVar8 >> 1) + pbVar4[2];
      pbVar4[2] = bVar8;
      bVar9 = (char)((uint)pbVar3[3] + (uint)bVar9 >> 1) + pbVar4[3];
      pbVar4[3] = bVar9;
      pbVar3 = pbVar3 + 4;
    }
  }
  return (ulonglong)pbVar4 & 0xffffffffffffff00;
}

