// Function: FUN_140353530
// Addr: 140353530
// Size: 245 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140353530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int local_res10 [2];
  
  if ((((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) &&
      (param_3 != (undefined8 *)0x0)) && (param_4 != (longlong *)0x0)) {
    puVar6 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)param_4[1];
    local_res10[0] = 0;
    if (*param_4 == 0) {
      iVar7 = 6;
    }
    else {
      puVar6 = (undefined8 *)FUN_1402f7fa0(*param_4,0x30,local_res10);
      uVar4 = _UNK_140451af0;
      uVar3 = _DAT_140451ae8;
      uVar2 = _UNK_140451ae0;
      if (local_res10[0] != 0) {
        return local_res10[0];
      }
      *puVar6 = _DAT_140451ad8;
      puVar6[1] = uVar2;
      uVar5 = _UNK_140451b00;
      uVar2 = _DAT_140451af8;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6[4] = uVar2;
      puVar6[5] = uVar5;
      iVar7 = 0;
    }
    if (iVar7 == 0) {
      *(undefined4 *)(puVar6 + 4) = 3;
      *puVar6 = *puVar1;
      puVar6[2] = *param_1;
      puVar6[3] = *param_2;
      puVar6[1] = *param_3;
      puVar6[5] = puVar1[1];
      puVar1[1] = puVar6;
      *puVar1 = *param_3;
    }
    return iVar7;
  }
  return 6;
}

