// Function: FUN_1404a1004
// Addr: 1404a1004
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a101e) overlaps instruction at (ram,0x0001404a101a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a0fbf) */

void FUN_1404a1004(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  byte *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined2 in_DS;
  
  uVar1 = *(undefined4 *)(unaff_RBX + 0xb080003);
  *param_1 = *param_1;
  *in_RAX = *in_RAX - (char)param_1;
  *in_RAX = *in_RAX + (char)unaff_RBX + (char)uVar1;
  if (*in_RAX == 0) {
    *in_RAX = *in_RAX | (byte)in_RAX;
  }
  else {
    in_RAX = (byte *)(ulonglong)((uint)in_RAX | 0x8e40434);
    in_RAX[-99] = in_RAX[-99] + (char)((ulonglong)param_2 >> 8);
  }
  uVar1 = *(undefined4 *)in_RAX;
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4;
  (&stack0x00000000)[unaff_RSI * 8] =
       (&stack0x00000000)[unaff_RSI * 8] + (char)in_RAX + (char)uVar1 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

