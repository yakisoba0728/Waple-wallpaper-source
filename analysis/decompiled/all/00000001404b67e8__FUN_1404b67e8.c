// Function: FUN_1404b67e8
// Addr: 1404b67e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b67e8(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = func_0x0001614bb353();
  uVar1 = (uint)lVar2 | *(uint *)(lVar2 * 2) | (uint)&stack0x00000000;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

