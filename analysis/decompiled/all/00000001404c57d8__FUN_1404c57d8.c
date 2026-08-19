// Function: FUN_1404c57d8
// Addr: 1404c57d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c57d8(void)

{
  undefined4 in_EAX;
  int unaff_ESP;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_ESP;
  *(byte *)unaff_RDI = (char)*unaff_RDI + ((byte)((uint)in_EAX >> 8) | 0x27);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

