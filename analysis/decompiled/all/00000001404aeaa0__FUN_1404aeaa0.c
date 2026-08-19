// Function: FUN_1404aeaa0
// Addr: 1404aeaa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aeaa0(char param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong in_RAX;
  longlong unaff_RBX;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  param_2[in_RAX] = param_2[in_RAX] + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x6c) = *(char *)(in_RAX + 0x6c) + (char)param_2;
  puVar1 = (uint *)(param_2 + unaff_RBX);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 0x38;
  *param_2 = *param_2 + param_1 + (uVar2 < 0xffffffc8);
  *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

