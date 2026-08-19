// Function: FUN_1404c0310
// Addr: 1404c0310
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0310(longlong param_1,undefined8 param_2)

{
  char *in_RAX;
  char *pcVar1;
  char cVar2;
  undefined4 *unaff_RSI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  in_RAX[param_1] = in_RAX[param_1] + cVar2;
  in_RAX[0x22] = in_RAX[0x22] + cVar2;
  *in_RAX = *in_RAX - (char)in_RAX;
  pcVar1 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

