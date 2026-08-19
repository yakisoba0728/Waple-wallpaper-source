// Function: FUN_1404c7304
// Addr: 1404c7304
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7304(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = &stack0x00000000 + param_2;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  if (!SCARRY1(cVar2,(char)param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

