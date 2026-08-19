// Function: FUN_1404d6334
// Addr: 1404d6334
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6334(longlong param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *in_RAX;
  char *pcVar2;
  char in_ZF;
  
  pcVar2 = (char *)(param_1 + -1);
  cVar1 = (char)in_RAX;
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    *param_4 = *param_4 + cVar1;
    LocalDescriptorTableRegister(uRam00000001502d7497);
    bRam000000014bad6fbb = bRam000000014bad6fbb >> 1 | bRam000000014bad6fbb << 7;
    *param_2 = *param_2 & (uint)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar2 = *pcVar2 + (char)((ulonglong)in_RAX >> 8);
  *(char *)param_2 = (char)*param_2 + cVar1;
  *in_RAX = *in_RAX + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

