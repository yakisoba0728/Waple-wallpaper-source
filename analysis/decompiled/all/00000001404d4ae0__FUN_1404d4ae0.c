// Function: FUN_1404d4ae0
// Addr: 1404d4ae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4ae0(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)func_0x0001614d982e();
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *(char *)(unaff_RBX + -0x67) = *(char *)(unaff_RBX + -0x67) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

