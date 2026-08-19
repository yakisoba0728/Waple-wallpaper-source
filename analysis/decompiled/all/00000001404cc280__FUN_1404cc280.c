// Function: FUN_1404cc280
// Addr: 1404cc280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cc2a1) overlaps instruction at (ram,0x0001404cc29e)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cc2a1) */
/* WARNING: Removing unreachable block (ram,0x0001404cc2ac) */

void FUN_1404cc280(undefined8 param_1,char param_2)

{
  uint *in_RAX;
  char *pcVar1;
  longlong unaff_RBP;
  undefined1 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + 'L');
  *pcVar1 = *pcVar1 + '\x16';
  *(char *)(unaff_RBP + 0x11000d64) = *(char *)(unaff_RBP + 0x11000d64) + '\x16';
  *pcVar1 = *pcVar1 + param_2;
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

