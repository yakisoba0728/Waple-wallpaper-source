// Function: FUN_14049fe30
// Addr: 14049fe30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fe30(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  byte *unaff_RDI;
  
  *param_4 = *param_4 + (char)in_EAX;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + param_1;
  if (!CARRY1(bVar1,param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001b44efe50 = uRam00000001b44efe50 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

