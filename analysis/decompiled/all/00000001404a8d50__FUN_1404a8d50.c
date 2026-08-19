// Function: FUN_1404a8d50
// Addr: 1404a8d50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8d50(uint param_1,undefined8 param_2)

{
  char cVar1;
  uint *in_RAX;
  uint *puVar2;
  char *unaff_RDI;
  
  *in_RAX = *in_RAX & param_1;
  cVar1 = (char)in_RAX + (char)*in_RAX;
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                     (byte)((ulonglong)param_2 >> 8),cVar1));
  *unaff_RDI = *unaff_RDI + (cVar1 - (char)*puVar2) + ((uint)puVar2 < *puVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

