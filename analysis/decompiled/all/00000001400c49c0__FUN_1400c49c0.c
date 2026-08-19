// Function: FUN_1400c49c0
// Addr: 1400c49c0
// Size: 163 bytes


void FUN_1400c49c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = func_0x000140290e50(param_1 + 0x138);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x184) != 0x7fffffff) {
    cVar1 = func_0x0001400c8b00(param_1);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xb20) == 0)) {
      uVar3 = (*DAT_140426730)(*(undefined8 *)(param_1 + 0xaf8),"FreeImageBits");
      *(undefined8 *)(param_1 + 0xb20) = uVar3;
    }
    FUN_140290f70(param_1 + 0x138);
    if (*(code **)(param_1 + 0xb20) != (code *)0x0) {
      (**(code **)(param_1 + 0xb20))(param_2);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

