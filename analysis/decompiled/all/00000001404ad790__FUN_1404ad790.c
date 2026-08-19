// Function: FUN_1404ad790
// Addr: 1404ad790
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad790(void)

{
  byte bVar1;
  undefined8 in_RAX;
  int unaff_EBX;
  byte *unaff_RDI;
  char in_CF;
  byte *pbVar2;
  
  bVar1 = ((char)in_RAX + -0x68) - in_CF;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar2 = *pbVar2 | bVar1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  *(int *)unaff_RDI = *(int *)unaff_RDI + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

