// Function: FUN_14008a0f0
// Addr: 14008a0f0
// Size: 294 bytes


/* WARNING: Removing unreachable block (ram,0x00014008a16f) */
/* WARNING: Removing unreachable block (ram,0x00014008a18a) */
/* WARNING: Removing unreachable block (ram,0x00014008a1a7) */
/* WARNING: Removing unreachable block (ram,0x00014008a1bf) */

void FUN_14008a0f0(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [4];
  
  uVar2 = FUN_1400532a0(param_1,&DAT_14047899c,2);
  local_28[2] = 4;
  local_28[3] = 0xf;
  local_28[1] = 0;
  local_28[0] = CONCAT71(0x202020,"000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                                  [(param_2 >> 8 & 0xff) * 2]);
  FUN_1400532a0(uVar2,local_28,4);
  if ((ulonglong)local_28[3] < 0x10) {
    return;
  }
  uVar4 = local_28[3] + 1;
  lVar3 = local_28[0];
  if (0xfff < uVar4) {
    lVar3 = *(longlong *)(local_28[0] + -8);
    if (0x1f < (local_28[0] - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = local_28[3] + 0x28;
  }
  thunk_FUN_14028af80(lVar3,uVar4);
  return;
}

