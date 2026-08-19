// Function: FUN_1404a91fc
// Addr: 1404a91fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a9232) */

void FUN_1404a91fc(undefined1 *param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  char *unaff_RBX;
  int *unaff_RSI;
  longlong in_FS_OFFSET;
  
  *param_1 = *param_1;
  uVar2 = (int)&stack0x00000000 + *unaff_RSI;
  *unaff_RBX = *unaff_RBX + param_2;
  puVar1 = (uint *)(in_FS_OFFSET + (ulonglong)uVar2);
  *puVar1 = *puVar1 | uVar2;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

