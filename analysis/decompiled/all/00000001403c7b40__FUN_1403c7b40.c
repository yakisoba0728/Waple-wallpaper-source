// Function: FUN_1403c7b40
// Addr: 1403c7b40
// Size: 218 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1403c7b40(byte *param_1,longlong param_2,undefined4 param_3,int *param_4,longlong param_5)

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
  undefined4 local_70;
  undefined4 uStack_6c;
  byte *local_58;
  byte *local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  pbVar11 = (byte *)&DAT_14045dde0;
  local_50 = (byte *)0x0;
  iVar10 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  iVar4 = 0;
  if ((iVar10 == 0) ||
     (uVar6 = (uint)param_1[0x1b] * 0x10000 + (uint)param_1[0x1c] * 0x100 +
              (uint)param_1[0x1a] * 0x1000000 + (uint)param_1[0x1d], uVar6 == 0)) {
    if (iVar10 != 0) goto LAB_1403c7bbb;
  }
  else {
    local_50 = param_1 + uVar6;
LAB_1403c7bbb:
    uVar6 = (uint)param_1[0x1f] * 0x10000 + (uint)param_1[0x20] * 0x100 +
            (uint)param_1[0x1e] * 0x1000000 + (uint)param_1[0x21];
    if ((uVar6 != 0) && (local_58 = param_1 + uVar6, local_58 != (byte *)0x0))
    goto code_r0x0001403c7c1e;
  }
  local_58 = (byte *)&DAT_14045dde0;
code_r0x0001403c7c1e:
  local_38 = (ulonglong)*(uint *)(param_2 + 0x7c);
  local_30 = 0;
  local_78 = (undefined4)local_88;
  uStack_74 = (undefined4)((ulonglong)local_88 >> 0x20);
  local_70 = (undefined4)*(undefined8 *)(param_2 + 0x80);
  uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  uStack_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = local_70;
  uStack_3c = uStack_6c;
  if ((iVar10 != 0) &&
     (uVar6 = (uint)param_1[0x17] * 0x10000 + (uint)param_1[0x18] * 0x100 +
              (uint)param_1[0x16] * 0x1000000 + (uint)param_1[0x19], uVar6 != 0)) {
    pbVar11 = param_1 + uVar6;
  }
  cVar2 = FUN_1403c7dc0(pbVar11,param_3,param_4,&local_58);
  if (cVar2 == '\0') {
    uVar5 = FUN_1403dd0e0();
    func_0x0001403b3730(param_5 + 0x18);
    uVar3 = func_0x0001403ee920(param_1,param_2,param_3,uVar5,param_5 + 0x18,0,0,1,param_5);
    uVar6 = *(uint *)(param_5 + 0x3c) - 1;
    if (uVar6 < *(uint *)(param_5 + 0x3c)) {
      puVar8 = (undefined8 *)(*(longlong *)(param_5 + 0x40) + (ulonglong)uVar6 * 0x14);
    }
    else {
      DAT_1404e5000 = (undefined4)DAT_14045ddf0;
      puVar8 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
      DAT_1404e4ff8 = _DAT_14045dde8;
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
    func_0x00014040a1c0(param_2,param_4);
    uVar3 = 1;
  }
  return uVar3;
}

