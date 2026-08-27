// Function: FUN_140038c30
// Addr: 140038c30
// Size: 133 bytes


/* WARNING: Removing unreachable block (ram,0x000140038c81) */

ulonglong FUN_140038c30(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  int iVar4;
  ulonglong _Size;
  
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  iVar4 = iVar2;
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    iVar4 = 1;
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
  }
  uVar3 = 0xff;
  if (-1 < iVar4) {
    uVar3 = 1;
  }
  return uVar3;
}

