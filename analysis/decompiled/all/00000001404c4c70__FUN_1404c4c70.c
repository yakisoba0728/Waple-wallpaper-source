// Function: FUN_1404c4c70
// Addr: 1404c4c70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4c89) overlaps instruction at (ram,0x0001404c4c88)
    */

void FUN_1404c4c70(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint in_EAX;
  byte bVar2;
  uint *puVar3;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  *(char *)(unaff_RBP + -0x190fffd5) = *(char *)(unaff_RBP + -0x190fffd5) << 1;
  *param_1 = *param_1 + (char)in_EAX;
  *param_2 = *param_2 | in_EAX;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  puVar3 = (uint *)(ulonglong)
                   CONCAT31((int3)(in_EAX >> 8),
                            (char)in_EAX + *(char *)(((ulonglong)param_2 & 0xffffffff) + 1));
  *puVar3 = *puVar3 | (uint)param_2;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  if (!CARRY1(bVar1,bVar2)) {
    *unaff_RDI = *unaff_RDI + (int)param_1;
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

