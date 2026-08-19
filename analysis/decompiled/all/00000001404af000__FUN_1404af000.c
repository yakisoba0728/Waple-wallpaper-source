// Function: FUN_1404af000
// Addr: 1404af000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af000(char *param_1,undefined2 param_2)

{
  char cVar1;
  uint *in_RAX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  uint *puVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  out(param_2,(uint)in_RAX);
  cRam0400138ab000138a = cVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  *(char *)((longlong)in_RAX + -0x5dffec76) =
       *(char *)((longlong)in_RAX + -0x5dffec76) + (char)param_2;
  cVar1 = cVar1 + (char)param_1;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || cVar1 == '\0') {
    *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar2 = *puVar2 & (uint)puVar2;
  *(char *)puVar2 = (char)*puVar2 + cVar1;
  *unaff_RDI = *unaff_RSI;
  *(char *)((longlong)unaff_RSI + -0x6e) =
       *(char *)((longlong)unaff_RSI + -0x6e) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

