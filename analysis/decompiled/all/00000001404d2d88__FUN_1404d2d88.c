// Function: FUN_1404d2d88
// Addr: 1404d2d88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  char unaff_SPL;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),0x13);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + '\x13';
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + -0x2b);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

