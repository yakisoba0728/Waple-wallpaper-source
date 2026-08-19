// Function: FUN_1404ae544
// Addr: 1404ae544
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae544(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char *in_RAX;
  
  bVar2 = (byte)in_RAX;
  in_RAX[0x13] = in_RAX[0x13] ^ bVar2;
  pcVar1 = (char *)((longlong)in_RAX * 3 + 0x13);
  *pcVar1 = *pcVar1 + bVar2;
  in_RAX[0x210049ed] = in_RAX[0x210049ed] + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + bVar2;
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

