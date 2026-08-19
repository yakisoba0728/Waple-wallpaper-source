// Function: FUN_1404af208
// Addr: 1404af208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af208(char *param_1)

{
  byte in_AL;
  char *unaff_retaddr;
  char *pcStackX_8;
  char cStackX_10;
  
  cRam00000001604aff75 = cRam00000001604aff75 + (in_AL ^ 0xc);
  LOCK();
  *param_1 = *param_1 + '\b';
  UNLOCK();
  cRam00000000ba690013 = cRam00000000ba690013 + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  param_1[-0x46] = param_1[-0x46] + (char)((ulonglong)param_1 >> 8);
  LOCK();
  *param_1 = *param_1 + '\x10';
  UNLOCK();
  *pcStackX_8 = *pcStackX_8 + (char)pcStackX_8;
  *pcStackX_8 = *pcStackX_8 + (char)((ulonglong)pcStackX_8 >> 8);
  LOCK();
  *param_1 = *param_1 + cStackX_10;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

