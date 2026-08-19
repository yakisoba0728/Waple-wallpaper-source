// Function: FUN_1404d6874
// Addr: 1404d6874
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6874(undefined8 param_1,char param_2,char param_3,longlong param_4)

{
  char *unaff_RBX;
  longlong in_FS_OFFSET;
  
  *(char *)(in_FS_OFFSET + param_4) = *(char *)(in_FS_OFFSET + param_4) + param_3;
  *unaff_RBX = *unaff_RBX + param_2;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

