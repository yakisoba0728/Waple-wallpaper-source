// Function: FUN_140050e90
// Addr: 140050e90
// Size: 170 bytes


ulonglong FUN_140050e90(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort auStackX_8 [4];
  uint auStackX_18 [2];
  undefined8 local_res20;
  longlong alStack_28 [2];
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar2 = func_0x000140290650(&local_res20,param_1,0x80,0x2200000);
  uVar4 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    lVar3 = FUN_14028b550(0x4000,&DAT_140426ef0);
    if (lVar3 == 0) {
      uVar4 = 8;
      FUN_14028f830(local_res20);
    }
    else {
      uVar2 = func_0x000140290770(local_res20,lVar3,0x4000);
      if ((uVar2 == 0) && (uVar2 = func_0x000140290210(local_res20,auStackX_18), uVar2 == 0)) {
        FUN_14028f830(local_res20);
        cVar1 = func_0x000140290640(lVar3);
        if (cVar1 == '\0') {
          uVar2 = func_0x0001402906d0(lVar3,alStack_28,auStackX_8);
          uVar4 = (ulonglong)uVar2;
          if (uVar2 == 0) {
            *(undefined2 *)(alStack_28[0] + (ulonglong)auStackX_8[0] * 2) = 0;
            if ((auStackX_18[0] & 0x10) == 0) {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              FUN_14028fe40(param_2,alStack_28[0]);
            }
            else {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              func_0x00014028fdb0(param_2,alStack_28[0]);
            }
            goto LAB_140050fcf;
          }
        }
        else {
          uVar4 = 0x1129;
        }
      }
      else {
        uVar4 = (ulonglong)uVar2;
        FUN_14028f830(local_res20);
      }
    }
  }
  else {
    lVar3 = 0;
    FUN_14028f830(local_res20);
  }
  if (lVar3 == 0) {
    return uVar4;
  }
LAB_140050fcf:
  uVar4 = func_0x00014028b040(lVar3);
  return uVar4;
}

