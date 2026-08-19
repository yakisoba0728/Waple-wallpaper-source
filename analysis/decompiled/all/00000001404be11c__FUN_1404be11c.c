// Function: FUN_1404be11c
// Addr: 1404be11c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be11c(undefined8 param_1,char param_2)

{
  int in_EAX;
  undefined1 *puVar1;
  longlong unaff_RBP;
  uint *unaff_RDI;
  
  *unaff_RDI = in_EAX + 0x40000a74U;
  puVar1 = (undefined1 *)(ulonglong)(in_EAX + 0x40000a74U & 0x25ab4800);
  puVar1[unaff_RBP + 0x2221004b] = puVar1[unaff_RBP + 0x2221004b] + param_2;
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

