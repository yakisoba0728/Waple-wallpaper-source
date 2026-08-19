// Function: FUN_1404a7f60
// Addr: 1404a7f60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7f60(char *param_1,char *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_BH;
  int *piVar3;
  char *pcVar4;
  
  *(uint *)(&stack0x00000000 + (longlong)param_1) =
       *(uint *)(&stack0x00000000 + (longlong)param_1) & (uint)param_2;
  uVar1 = in(1);
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  param_2[-0x3c] = param_2[-0x3c] + (char)param_1;
  if ((int)piVar3 + *piVar3 != 0) {
    *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001454a86cd = cRam00000001454a86cd + (char)param_1;
  param_1[-0x3ffff51b] = param_1[-0x3ffff51b] + (char)param_2;
  uVar2 = in(10);
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar4[0x7e] = pcVar4[0x7e] + unaff_BH;
  *param_1 = *param_1 + (char)&stack0xfffffffffffffff8;
  *param_2 = *param_2 + (char)uVar2;
  *pcVar4 = *pcVar4 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

