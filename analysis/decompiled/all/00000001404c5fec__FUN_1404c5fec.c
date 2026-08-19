// Function: FUN_1404c5fec
// Addr: 1404c5fec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5fec(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x21004c5e);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

