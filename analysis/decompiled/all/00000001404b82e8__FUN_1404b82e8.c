// Function: FUN_1404b82e8
// Addr: 1404b82e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b82e8(undefined8 param_1,char param_2)

{
  longlong in_RAX;
  int unaff_EDI;
  char *pcVar1;
  byte in_CF;
  
  pcVar1 = (char *)(ulonglong)((unaff_EDI - *(int *)(in_RAX + 0xd)) - (uint)in_CF);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

