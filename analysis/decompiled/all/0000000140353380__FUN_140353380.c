// Function: FUN_140353380
// Addr: 140353380
// Size: 6 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140353380(int *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int aiStackX_8 [2];
  
  if ((param_1 != (int *)0x0) && (param_2 != (longlong *)0x0)) {
    piVar1 = (int *)param_2[1];
    if ((*piVar1 != *param_1) || (iVar6 = 0, piVar1[1] != param_1[1])) {
      puVar7 = (undefined8 *)0x0;
      aiStackX_8[0] = 0;
      if (*param_2 == 0) {
        iVar6 = 6;
      }
      else {
        puVar7 = (undefined8 *)FUN_1402f8070(*param_2,0x30,aiStackX_8);
        uVar4 = _UNK_140451bc0;
        uVar3 = _DAT_140451bb8;
        uVar2 = _DAT_140451bb0;
        if (aiStackX_8[0] != 0) {
          return aiStackX_8[0];
        }
        *puVar7 = _DAT_140451ba8;
        puVar7[1] = uVar2;
        uVar5 = _UNK_140451bd0;
        uVar2 = _DAT_140451bc8;
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

