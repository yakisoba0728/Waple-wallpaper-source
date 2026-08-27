// Function: FUN_140386670
// Addr: 140386670
// Size: 749 bytes


bool FUN_140386670(byte *param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float local_res8 [2];
  undefined1 local_88 [8];
  float *local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 1) {
    if ((uint)param_1[2] * 0x100 + (uint)param_1[3] < param_3) {
      iVar4 = *(int *)(param_2 + (ulonglong)CONCAT11(param_1[2],param_1[3]) * 4);
    }
    else {
      iVar4 = 0;
    }
    if (((short)((ushort)param_1[5] + (ushort)param_1[4] * 0x100) <= iVar4) &&
       (iVar4 <= (short)((ushort)param_1[7] + (ushort)param_1[6] * 0x100))) {
      return true;
    }
    return false;
  }
  if (iVar4 == 2) {
    bVar2 = param_1[2];
    bVar1 = param_1[3];
    local_res8[0] = 0.0;
    puVar6 = param_4 + 2;
    if (param_4 == (undefined8 *)0xffffffffffffffef) {
      puVar6 = (undefined8 *)0x0;
    }
    if ((*(int *)(puVar6 + 2) == 0) ||
       (iVar4 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000
                + (uint)param_1[7], iVar4 == -1)) {
      local_res8[0] = 0.0;
    }
    else {
      if (param_4[1] != 0) {
        iVar4 = FUN_1403eaff0();
      }
      local_80 = local_res8;
      local_68 = *(undefined4 *)(param_4 + 2);
      uStack_64 = *(undefined4 *)((longlong)param_4 + 0x14);
      uStack_60 = *(undefined4 *)(param_4 + 3);
      uStack_5c = *(undefined4 *)((longlong)param_4 + 0x1c);
      local_58 = param_4[4];
      local_78 = 1;
      FUN_1403c7550(*param_4,iVar4,&local_68,local_88,param_4[5]);
    }
    return 0.0 < local_res8[0] + (float)(int)(short)((ushort)bVar2 * 0x100 + (ushort)bVar1);
  }
  if (iVar4 == 3) {
    bVar2 = param_1[2];
    uVar7 = 0;
    if (bVar2 != 0) {
      do {
        uVar9 = (ulonglong)uVar7;
        uVar8 = (uint)param_1[uVar9 * 3 + 5] +
                (uint)param_1[uVar9 * 3 + 3] * 0x10000 + (uint)param_1[uVar9 * 3 + 4] * 0x100;
        if (uVar8 == 0) {
          pbVar5 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar5 = param_1 + uVar8;
        }
        cVar3 = FUN_140386670(pbVar5,param_2,param_3,param_4);
        if (cVar3 == '\0') {
          return false;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar2);
    }
    return true;
  }
  if (iVar4 == 4) {
    bVar2 = param_1[2];
    uVar7 = 0;
    if (bVar2 != 0) {
      do {
        uVar9 = (ulonglong)uVar7;
        uVar8 = (uint)param_1[uVar9 * 3 + 5] +
                (uint)param_1[uVar9 * 3 + 3] * 0x10000 + (uint)param_1[uVar9 * 3 + 4] * 0x100;
        if (uVar8 == 0) {
          pbVar5 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar5 = param_1 + uVar8;
        }
        cVar3 = FUN_140386670(pbVar5,param_2,param_3,param_4);
        if (cVar3 != '\0') {
          return true;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar2);
    }
  }
  else if (iVar4 == 5) {
    uVar7 = (uint)param_1[3] * 0x100 + (uint)param_1[2] * 0x10000 + (uint)param_1[4];
    if (uVar7 == 0) {
      param_1 = (byte *)&DAT_14045dd10;
    }
    else {
      param_1 = param_1 + uVar7;
    }
    bVar2 = FUN_140386670(param_1,param_2);
    return (bool)(bVar2 ^ 1);
  }
  return false;
}

