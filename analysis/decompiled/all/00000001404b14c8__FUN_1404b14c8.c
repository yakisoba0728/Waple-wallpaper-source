// Function: FUN_1404b14c8
// Addr: 1404b14c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b14c8(void)

{
  uint in_EAX;
  byte *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RDI << 7 |
               (byte)(CONCAT11(in_EAX < 0x19e01bf0 || in_EAX + 0xe61fe410 < (uint)in_CF,*unaff_RDI)
                     >> 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

