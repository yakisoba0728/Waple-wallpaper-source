// Function: FUN_1402f3860
// Addr: 1402f3860
// Size: 54 bytes


void FUN_1402f3860(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 8);
    uVar2 = 0;
    if (*(short *)(param_1 + 2) != 0) {
      do {
        *piVar1 = *piVar1 + param_2;
        uVar2 = uVar2 + 1;
        piVar1[1] = piVar1[1] + param_3;
        piVar1 = piVar1 + 2;
      } while (uVar2 < *(ushort *)(param_1 + 2));
    }
  }
  return;
}

