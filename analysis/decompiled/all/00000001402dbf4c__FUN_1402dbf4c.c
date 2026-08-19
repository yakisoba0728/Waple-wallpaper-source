// Function: FUN_1402dbf4c
// Addr: 1402dbf4c
// Size: 48 bytes


/* WARNING: Switch with 1 destination removed at 0x000140420e50 */

undefined8 FUN_1402dbf4c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 unaff_XMM6_Da;
  
  if (DAT_1405161a8 == -1) {
    return 0xc0000225;
  }
  if ((DAT_1405161a8 == 0) &&
     (lVar1 = FUN_1402dbce0(0x1b,"AppPolicyGetThreadInitializationType",&DAT_1404302b0,
                            &DAT_1404302b4), lVar1 == 0)) {
    return 0xc0000225;
  }
  uVar2 = FUN_1402ecc10(&DAT_140497e30,0x1d,unaff_XMM6_Da);
  return uVar2;
}

