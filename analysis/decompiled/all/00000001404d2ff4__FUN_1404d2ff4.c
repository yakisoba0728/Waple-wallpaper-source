// Function: FUN_1404d2ff4
// Addr: 1404d2ff4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2ff4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *in_RAX;
  
  cVar1 = (char)in_RAX;
  in_RAX[0x210049e1] = in_RAX[0x210049e1] + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
  in_RAX[0x10049e1] = in_RAX[0x10049e1] + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

