// Function: FUN_1402bba50
// Addr: 1402bba50
// Size: 6 bytes


/* WARNING: Removing unreachable block (ram,0x0001402d9115) */
/* WARNING: Removing unreachable block (ram,0x0001402d9130) */
/* WARNING: Removing unreachable block (ram,0x0001402d9146) */

void FUN_1402bba50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
    lVar2 = -1;
    do {
      lVar1 = lVar2;
      lVar2 = lVar1 + 1;
    } while (*(char *)(*param_1 + 1 + lVar1) != '\0');
    lVar2 = thunk_FUN_1402da070();
    if (lVar2 != 0) {
      FUN_1402d9090(lVar2,lVar1 + 2,*param_1);
      *param_2 = lVar2;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    return;
  }
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}

