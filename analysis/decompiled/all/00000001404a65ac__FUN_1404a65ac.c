// Function: FUN_1404a65ac
// Addr: 1404a65ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a65ac(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar7;
  uint uVar8;
  uint *in_RAX;
  char unaff_BL;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint uVar6;
  
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  *in_RAX = *in_RAX | (uint)in_RAX;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar1 = *param_1;
  bVar4 = (byte)((ulonglong)in_RAX ^ 0x12);
  *param_1 = *param_1 + bVar4;
  uVar3 = (uint)CARRY1(bVar1,bVar4);
  uVar6 = (uint)((ulonglong)in_RAX ^ 0x12);
  uVar8 = uVar6 + 0xfee2fff6;
  uVar5 = uVar8 - uVar3;
  uVar3 = (uint)(uVar6 < 0x11d000a || uVar8 < uVar3);
  uVar8 = uVar5 + *(uint *)(ulonglong)uVar5;
  iVar7 = uVar8 + uVar3;
  uVar3 = (uint)(CARRY4(uVar5,*(uint *)(ulonglong)uVar5) || CARRY4(uVar8,uVar3));
  iVar2 = iVar7 + unaff_ESI;
  uVar8 = iVar2 + uVar3;
  pavgb(in_MM1_Ba,(char)uRam000000014a0a7199);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a7199 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a7199 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a7199 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a7199 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a7199 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a7199 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a7199 >> 0x38));
  if (SCARRY4(iVar7,unaff_ESI) == SCARRY4(iVar2,uVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_BL;
  *(int *)unaff_RDI = *(int *)unaff_RDI + param_2;
  cRam000000014a2a71cd = cRam000000014a2a71cd + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  param_1[CONCAT31((int3)(uVar8 >> 8),
                   ((char)uVar8 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar8 + 1)))] =
       param_1[CONCAT31((int3)(uVar8 >> 8),
                        ((char)uVar8 + -10) - CARRY1((byte)param_2,*(byte *)((ulonglong)uVar8 + 1)))
              ] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

