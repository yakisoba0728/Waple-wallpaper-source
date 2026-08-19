// Function: FUN_1404c5a48
// Addr: 1404c5a48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5a48(char *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  char unaff_BL;
  char in_R11B;
  char in_CF;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),((char)in_EAX + '7') - in_CF);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + 0x59);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + in_R11B;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) - (char)param_1;
  *param_2 = *param_2 + unaff_BL;
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

