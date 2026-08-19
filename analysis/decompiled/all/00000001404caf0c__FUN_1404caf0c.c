// Function: FUN_1404caf0c
// Addr: 1404caf0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404caf75) */
/* WARNING: Removing unreachable block (ram,0x0001404caf85) */
/* WARNING: Removing unreachable block (ram,0x0001404caf8a) */
/* WARNING: Removing unreachable block (ram,0x0001404caff5) */

void FUN_1404caf0c(int param_1,longlong param_2)

{
  uint uVar1;
  uint *in_RAX;
  uint *puVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  
  *(byte *)((longlong)in_RAX + param_2) =
       *(byte *)((longlong)in_RAX + param_2) | (byte)((ulonglong)param_2 >> 8);
  *(char *)((longlong)in_RAX + 0x5f) = *(char *)((longlong)in_RAX + 0x5f) + (char)param_2;
  uVar1 = (uint)in_RAX ^ *in_RAX;
  uVar1 = uVar1 ^ *(uint *)(ulonglong)uVar1;
  puVar2 = (uint *)(ulonglong)uVar1;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) - param_1;
  *puVar2 = *puVar2 & uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  uVar1 = uVar1 ^ *puVar2 ^ *(uint *)(ulonglong)(uVar1 ^ *puVar2);
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) - param_1;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

