// Function: FUN_1404d2ae4
// Addr: 1404d2ae4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d2b1e) overlaps instruction at (ram,0x0001404d2b1d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d2aef) */
/* WARNING: Removing unreachable block (ram,0x0001404d2b2d) */

void FUN_1404d2ae4(int param_1,longlong param_2,char param_3,char *param_4)

{
  byte bVar1;
  byte *in_RAX;
  uint uVar2;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char unaff_R12B;
  char *pcVar3;
  
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) & unaff_EBX;
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar1;
  LocalDescriptorTableRegister(*(undefined2 *)CONCAT44(unaff_00000034,unaff_ESI));
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + bVar1;
  *param_4 = *param_4 + unaff_R12B;
  *in_RAX = *in_RAX + bVar1;
  in_RAX[-0x1dffc624] = in_RAX[-0x1dffc624] + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + bVar1;
  *param_4 = *param_4 + param_3;
  uVar2 = param_1 - *(int *)CONCAT44(unaff_0000001c,unaff_EBX);
  pcVar3 = (char *)(ulonglong)uVar2;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)(uVar2 >> 8);
  if (-1 < *(char *)CONCAT44(unaff_0000001c,unaff_EBX)) {
    *pcVar3 = *pcVar3 + (char)((ulonglong)in_RAX >> 8);
    uRamfffffffffffffff8 = 0xffffffffa20d0004;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)in_RAX | 0x7f009a2;
  if (pcVar3 == (char *)0x1 || uVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *(int *)(unaff_RBP + 0x10) = *(int *)(unaff_RBP + 0x10) + uVar2;
  *(char *)(unaff_RBP + -0x68) = *(char *)(unaff_RBP + -0x68) + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

