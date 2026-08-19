// Function: FUN_1404baca8
// Addr: 1404baca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baca8(undefined4 *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RBP;
  bool in_PF;
  
  if (!in_PF) {
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  }
  SegmentLimit(*param_1);
  pcVar1 = (char *)(unaff_RBX + 0x2521004b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

