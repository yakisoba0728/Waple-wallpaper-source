// Function: FUN_140050dc0
// Addr: 140050dc0
// Size: 346 bytes


int FUN_140050dc0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ushort local_res8 [4];
  uint local_res18 [2];
  undefined8 local_res20;
  longlong local_28 [2];
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  iVar2 = FUN_140290580(&local_res20,param_1,0x80,0x2200000);
  if (iVar2 == 0) {
    lVar3 = FUN_14028b480(0x4000,&PTR_140426e20);
    if (lVar3 == 0) {
      iVar2 = 8;
      FUN_14028f760(local_res20);
    }
    else {
      iVar2 = FUN_1402906a0(local_res20,lVar3,0x4000);
      if ((iVar2 == 0) && (iVar2 = FUN_140290140(local_res20,local_res18), iVar2 == 0)) {
        FUN_14028f760(local_res20);
        cVar1 = FUN_140290570(lVar3);
        if (cVar1 == '\0') {
          iVar2 = FUN_140290600(lVar3,local_28,local_res8);
          if (iVar2 == 0) {
            *(undefined2 *)(local_28[0] + (ulonglong)local_res8[0] * 2) = 0;
            if ((local_res18[0] & 0x10) == 0) {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              iVar2 = FUN_14028fd70(param_2,local_28[0]);
            }
            else {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              iVar2 = FUN_14028fce0(param_2,local_28[0]);
            }
            goto LAB_140050eff;
          }
        }
        else {
          iVar2 = 0x1129;
        }
      }
      else {
        FUN_14028f760(local_res20);
      }
    }
  }
  else {
    lVar3 = 0;
    FUN_14028f760(local_res20);
  }
  if (lVar3 == 0) {
    return iVar2;
  }
LAB_140050eff:
  thunk_FUN_14028af80(lVar3);
  return iVar2;
}

