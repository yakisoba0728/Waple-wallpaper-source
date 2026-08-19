// Function: FUN_1404cdafc
// Addr: 1404cdafc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdafc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  char unaff_R12B;
  
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,(char)param_2)) +
                   unaff_RBX * 8);
  *pcVar1 = *pcVar1 + '+';
  *(char *)(in_RAX + 0x39) = *(char *)(in_RAX + 0x39) + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

