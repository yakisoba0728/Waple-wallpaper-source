// Function: FUN_1404d0954
// Addr: 1404d0954
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0954(byte param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong in_RAX;
  byte *unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  bool bVar6;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  byte *pbVar5;
  
  *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI);
  *(char *)(in_RAX + -0x56fb25f0) = *(char *)(in_RAX + -0x56fb25f0) + (char)in_RAX;
  iVar4 = (int)in_RAX + 0x15042e06;
  bVar2 = (byte)iVar4;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) | bVar2;
  iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),bVar2 + 0x3d) +
          *(int *)CONCAT44(unaff_00000034,unaff_ESI);
  bVar3 = (char)iVar4 - 0x2c;
  uVar1 = CONCAT31((int3)((uint)iVar4 >> 8),bVar3);
  pbVar5 = (byte *)(ulonglong)uVar1;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  bVar6 = uRam000000018262097f < param_2;
  param_2 = uRam000000018262097f - param_2;
  uRam000000018262097f = param_2 - CARRY1(bVar2,bVar3);
  pavgb(in_MM1_Ba,(char)uRam000000014a0d154f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0d154f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0d154f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0d154f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0d154f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0d154f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0d154f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0d154f >> 0x38));
  if (SCARRY4(uVar1,unaff_ESI) ==
      SCARRY4(uVar1 + unaff_ESI,(uint)(bVar6 || param_2 < CARRY1(bVar2,bVar3)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = *unaff_RBP | param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

