// Function: FUN_140292100
// Addr: 140292100
// Size: 18 bytes


undefined8 FUN_140292100(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = func_0x000140291210();
  iVar2 = func_0x000140290e50(&DAT_1404dc160);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (DAT_1404dc1ac != 0x7fffffff) {
    puVar3 = &DAT_1404e3dd0;
    do {
      iVar2 = *(int *)(puVar3 + 800);
      for (iVar4 = 0; (iVar2 != 0 && (iVar4 < 0x14)); iVar4 = iVar4 + 1) {
        if ((*(longlong *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) != 0) &&
           (*(int *)(puVar3 + (longlong)iVar4 * 0x28 + 8) == iVar1)) {
          if (*(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) = 1;
          }
          FUN_140290fa0(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x18));
          FUN_140290f70(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10));
          *(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) = 0;
          *(int *)(puVar3 + 800) = *(int *)(puVar3 + 800) + -1;
          iVar2 = *(int *)(puVar3 + 800);
        }
      }
      puVar3 = *(undefined **)(puVar3 + 0x328);
    } while (puVar3 != (undefined *)0x0);
    DAT_1404dc1ac = DAT_1404dc1ac + -1;
    if (DAT_1404dc1ac == 0) {
      uRam00000001404dc1a8 = 0xffffffff;
      (*DAT_140426298)(0x1404dc170);
    }
    return 0;
  }
  DAT_1404dc1ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

