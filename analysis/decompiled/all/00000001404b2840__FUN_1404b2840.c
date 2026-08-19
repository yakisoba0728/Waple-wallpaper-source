// Function: FUN_1404b2840
// Addr: 1404b2840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2840(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  char *pcVar2;
  uint unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  
  uVar1 = *(uint *)(unaff_RDI + (longlong)param_2);
  *(uint *)(unaff_RDI + (longlong)param_2) = uVar1 + in_CF;
  iRam00000001604c394f = iRam00000001604c394f + 0x1004b26 + (uint)CARRY4(uVar1,(uint)in_CF);
  cRam0000000142ab2c45 = cRam0000000142ab2c45 + '&';
  cRam0000000001004b26 = cRam0000000001004b26 + '&';
  *param_2 = *param_2 & unaff_ESI;
  cRam00000001484b47e1 = cRam00000001484b47e1 + (char)param_2;
  pcVar2 = (char *)((ulonglong)(((uint)CONCAT71(0x10000,cRam0000000001004b26) | 0x26) + 0xe13be100)
                   ^ 0x25);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RDI - (char)param_2;
  unaff_RDI[0x78001728] = unaff_RDI[0x78001728] + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

