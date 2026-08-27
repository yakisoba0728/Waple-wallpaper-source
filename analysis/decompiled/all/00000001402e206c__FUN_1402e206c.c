// Function: FUN_1402e206c
// Addr: 1402e206c
// Size: 279 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1402e206c(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong local_228 [2];
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_248;
  psVar3 = (short *)0x0;
  DAT_1404dca10 = 0xffffffff;
  DAT_1404e4dc0 = 0;
  DAT_1404dca00 = 0xffffffff;
  local_228[0] = 0;
  iVar1 = thunk_FUN_1402ea568(local_228,local_218,0x100,&DAT_1404305e8);
  if (iVar1 == 0) {
    psVar2 = local_218;
LAB_1402e216d:
    if (*psVar2 != 0) {
      FUN_1402e1c64(psVar2);
      goto LAB_1402e20e5;
    }
  }
  else if (iVar1 == 0x22) {
    psVar2 = (short *)_malloc_base(local_228[0] * 2);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else {
      local_228[1] = 0;
      iVar1 = thunk_FUN_1402ea568(local_228 + 1,psVar2,local_228[0],&DAT_1404305e8);
      if (iVar1 == 0) {
        FUN_1402d9040(0);
        psVar3 = psVar2;
        if (psVar2 == local_218) {
          psVar3 = (short *)0x0;
        }
        goto LAB_1402e216d;
      }
    }
    FUN_1402d9040(psVar2);
  }
  FUN_1402e1ee4();
LAB_1402e20e5:
  FUN_1402d9040(psVar3);
  return;
}

