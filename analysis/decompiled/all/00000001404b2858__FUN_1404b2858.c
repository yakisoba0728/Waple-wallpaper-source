// Function: FUN_1404b2858
// Addr: 1404b2858
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2858(undefined8 param_1,uint *param_2)

{
  byte *in_RAX;
  char *pcVar1;
  uint unaff_ESI;
  char *unaff_RDI;
  
  *param_2 = *param_2 & unaff_ESI;
  cRam00000001484b47e1 = cRam00000001484b47e1 + (char)param_2;
  pcVar1 = (char *)((ulonglong)
                    (((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX) &
                     0xffff00ff) + 0xe13be100) ^ 0x25);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RDI - (char)param_2;
  unaff_RDI[0x78001728] = unaff_RDI[0x78001728] + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

