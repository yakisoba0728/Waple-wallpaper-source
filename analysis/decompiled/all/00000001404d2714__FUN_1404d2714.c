// Function: FUN_1404d2714
// Addr: 1404d2714
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2714(undefined8 param_1,char *param_2)

{
  byte bVar1;
  byte *in_RAX;
  byte bVar2;
  char in_CF;
  
  bVar2 = (byte)param_2;
  in_RAX[(longlong)param_2] = in_RAX[(longlong)param_2] + (char)((ulonglong)param_2 >> 8) + in_CF;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  if (!CARRY1(bVar1,bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

