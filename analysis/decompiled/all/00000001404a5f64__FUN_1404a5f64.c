// Function: FUN_1404a5f64
// Addr: 1404a5f64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5f64(longlong param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  char *pcVar3;
  
  pcVar1 = (code *)swi(8);
  uVar2 = (*pcVar1)();
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || (char)((char)uVar2 + (char)param_1) == '\0') {
    *pcVar3 = *pcVar3 + (char)((ushort)uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

