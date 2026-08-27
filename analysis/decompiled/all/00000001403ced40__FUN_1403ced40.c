// Function: FUN_1403ced40
// Addr: 1403ced40
// Size: 1087 bytes


void FUN_1403ced40(byte *param_1,longlong param_2,undefined8 param_3,float param_4)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_88 [8];
  longlong local_80;
  int local_78;
  undefined4 local_74;
  ulonglong uVar5;
  
  uVar9 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar9 == 0) {
    return;
  }
  iVar11 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  lVar3 = (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100;
  lVar7 = (ulonglong)param_1[7] + ((ulonglong)param_1[6] + lVar3) * 0x100 + param_2;
  local_80 = lVar7;
  local_78 = iVar11;
  if (uVar9 == 1) {
    local_74 = 0;
    FUN_1403cfb70(param_1 + 8,lVar3,param_2,local_88);
    return;
  }
  uVar8 = uVar9 - 1;
  uVar6 = (ulonglong)uVar8;
  uVar10 = 0;
  if (1 < uVar9) {
    do {
      uVar4 = uVar10 + 1;
      uVar5 = (ulonglong)uVar4;
      if (param_4 < ((float)(int)((((uint)param_1[uVar5 * 8 + 9] +
                                   (uint)param_1[uVar5 * 8 + 8] * 0x100) * 0x100 +
                                  (uint)param_1[uVar5 * 8 + 10]) * 0x100 +
                                 (uint)param_1[uVar5 * 8 + 0xb]) + 0.0) * DAT_1404925f0) break;
      uVar2 = uVar10 + 2;
      uVar10 = uVar4;
    } while (uVar2 < uVar9);
  }
  do {
    uVar9 = (uint)uVar6;
    if (uVar8 < 4) goto joined_r0x0001403cefb1;
    uVar6 = (ulonglong)(uVar9 - 1);
    uVar4 = uVar9;
    if (((float)(int)((((uint)param_1[uVar6 * 8 + 9] + (uint)param_1[uVar6 * 8 + 8] * 0x100) * 0x100
                      + (uint)param_1[uVar6 * 8 + 10]) * 0x100 + (uint)param_1[uVar6 * 8 + 0xb]) +
        0.0) * DAT_1404925f0 < param_4) break;
    uVar6 = (ulonglong)(uVar9 - 2);
    uVar4 = uVar9 - 1;
    if (((float)(int)((((uint)param_1[uVar6 * 8 + 9] + (uint)param_1[uVar6 * 8 + 8] * 0x100) * 0x100
                      + (uint)param_1[uVar6 * 8 + 10]) * 0x100 + (uint)param_1[uVar6 * 8 + 0xb]) +
        0.0) * DAT_1404925f0 < param_4) break;
    uVar6 = (ulonglong)(uVar9 - 3);
    uVar4 = uVar9 - 2;
    if (((float)(int)((((uint)param_1[uVar6 * 8 + 9] + (uint)param_1[uVar6 * 8 + 8] * 0x100) * 0x100
                      + (uint)param_1[uVar6 * 8 + 10]) * 0x100 + (uint)param_1[uVar6 * 8 + 0xb]) +
        0.0) * DAT_1404925f0 < param_4) break;
    uVar8 = uVar9 - 4;
    uVar6 = (ulonglong)uVar8;
    uVar4 = uVar9 - 3;
  } while (param_4 <=
           ((float)(int)((((uint)param_1[uVar6 * 8 + 8] * 0x100 + (uint)param_1[uVar6 * 8 + 9]) *
                          0x100 + (uint)param_1[uVar6 * 8 + 10]) * 0x100 +
                        (uint)param_1[uVar6 * 8 + 0xb]) + 0.0) * DAT_1404925f0);
  goto LAB_1403ceffd;
  while( true ) {
    uVar4 = (uint)uVar6;
    uVar9 = uVar4 - 1;
    uVar6 = (ulonglong)uVar9;
    if (((float)(int)((((uint)param_1[uVar6 * 8 + 9] + (uint)param_1[uVar6 * 8 + 8] * 0x100) * 0x100
                      + (uint)param_1[uVar6 * 8 + 10]) * 0x100 + (uint)param_1[uVar6 * 8 + 0xb]) +
        0.0) * DAT_1404925f0 < param_4) break;
joined_r0x0001403cefb1:
    uVar4 = 0;
    if (uVar9 == 0) break;
  }
LAB_1403ceffd:
  local_74 = 0;
  pbVar1 = param_1 + (ulonglong)uVar10 * 8;
  if (uVar10 == uVar4) {
    FUN_1403cfb70(pbVar1 + 8,pbVar1,param_2,local_88);
  }
  else {
    FUN_1403cfb70(pbVar1 + 8,pbVar1,param_2,local_88);
    local_74 = 0;
    local_80 = lVar7;
    local_78 = iVar11;
    FUN_1403cfb70(param_1 + (ulonglong)uVar4 * 8 + 8);
  }
  return;
}

