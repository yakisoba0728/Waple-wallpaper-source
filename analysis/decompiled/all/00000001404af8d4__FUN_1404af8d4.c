// Function: FUN_1404af8d4
// Addr: 1404af8d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af8ec) overlaps instruction at (ram,0x0001404af8eb)
    */

void FUN_1404af8d4(uint *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *in_RAX;
  char cVar4;
  byte bVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  cVar4 = (char)((ulonglong)param_1 >> 8);
  if (in_CF || in_ZF) {
    pbVar1 = (byte *)(unaff_RDI + -0x7c);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar5;
    bVar3 = (char)in_RAX + CARRY1(bVar3,bVar5);
    in_RAX = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
    unaff_BH = unaff_BH << 1;
    *(byte *)param_1 = (byte)*param_1 + bVar3;
    *in_RAX = *in_RAX | bVar3;
    *in_RAX = bVar3;
    *(byte *)param_1 = (byte)*param_1 + cVar4;
    if ((char)(byte)*param_1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_RSI = *unaff_RSI + (char)param_2;
  bVar3 = *in_RAX;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_1;
  iVar2 = ((uint)in_RAX | *param_1) + 0xfd0ffc00;
  *(byte *)param_1 = (byte)*param_1 ^ (byte)((uint)iVar2 >> 8);
  *(undefined1 *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar5 + bVar3,(char)param_2))
       = param_4;
  *(char *)(unaff_RBP + 0x78) = *(char *)(unaff_RBP + 0x78) + (char)iVar2;
  in(0x1a);
  cRam00000001654b14ed = cRam00000001654b14ed + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

