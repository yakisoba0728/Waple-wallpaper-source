// Function: FUN_140325250
// Addr: 140325250
// Size: 399 bytes


int FUN_140325250(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_res18 [4];
  
  uVar3 = *param_3;
  local_res18[0] = 0;
  puVar5 = (undefined8 *)FUN_1402f7e90(uVar3,0x20,local_res18);
  if (local_res18[0] == 0) {
    if (param_1 + 4 <= param_2) {
      bVar1 = *param_1;
      iVar7 = 3;
      *(byte *)(puVar5 + 1) = bVar1;
      *(ushort *)((longlong)puVar5 + 10) = CONCAT11(param_1[1],param_1[2]);
      bVar2 = param_1[3];
      pbVar9 = param_1 + 4;
      *(byte *)((longlong)puVar5 + 9) = bVar2;
      uVar6 = *(uint *)(param_3 + 1);
      lVar4 = param_3[0x1b];
      *(undefined4 *)((longlong)puVar5 + 0xc) = 3;
      puVar5[2] = pbVar9 + ((ulonglong)uVar6 - lVar4);
      if ((bVar2 & 1) != 0) {
        iVar7 = 5;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      }
      if ((bVar2 & 2) != 0) {
        iVar7 = iVar7 + 1;
        *(int *)((longlong)puVar5 + 0xc) = iVar7;
      }
      if (pbVar9 + (uint)bVar1 * iVar7 <= param_2) {
        if (bVar1 != 0) {
          pbVar8 = pbVar9 + iVar7 * (bVar1 - 1);
          if ((bVar2 & 1) == 0) {
            *(uint *)(puVar5 + 3) = (uint)*pbVar9 << 0x10 | (uint)param_1[5];
            bVar1 = pbVar8[1];
            uVar6 = (uint)*pbVar8 << 0x10;
          }
          else {
            *(uint *)(puVar5 + 3) =
                 CONCAT31(CONCAT21(CONCAT11(*pbVar9,param_1[5]),param_1[6]),param_1[7]);
            bVar1 = pbVar8[3];
            uVar6 = (uint)CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]) << 8;
          }
          *(uint *)((longlong)puVar5 + 0x1c) = uVar6 | bVar1;
          *puVar5 = 0;
          *(undefined8 **)param_3[0x19] = puVar5;
          param_3[0x19] = puVar5;
          *(uint *)(param_3 + 0x17) = *(int *)(param_3 + 0x17) + (uint)*(byte *)(puVar5 + 1);
          return 0;
        }
        FUN_1402f7f90(uVar3,puVar5);
        return local_res18[0];
      }
    }
    FUN_1402f7f90(uVar3,puVar5);
    local_res18[0] = 8;
  }
  return local_res18[0];
}

