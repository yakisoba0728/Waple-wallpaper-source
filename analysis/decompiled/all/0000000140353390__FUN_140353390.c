// Function: FUN_140353390
// Addr: 140353390
// Size: 406 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140353390(int *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int local_res8 [2];
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (longlong *)0x0)) {
    lVar1 = *param_3;
    piVar2 = (int *)param_3[1];
    if (((*piVar2 == *param_1) && (piVar2[1] == param_1[1])) ||
       ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
      if (((*piVar2 != *param_2) || (piVar2[1] != param_2[1])) &&
         ((local_res8[0] = 0, lVar1 != 0 &&
          (puVar7 = (undefined8 *)FUN_1402f7fa0(lVar1,0x30,local_res8), uVar5 = _UNK_140451af0,
          uVar4 = _DAT_140451ae8, uVar3 = _UNK_140451ae0, local_res8[0] == 0)))) {
        *puVar7 = _DAT_140451ad8;
        puVar7[1] = uVar3;
        uVar6 = _UNK_140451b00;
        uVar3 = _DAT_140451af8;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = uVar3;
        puVar7[5] = uVar6;
        *(undefined4 *)(puVar7 + 4) = 1;
        *puVar7 = *(undefined8 *)piVar2;
        puVar7[1] = *(undefined8 *)param_2;
        puVar7[5] = *(undefined8 *)(piVar2 + 2);
        *(undefined8 **)(piVar2 + 2) = puVar7;
        *(undefined8 *)piVar2 = *(undefined8 *)param_2;
      }
      iVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)0x0;
      local_res8[0] = 0;
      if (lVar1 == 0) {
        iVar8 = 6;
      }
      else {
        puVar7 = (undefined8 *)FUN_1402f7fa0(lVar1,0x30,local_res8);
        uVar5 = _UNK_140451af0;
        uVar4 = _DAT_140451ae8;
        uVar3 = _UNK_140451ae0;
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
        *puVar7 = _DAT_140451ad8;
        puVar7[1] = uVar3;
        uVar6 = _UNK_140451b00;
        uVar3 = _DAT_140451af8;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = uVar3;
        puVar7[5] = uVar6;
        iVar8 = 0;
      }
      if (iVar8 == 0) {
        *(undefined4 *)(puVar7 + 4) = 2;
        *puVar7 = *(undefined8 *)piVar2;
        puVar7[2] = *(undefined8 *)param_1;
        puVar7[1] = *(undefined8 *)param_2;
        puVar7[5] = *(undefined8 *)(piVar2 + 2);
        *(undefined8 **)(piVar2 + 2) = puVar7;
        *(undefined8 *)piVar2 = *(undefined8 *)param_2;
      }
    }
    return iVar8;
  }
  return 6;
}

