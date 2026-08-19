// Function: FUN_1404d09bc
// Addr: 1404d09bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d09da) overlaps instruction at (ram,0x0001404d09d9)
    */

void FUN_1404d09bc(longlong param_1,char param_2,byte *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  uint uVar5;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  uint *unaff_RBP;
  byte *unaff_RSI;
  char *in_R10;
  byte unaff_R13B;
  bool bVar7;
  uint *puVar4;
  int *piVar6;
  
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar2;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  bVar7 = CARRY4(uRam00000001416a09d0,unaff_EBX);
  uVar3 = uRam00000001416a09d0 + unaff_EBX;
  uRam00000001416a09d0 = uVar3 + CARRY1(bVar1,bVar2);
  uVar3 = (int)in_RAX + 0xff01100 + (uint)(bVar7 || CARRY4(uVar3,(uint)CARRY1(bVar1,bVar2)));
  puVar4 = (uint *)(ulonglong)uVar3;
  piVar6 = (int *)(param_1 + -1);
  uVar5 = (uint)piVar6;
  if (piVar6 == (int *)0x0 || uVar3 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *(char *)piVar6 = *(char *)piVar6;
    *(byte *)((longlong)puVar4 + 7) = *(byte *)((longlong)puVar4 + 7) | (byte)(uVar3 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar3;
    *(char *)puVar4 = (char)*puVar4 + param_2;
    *unaff_RBP = *unaff_RBP | uVar5;
    *(char *)piVar6 = *(char *)piVar6 - (char)unaff_EBX;
    *unaff_RBP = *unaff_RBP | uVar5;
  }
  else {
    *(char *)piVar6 = *(char *)piVar6 + (char)piVar6 + (uVar3 < *puVar4);
    bVar1 = *param_3;
    *param_3 = *param_3 + unaff_R13B;
    *piVar6 = (*piVar6 - uVar5) - (uint)CARRY1(bVar1,unaff_R13B);
    *(char *)(param_4 + (longlong)piVar6) = *(char *)(param_4 + (longlong)piVar6) + unaff_R13B;
  }
  *in_R10 = *in_R10 + (char)param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

