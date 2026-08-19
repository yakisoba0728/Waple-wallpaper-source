// Function: FUN_1404aa238
// Addr: 1404aa238
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aa310) overlaps instruction at (ram,0x0001404aa30e)
    */
/* WARNING: Removing unreachable block (ram,0x0001404aa2f2) */
/* WARNING: Removing unreachable block (ram,0x0001404aa30c) */
/* WARNING: Removing unreachable block (ram,0x0001404aa2ef) */
/* WARNING: Removing unreachable block (ram,0x0001404aa2f3) */
/* WARNING: Removing unreachable block (ram,0x0001404aa300) */
/* WARNING: Removing unreachable block (ram,0x0001404aa31c) */
/* WARNING: Removing unreachable block (ram,0x0001404aa30f) */
/* WARNING: Removing unreachable block (ram,0x0001404aa320) */
/* WARNING: Removing unreachable block (ram,0x0001404aa2ff) */
/* WARNING: Removing unreachable block (ram,0x0001404aa310) */
/* WARNING: Removing unreachable block (ram,0x0001404aa303) */
/* WARNING: Removing unreachable block (ram,0x0001404aa30e) */
/* WARNING: Removing unreachable block (ram,0x0001404aa313) */
/* WARNING: Removing unreachable block (ram,0x0001404aa31f) */

void FUN_1404aa238(byte *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  byte bVar5;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint *puVar4;
  
  *param_2 = *param_2 & (uint)param_1;
  bVar5 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(unaff_RDI + in_RAX);
  uVar3 = (int)in_RAX + 0xb0000664;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(byte *)puVar4 = (byte)*puVar4 + bVar5;
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (byte)uVar3;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  *(byte *)((longlong)puVar4 + -0x34fff226) = *(byte *)((longlong)puVar4 + -0x34fff226) + bVar5;
  bVar5 = *param_1;
  *param_1 = *param_1 + bVar2;
  *(byte *)puVar4 = (byte)*puVar4 + (char)param_1 + CARRY1(bVar5,bVar2);
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + (byte)param_2;
  if (CARRY1((byte)uVar1,(byte)param_2)) {
    *param_1 = *param_1 ^ bVar2;
    if ((char)*param_1 < '\0') {
      *(char *)(unaff_RBP + -0x3c) = *(char *)(unaff_RBP + -0x3c) + unaff_BH;
      *puVar4 = *puVar4 | uVar3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

