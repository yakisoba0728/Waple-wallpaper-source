// Function: FUN_1403c7a70
// Addr: 1403c7a70
// Size: 634 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1403c7a70(byte *param_1,longlong param_2,undefined4 param_3,int *param_4,longlong param_5)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte *local_58;
  byte *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  pbVar11 = (byte *)&DAT_14045dd10;
  local_50 = (byte *)0x0;
  iVar10 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  iVar4 = 0;
  if ((iVar10 == 0) ||
     (uVar6 = (uint)param_1[0x1b] * 0x10000 + (uint)param_1[0x1c] * 0x100 +
              (uint)param_1[0x1a] * 0x1000000 + (uint)param_1[0x1d], uVar6 == 0)) {
    if (iVar10 != 0) goto LAB_1403c7aeb;
  }
  else {
    local_50 = param_1 + uVar6;
LAB_1403c7aeb:
    uVar6 = (uint)param_1[0x1f] * 0x10000 + (uint)param_1[0x20] * 0x100 +
            (uint)param_1[0x1e] * 0x1000000 + (uint)param_1[0x21];
    if ((uVar6 != 0) && (local_58 = param_1 + uVar6, local_58 != (byte *)0x0)) goto LAB_1403c7b4e;
  }
  local_58 = (byte *)&DAT_14045dd10;
LAB_1403c7b4e:
  local_38 = (ulonglong)*(uint *)(param_2 + 0x7c);
  local_30 = 0;
  local_78 = (undefined4)local_88;
  uStack_74 = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_70 = (undefined4)*(undefined8 *)(param_2 + 0x80);
  uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  if ((iVar10 != 0) &&
     (uVar6 = (uint)param_1[0x17] * 0x10000 + (uint)param_1[0x18] * 0x100 +
              (uint)param_1[0x16] * 0x1000000 + (uint)param_1[0x19], uVar6 != 0)) {
    pbVar11 = param_1 + uVar6;
  }
  cVar2 = FUN_1403c7cf0(pbVar11,param_3,param_4,&local_58);
  if (cVar2 == '\0') {
    uVar5 = FUN_1403dd010();
    FUN_1403b3660(param_5 + 0x18);
    uVar3 = FUN_1403ee850(param_1,param_2,param_3,uVar5,param_5 + 0x18,0,0,1,param_5);
    uVar6 = *(uint *)(param_5 + 0x3c) - 1;
    if (uVar6 < *(uint *)(param_5 + 0x3c)) {
      puVar8 = (undefined8 *)(*(longlong *)(param_5 + 0x40) + (ulonglong)uVar6 * 0x14);
    }
    else {
      DAT_1404e4f30 = (undefined4)DAT_14045dd20;
      puVar8 = &DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
    }
    fVar1 = *(float *)((longlong)puVar8 + 4);
    if (fVar1 <= *(float *)((longlong)puVar8 + 0xc)) {
      iVar10 = (int)*(float *)(puVar8 + 2);
      iVar4 = (int)(*(float *)(puVar8 + 1) - *(float *)(puVar8 + 2));
      iVar7 = (int)(*(float *)((longlong)puVar8 + 0xc) - fVar1);
      iVar9 = (int)fVar1;
    }
    else {
      iVar9 = 0;
      iVar10 = iVar9;
      iVar7 = iVar9;
    }
    *param_4 = iVar9;
    param_4[1] = iVar10;
    param_4[2] = iVar7;
    param_4[3] = iVar4;
  }
  else {
    FUN_14040a0f0(param_2,param_4);
    uVar3 = 1;
  }
  return uVar3;
}

