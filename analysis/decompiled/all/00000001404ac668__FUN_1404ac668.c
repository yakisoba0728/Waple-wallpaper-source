// Function: FUN_1404ac668
// Addr: 1404ac668
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac668(undefined1 *param_1)

{
  int in_EAX;
  uint uVar1;
  uint *puVar2;
  undefined4 unaff_EDI;
  
  uVar1 = in_EAX + 0x70000834;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1 + (uVar1 < 0x3d890010);
  *param_1 = *param_1;
  uVar1 = in_EAX + 0xc4050836;
  puVar2 = (uint *)(ulonglong)uVar1;
  *puVar2 = *puVar2 | uVar1;
  uRam000000017dddc696 = unaff_EDI;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

