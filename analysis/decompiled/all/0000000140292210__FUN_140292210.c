// Function: FUN_140292210
// Addr: 140292210
// Size: 171 bytes


void FUN_140292210(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = FUN_140290d80(&DAT_1404dc090);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dc0dc != 0x7fffffff) {
    puVar2 = &DAT_1404e3d00;
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
    FUN_140290ea0(&DAT_1404dc090);
    return;
  }
  DAT_1404dc0dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

