// Function: FUN_140356d80
// Addr: 140356d80
// Size: 165 bytes


undefined8 FUN_140356d80(longlong param_1,char *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = strcmp(param_2,"svg-hooks");
  if (iVar3 != 0) {
    return 0xc;
  }
  if ((((param_4 != '\x01') && (*param_3 != 0)) && (param_3[1] != 0)) &&
     ((param_3[2] != 0 && (param_3[3] != 0)))) {
    lVar1 = param_3[1];
    *(longlong *)(param_1 + 0x80) = *param_3;
    *(longlong *)(param_1 + 0x88) = lVar1;
    lVar1 = param_3[2];
    lVar2 = param_3[3];
    *(undefined1 *)(param_1 + 0x79) = 1;
    *(longlong *)(param_1 + 0x90) = lVar1;
    *(longlong *)(param_1 + 0x98) = lVar2;
    return 0;
  }
  return 6;
}

