// Function: FUN_1404b9d24
// Addr: 1404b9d24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9d24(char param_1)

{
  ulonglong in_RAX;
  char *pcVar1;
  longlong unaff_RSI;
  undefined1 *puStack_18;
  undefined1 *puStack_10;
  
  pcVar1 = (char *)(in_RAX | 100);
  *pcVar1 = *pcVar1 + param_1;
  puStack_10 = &stack0xfffffffffffffff8;
  puStack_18 = (undefined1 *)&puStack_10;
  *(char *)((longlong)&puStack_18 + unaff_RSI) =
       *(char *)((longlong)&puStack_18 + unaff_RSI) + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)(in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

