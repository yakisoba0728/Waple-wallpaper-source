// Function: FUN_140351ed0
// Addr: 140351ed0
// Size: 195 bytes


undefined8 FUN_140351ed0(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (param_3 == iVar1) {
LAB_140351f4a:
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x44) = param_3;
    return 0;
  }
  iVar3 = (param_3 <= iVar1) + 1;
  if ((*(int *)(param_1 + 0x70) == iVar3) ||
     (((*(int *)(param_1 + 0x70) == 0 || (cVar2 = FUN_140351be0(), cVar2 == '\0')) &&
      (cVar2 = FUN_140352110(param_1,iVar3), cVar2 == '\0')))) {
    if (iVar1 < param_3) {
      cVar2 = FUN_140351fa0(param_1,*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x44),param_2
                            ,param_3,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
    }
    else {
      cVar2 = FUN_140351fa0(param_1,*(undefined4 *)(param_1 + 0x40),-*(int *)(param_1 + 0x44),
                            param_2,-param_3,-*(int *)(param_1 + 0x4c),-*(int *)(param_1 + 0x48));
    }
    if (cVar2 == '\0') goto LAB_140351f4a;
  }
  return 1;
}

