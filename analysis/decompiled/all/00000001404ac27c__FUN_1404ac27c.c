// Function: FUN_1404ac27c
// Addr: 1404ac27c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ac28e) overlaps instruction at (ram,0x0001404ac289)
    */

void FUN_1404ac27c(uint param_1)

{
  byte bVar1;
  longlong in_RAX;
  int iVar2;
  byte *pbVar3;
  char unaff_BL;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  bool bVar4;
  
  iVar2 = param_1 - *(uint *)(in_RAX + 0x7826001b);
  bVar1 = *(byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),
                             (char)in_RAX - (param_1 < *(uint *)(in_RAX + 0x7826001b))) + 0x1d);
  *unaff_RSI = *unaff_RSI + unaff_BL;
  bVar4 = CARRY4(uRam00000001563ad98f,unaff_EDI);
  uRam00000001563ad98f = uRam00000001563ad98f + unaff_EDI;
  pbVar3 = (byte *)((ulonglong)
                    CONCAT22((short)((uint)iVar2 >> 0x10),
                             CONCAT11((byte)((uint)iVar2 >> 8) & bVar1,(char)iVar2)) - 1);
  if (pbVar3 != (byte *)0x0 && uRam00000001563ad98f != 0) {
    if (uRam00000001563ad98f == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar3 = *pbVar3 << 1 | bVar4;
  }
  *(undefined1 *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(undefined1 *)CONCAT44(unaff_0000003c,unaff_EDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

