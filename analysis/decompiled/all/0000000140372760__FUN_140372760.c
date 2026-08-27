// Function: FUN_140372760
// Addr: 140372760
// Size: 425 bytes


ulonglong * FUN_140372760(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  ulonglong *local_40;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  
  uVar10 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  puVar3 = (ulonglong *)_calloc_base(1);
  if (puVar3 == (ulonglong *)0x0) {
    return (ulonglong *)0x0;
  }
  uVar5 = 0;
  puVar9 = puVar3 + 4;
  bVar1 = param_1[1];
  bVar2 = *param_1;
  local_48[0] = 0;
  local_38 = 0;
  local_34 = -1;
  local_30 = 0;
  uVar12 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  local_40 = puVar9;
  if (uVar12 != 0) {
    do {
      if ((uint)uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar4 = param_1 + (uVar5 + 3) * 2;
      }
      else {
        pbVar4 = (byte *)&DAT_14045dd10;
      }
      uVar7 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
      if (uVar7 == 0) {
        pbVar4 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar4 = param_1 + uVar7;
      }
      FUN_140377740(pbVar4,local_res8,local_48,(uint)bVar2 * 0x100 + (uint)bVar1);
      uVar7 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while (uVar7 < uVar12);
  }
  uVar5 = 0;
  puVar11 = puVar9 + (ulonglong)uVar10 * 8;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar6 = uVar5;
  uVar8 = uVar5;
  for (; puVar9 != puVar11; puVar9 = puVar9 + 8) {
    uVar5 = uVar5 | puVar9[5];
    *puVar3 = uVar5;
    uVar6 = uVar6 | puVar9[6];
    puVar3[1] = uVar6;
    uVar8 = uVar8 | puVar9[7];
    puVar3[2] = uVar8;
  }
  uVar5 = 0;
  *(uint *)(puVar3 + 3) = uVar10;
  *(int *)((longlong)puVar3 + 0x1c) = local_34;
  if (uVar10 != 0) {
    do {
      if ((int)uVar5 != local_34) {
        puVar3[uVar5 * 8 + 6] = puVar3[uVar5 * 8 + 5];
        local_34 = *(int *)((longlong)puVar3 + 0x1c);
      }
      uVar12 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar12;
    } while (uVar12 < uVar10);
  }
  return puVar3;
}

