// Function: FUN_1402922e0
// Addr: 1402922e0
// Size: 171 bytes


void FUN_1402922e0(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = func_0x000140290e50(&DAT_1404dc160);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (DAT_1404dc1ac != 0x7fffffff) {
    puVar2 = &DAT_1404e3dd0;
    do {
      iVar1 = *(int *)(puVar2 + 800);
      for (iVar3 = 0; (iVar1 != 0 && (iVar3 < 0x14)); iVar3 = iVar3 + 1) {
        if (*(longlong *)(puVar2 + (longlong)iVar3 * 0x28 + 0x10) == param_1) {
          *(undefined8 *)(puVar2 + (longlong)iVar3 * 0x28 + 0x10) = 0;
          *(int *)(puVar2 + 800) = *(int *)(puVar2 + 800) + -1;
          iVar1 = *(int *)(puVar2 + 800);
        }
      }
      puVar2 = *(undefined **)(puVar2 + 0x328);
    } while (puVar2 != (undefined *)0x0);
    FUN_140290f70(&DAT_1404dc160);
    return;
  }
  DAT_1404dc1ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

