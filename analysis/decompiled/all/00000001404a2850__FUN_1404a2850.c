// Function: FUN_1404a2850
// Addr: 1404a2850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2850(char *param_1)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  char *unaff_RBX;
  byte *unaff_RDI;
  char in_CF;
  
  bVar2 = (byte)param_1;
  cVar1 = in_AL + cRam00000001455d2d57;
  unaff_RDI[0x4a] = unaff_RDI[0x4a] + bVar2;
  *param_1 = *param_1 + cVar1 + in_CF;
  *unaff_RBX = *unaff_RBX + bVar2;
  *unaff_RDI = *unaff_RDI << (bVar2 & 7) | *unaff_RDI >> 8 - (bVar2 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

