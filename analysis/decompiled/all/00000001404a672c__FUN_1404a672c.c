// Function: FUN_1404a672c
// Addr: 1404a672c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a672c(char *param_1)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  
  *(undefined4 *)param_1 = *(undefined4 *)param_1;
  *(int *)(unaff_RBX + 0x65f40009) = *(int *)(unaff_RBX + 0x65f40009) + 0x4a;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

