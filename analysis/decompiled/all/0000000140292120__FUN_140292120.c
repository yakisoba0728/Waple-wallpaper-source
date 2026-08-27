// Function: FUN_140292120
// Addr: 140292120
// Size: 231 bytes


void FUN_140292120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  iVar2 = FUN_140290d80(&DAT_1404dc090);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dc0dc == 0x7fffffff) {
    DAT_1404dc0dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  puVar6 = &DAT_1404e3d00;
  do {
    do {
      if (*(int *)(puVar6 + 800) != 0x14) {
        uVar5 = 0;
        goto LAB_1402921a0;
      }
      puVar1 = (undefined8 *)(puVar6 + 0x328);
      puVar6 = (undefined *)*puVar1;
    } while (puVar6 != (undefined *)0x0);
    puVar6 = (undefined *)_calloc_base(1);
    *puVar1 = puVar6;
  } while (puVar6 != (undefined *)0x0);
  goto LAB_1402921d3;
  while (uVar4 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar4, (int)uVar4 < 0x14) {
LAB_1402921a0:
    if (*(longlong *)(puVar6 + uVar5 * 0x28 + 0x10) == 0) {
      DVar3 = GetCurrentThreadId();
      *(DWORD *)(puVar6 + uVar5 * 0x28 + 8) = DVar3;
      *(undefined8 *)(puVar6 + uVar5 * 0x28 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + uVar5 * 0x28 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + uVar5 * 0x28 + 0x20) = param_3;
      *(int *)(puVar6 + 800) = *(int *)(puVar6 + 800) + 1;
      break;
    }
  }
LAB_1402921d3:
  FUN_140290ea0(&DAT_1404dc090);
  return;
}

