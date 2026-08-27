// Function: FUN_1400b63e0
// Addr: 1400b63e0
// Size: 567 bytes


ulonglong FUN_1400b63e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  uVar7 = param_3[1];
  bVar8 = 0;
  pbVar4 = (byte *)*param_2;
  bVar9 = 0;
  uVar1 = param_2[1];
  bVar10 = 0;
  if (uVar7 == 0) {
    for (pbVar3 = pbVar4; pbVar3 < pbVar4 + (uVar1 / 6) * 6; pbVar3 = pbVar3 + 6) {
      *pbVar3 = *pbVar3 + (bVar8 >> 1);
      pbVar3[1] = pbVar3[1] + (bVar9 >> 1);
      pbVar3[2] = pbVar3[2] + (bVar10 >> 1);
      bVar8 = (*pbVar3 >> 1) + pbVar3[3];
      pbVar3[3] = bVar8;
      bVar9 = (pbVar3[1] >> 1) + pbVar3[4];
      pbVar3[4] = bVar9;
      bVar10 = (pbVar3[2] >> 1) + pbVar3[5];
      pbVar3[5] = bVar10;
    }
    lVar6 = uVar1 - (longlong)pbVar3;
    pbVar2 = pbVar3 + ((ulonglong)(pbVar4 + lVar6) / 3) * 2;
    if (pbVar3 < pbVar2 + (ulonglong)(pbVar4 + lVar6) / 3) {
      do {
        bVar8 = (bVar8 >> 1) + *pbVar3;
        *pbVar3 = bVar8;
        bVar9 = (bVar9 >> 1) + pbVar3[1];
        pbVar3[1] = bVar9;
        bVar10 = (bVar10 >> 1) + pbVar3[2];
        pbVar3[2] = bVar10;
        pbVar3 = pbVar3 + 3;
      } while (pbVar3 < pbVar2 + (ulonglong)(pbVar4 + lVar6) / 3);
      return (ulonglong)pbVar2 & 0xffffffffffffff00;
    }
  }
  else {
    pbVar3 = (byte *)*param_3;
    if (uVar1 < uVar7) {
      uVar7 = uVar1;
    }
    for (pbVar5 = pbVar4; pbVar5 < pbVar4 + (uVar7 / 6) * 6; pbVar5 = pbVar5 + 6) {
      *pbVar5 = *pbVar5 + (char)((uint)*pbVar3 + (uint)bVar8 >> 1);
      pbVar5[1] = pbVar5[1] + (char)((uint)pbVar3[1] + (uint)bVar9 >> 1);
      pbVar5[2] = pbVar5[2] + (char)((uint)pbVar3[2] + (uint)bVar10 >> 1);
      bVar8 = (char)((uint)pbVar3[3] + (uint)*pbVar5 >> 1) + pbVar5[3];
      pbVar5[3] = bVar8;
      bVar9 = (char)((uint)pbVar3[4] + (uint)pbVar5[1] >> 1) + pbVar5[4];
      pbVar5[4] = bVar9;
      pbVar2 = pbVar3 + 5;
      pbVar3 = pbVar3 + 6;
      bVar10 = (char)((uint)*pbVar2 + (uint)pbVar5[2] >> 1) + pbVar5[5];
      pbVar5[5] = bVar10;
    }
    pbVar2 = pbVar5 + ((ulonglong)(pbVar4 + (uVar7 - (longlong)pbVar5)) / 3) * 2;
    pbVar4 = pbVar2 + (ulonglong)(pbVar4 + (uVar7 - (longlong)pbVar5)) / 3;
    for (; pbVar5 < pbVar4; pbVar5 = pbVar5 + 3) {
      bVar8 = (char)((uint)*pbVar3 + (uint)bVar8 >> 1) + *pbVar5;
      *pbVar5 = bVar8;
      pbVar2 = (byte *)0x0;
      bVar9 = (char)((uint)pbVar3[1] + (uint)bVar9 >> 1) + pbVar5[1];
      pbVar5[1] = bVar9;
      bVar10 = (char)((uint)pbVar3[2] + (uint)bVar10 >> 1) + pbVar5[2];
      pbVar5[2] = bVar10;
      pbVar3 = pbVar3 + 3;
    }
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}

