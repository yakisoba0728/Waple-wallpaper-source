// Function: FUN_14017e860
// Addr: 14017e860
// Size: 296 bytes


/* WARNING: Removing unreachable block (ram,0x00014017e954) */
/* WARNING: Removing unreachable block (ram,0x00014017e95c) */
/* WARNING: Removing unreachable block (ram,0x00014017e966) */
/* WARNING: Removing unreachable block (ram,0x00014017e974) */
/* WARNING: Removing unreachable block (ram,0x00014017e98c) */
/* WARNING: Removing unreachable block (ram,0x00014017e99d) */
/* WARNING: Removing unreachable block (ram,0x00014017e9a3) */
/* WARNING: Removing unreachable block (ram,0x00014017e9aa) */
/* WARNING: Removing unreachable block (ram,0x00014017e9ad) */

void FUN_14017e860(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x1478) != *(longlong *)(param_1 + 0x1480)) {
    lVar1 = *(longlong *)(param_1 + 0x1480) - *(longlong *)(param_1 + 0x1478);
    if (lVar1 != 0) {
      uVar2 = lVar1 >> 3;
      if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar2 = uVar2 * 8;
      if (uVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (0xfff < uVar2) {
          if (uVar2 < uVar2 + 0x27) {
            func_0x00014028aff0();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        uVar3 = func_0x00014028aff0(uVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar3,*(longlong *)(param_1 + 0x1478),
                    *(longlong *)(param_1 + 0x1480) - *(longlong *)(param_1 + 0x1478));
    }
    if (*(longlong *)(param_1 + 0x1478) != *(longlong *)(param_1 + 0x1480)) {
      *(longlong *)(param_1 + 0x1480) = *(longlong *)(param_1 + 0x1478);
    }
  }
  return;
}

