// Function: FUN_1404caf1c
// Addr: 1404caf1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404caf85) */
/* WARNING: Removing unreachable block (ram,0x0001404caf8a) */
/* WARNING: Removing unreachable block (ram,0x0001404caff5) */

void FUN_1404caf1c(int param_1)

{
  uint uVar1;
  uint *in_RAX;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = (uint)in_RAX ^ *in_RAX;
  uVar1 = uVar1 ^ *(uint *)(ulonglong)uVar1;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) - param_1;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

