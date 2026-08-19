// Function: FUN_140005860
// Addr: 140005860
// Size: 18 bytes


longlong * FUN_140005860(longlong *param_1,undefined8 *param_2)

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
    if (7 < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    iVar1 = (*DAT_140426608)(0xfde9,0,puVar3,param_2[2],0,0,0,0);
    if (0 < iVar1) {
      FUN_140016a10(&pppuStack_48,(longlong)iVar1,0);
      ppppuVar2 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar2 = (undefined8 ****)pppuStack_48;
      }
      puVar3 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      (*DAT_140426608)(0xfde9,0,puVar3,*(undefined4 *)(param_2 + 2),ppppuVar2,iVar1,0,0);
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
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}

