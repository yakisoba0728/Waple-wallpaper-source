// Function: FUN_1404bf9f0
// Addr: 1404bf9f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf9f0(undefined8 param_1,undefined4 param_2)

{
  uint in_EAX;
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  *(int *)unaff_RDI =
       *(int *)unaff_RDI +
       CONCAT22((short)((uint)param_2 >> 0x10),
                CONCAT11((char)((uint)param_2 >> 8) + *(char *)(ulonglong)(in_EAX | 0x9e00bf0),
                         (char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

