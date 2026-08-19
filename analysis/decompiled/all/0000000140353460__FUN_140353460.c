// Function: FUN_140353460
// Addr: 140353460
// Size: 46 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140353460(int *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int aiStackX_8 [2];
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (longlong *)0x0)) {
    lVar1 = *param_3;
    piVar2 = (int *)param_3[1];
    if (((*piVar2 == *param_1) && (piVar2[1] == param_1[1])) ||
       ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
      if (((*piVar2 != *param_2) || (piVar2[1] != param_2[1])) &&
         ((aiStackX_8[0] = 0, lVar1 != 0 &&
          (puVar7 = (undefined8 *)FUN_1402f8070(lVar1,0x30,aiStackX_8), uVar5 = _UNK_140451bc0,
          uVar4 = _DAT_140451bb8, uVar3 = _DAT_140451bb0, aiStackX_8[0] == 0)))) {
        *puVar7 = _DAT_140451ba8;
        puVar7[1] = uVar3;
        uVar6 = _UNK_140451bd0;
        uVar3 = _DAT_140451bc8;
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
      aiStackX_8[0] = 0;
      if (lVar1 == 0) {
        iVar8 = 6;
      }
      else {
        puVar7 = (undefined8 *)FUN_1402f8070(lVar1,0x30,aiStackX_8);
        uVar5 = _UNK_140451bc0;
        uVar4 = _DAT_140451bb8;
        uVar3 = _DAT_140451bb0;
        if (aiStackX_8[0] != 0) {
          return aiStackX_8[0];
        }
        *puVar7 = _DAT_140451ba8;
        puVar7[1] = uVar3;
        uVar6 = _UNK_140451bd0;
        uVar3 = _DAT_140451bc8;
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

