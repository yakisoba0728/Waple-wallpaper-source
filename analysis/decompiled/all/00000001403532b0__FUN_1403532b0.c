// Function: FUN_1403532b0
// Addr: 1403532b0
// Size: 215 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1403532b0(int *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  
  if ((param_1 != (int *)0x0) && (param_2 != (longlong *)0x0)) {
    piVar1 = (int *)param_2[1];
    if ((*piVar1 != *param_1) || (iVar6 = 0, piVar1[1] != param_1[1])) {
      puVar7 = (undefined8 *)0x0;
      local_res8[0] = 0;
      if (*param_2 == 0) {
        iVar6 = 6;
      }
      else {
        puVar7 = (undefined8 *)FUN_1402f7fa0(*param_2,0x30,local_res8);
        uVar4 = _UNK_140451af0;
        uVar3 = _DAT_140451ae8;
        uVar2 = _UNK_140451ae0;
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
        *puVar7 = _DAT_140451ad8;
        puVar7[1] = uVar2;
        uVar5 = _UNK_140451b00;
        uVar2 = _DAT_140451af8;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar7[4] = uVar2;
        puVar7[5] = uVar5;
        iVar6 = 0;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(puVar7 + 4) = 1;
        *puVar7 = *(undefined8 *)piVar1;
        puVar7[1] = *(undefined8 *)param_1;
        puVar7[5] = *(undefined8 *)(piVar1 + 2);
        *(undefined8 **)(piVar1 + 2) = puVar7;
        *(undefined8 *)piVar1 = *(undefined8 *)param_1;
      }
    }
    return iVar6;
  }
  return 6;
}

