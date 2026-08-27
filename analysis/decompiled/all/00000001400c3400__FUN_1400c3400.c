// Function: FUN_1400c3400
// Addr: 1400c3400
// Size: 284 bytes


undefined8
FUN_1400c3400(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  FARPROC pFVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_2 == 0xd) {
    uVar3 = FUN_1400c0710(param_4,param_3,&param_5,&param_6,&param_7);
    return uVar3;
  }
  iVar2 = FUN_140290d80(param_1 + 0x138);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x184) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  cVar1 = FUN_1400c8a30(param_1);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xb10) == 0)) {
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0xaf8),"LoadNativeImageBitsFromMemory");
    *(FARPROC *)(param_1 + 0xb10) = pFVar4;
  }
  FUN_140290ea0(param_1 + 0x138);
  if (*(code **)(param_1 + 0xb10) != (code *)0x0) {
    uVar3 = (**(code **)(param_1 + 0xb10))
                      (param_2,param_3,param_4,param_5,CONCAT44(uVar5,param_6),param_7);
    return uVar3;
  }
  return 0;
}

