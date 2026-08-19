// Function: FUN_140005950
// Addr: 140005950
// Size: 15 bytes


longlong * FUN_140005950(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 ***pppuStack_48;
  longlong lStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  
  if (param_2[2] != 0) {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    iVar1 = (*DAT_140426748)(0xfde9,0,puVar3,param_2[2],0,0);
    if (0 < iVar1) {
      lStack_38 = 0;
      uStack_30 = 0;
      pppuStack_48 = (undefined8 ****)0x0;
      lStack_40 = 0;
      FUN_1400168b0(&pppuStack_48,0,(longlong)iVar1);
      ppppuVar2 = &pppuStack_48;
      if (7 < uStack_30) {
        ppppuVar2 = (undefined8 ****)pppuStack_48;
      }
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      (*DAT_140426748)(0xfde9,0,puVar3,*(undefined4 *)(param_2 + 2),ppppuVar2,iVar1);
      *param_1 = (longlong)pppuStack_48;
      param_1[1] = lStack_40;
      param_1[2] = lStack_38;
      param_1[3] = uStack_30;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return param_1;
}

