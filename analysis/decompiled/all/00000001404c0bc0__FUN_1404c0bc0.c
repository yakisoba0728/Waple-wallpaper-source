// Function: FUN_1404c0bc0
// Addr: 1404c0bc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0bc0(void)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char unaff_BL;
  char *unaff_RDI;
  
  cVar1 = ((byte)in_RAX | 0x78) + 0x68;
  pcVar2 = (char *)(ulonglong)((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1) | 0x289df000);
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *pcVar2 = *pcVar2 - cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

