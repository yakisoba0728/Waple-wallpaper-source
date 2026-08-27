// Function: FUN_1401c2ef0
// Addr: 1401c2ef0
// Size: 30 bytes


void FUN_1401c2ef0(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    if (*(longlong *)(param_3 + 4) == param_1) {
      *(undefined8 *)(param_3 + 4) = param_2;
    }
    param_3 = param_3 + *(int *)(param_3 + 0xc);
    cVar1 = *param_3;
  }
  return;
}

