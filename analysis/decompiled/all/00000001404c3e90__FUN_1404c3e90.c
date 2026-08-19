// Function: FUN_1404c3e90
// Addr: 1404c3e90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3e90(undefined8 param_1,char param_2)

{
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  
  iRam00000001b4733ea2 = (iRam00000001b4733ea2 - unaff_ESI) - (uint)in_CF;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

