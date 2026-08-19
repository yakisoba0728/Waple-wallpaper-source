// Function: FUN_1402fb390
// Addr: 1402fb390
// Size: 238 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402fb390(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int aiStackX_8 [2];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 in_stack_ffffffffffffffc8;
  ulonglong uVar8;
  ulonglong uVar7;
  
  if (param_1 == (longlong *)0x0) {
    return 0x28;
  }
  uVar7 = 0;
  uVar8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20),3);
  lVar2 = (*DAT_140426398)(param_2,0x80000000,1,0,uVar8,0x80,0);
  if (lVar2 == -1) {
    return 1;
  }
  iVar1 = (*DAT_140426430)(lVar2,&local_res18);
  if ((((iVar1 == 0) || (0x7fffffff < CONCAT44(uStackX_1c,local_res18))) ||
      (CONCAT44(uStackX_1c,local_res18) == 0)) ||
     (lVar3 = (*DAT_140426380)(lVar2,0,2,0,uVar8 & 0xffffffff00000000,0), lVar3 == 0)) {
UNWIND_INFO_1402fb4e5_UnwindCodes_30__UnwindOpCode:
    (*DAT_140426368)(lVar2);
    uVar5 = 0x51;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = local_res18;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    lVar4 = (*_UNK_140426390)(lVar3,4,0,0,0);
    *param_1 = lVar4;
    (*DAT_140426368)(lVar3);
    if (*param_1 == 0) {
      lVar3 = (*DAT_1404264b0)(*(undefined8 *)param_1[6],0,(longlong)(int)param_1[1]);
      *param_1 = lVar3;
      if (lVar3 == 0) goto UNWIND_INFO_1402fb4e5_UnwindCodes_30__UnwindOpCode;
      do {
        iVar1 = (*DAT_1404261b8)(lVar2,uVar7 + *param_1,(int)param_1[1] - (int)uVar7,aiStackX_8,0);
        if (iVar1 == 0) {
          (*DAT_1404264b8)(*(undefined8 *)param_1[6],0,*param_1);
          goto UNWIND_INFO_1402fb4e5_UnwindCodes_30__UnwindOpCode;
        }
        uVar6 = (int)uVar7 + aiStackX_8[0];
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != *(uint *)(param_1 + 1));
      lVar3 = 0x1402fb560;
    }
    else {
      lVar3 = 0x1402fb590;
    }
    param_1[5] = lVar3;
    (*DAT_140426368)(lVar2);
    param_1[2] = *param_1;
    uVar5 = 0;
    param_1[3] = param_2;
    param_1[4] = 0;
  }
  return uVar5;
}

