// Function: FUN_1404bcf84
// Addr: 1404bcf84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bcfa3) */

void FUN_1404bcf84(undefined8 param_1,char param_2)

{
  undefined4 in_EAX;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_2;
  if (*unaff_RDI == '\0') {
    unaff_RDI[-0x68] = unaff_RDI[-0x68] + ((byte)((uint)in_EAX >> 8) & 0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

