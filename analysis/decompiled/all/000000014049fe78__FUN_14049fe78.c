// Function: FUN_14049fe78
// Addr: 14049fe78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049fe87) overlaps instruction at (ram,0x00014049fe86)
    */

void FUN_14049fe78(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *in_RAX;
  uint *puVar1;
  longlong unaff_RBX;
  char unaff_SPL;
  bool in_CF;
  
  if (in_CF) {
    puVar1 = (uint *)((ulonglong)(uint)((int)in_RAX + *in_RAX) ^ 0xe6);
    *param_4 = *param_4 + unaff_SPL;
    *(char *)puVar1 = (char)*puVar1 + (char)puVar1;
    *(char *)((longlong)puVar1 + 0xd) = *(char *)((longlong)puVar1 + 0xd) + (char)param_2;
    in_RAX = (int *)(ulonglong)((uint)puVar1 + *puVar1);
    if (!CARRY4((uint)puVar1,*puVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)(unaff_RBX + 0xd) = *(char *)(unaff_RBX + 0xd) + (char)((ulonglong)param_2 >> 8);
  }
  *param_4 = *param_4 + ((char)in_RAX + (char)*in_RAX ^ 0xe6U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

