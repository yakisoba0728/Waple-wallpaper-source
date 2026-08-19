// Function: FUN_1404a9ecc
// Addr: 1404a9ecc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9ecc(char *param_1,byte *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  longlong lVar5;
  byte bVar8;
  byte *unaff_RBX;
  char cVar9;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  int *unaff_RDI;
  uint *puStack_8;
  char *pcVar6;
  byte bVar7;
  
  bVar8 = (byte)param_2;
  puStack_8 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam1300081301004a9d) ^ 0xf);
  bVar7 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX + bVar8;
  if (!CARRY1(bVar7,bVar8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar8;
  *unaff_RDI = *unaff_RDI + unaff_EBP;
  *param_2 = *param_2 ^ (byte)puStack_8;
  *puStack_8 = *puStack_8 & (uint)param_1;
  bVar7 = (byte)((ulonglong)in_RAX >> 8) | bVar8;
  lVar5 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11(bVar7,(byte)puStack_8 + (char)*puStack_8));
  pcVar1 = (char *)(lVar5 + 0x7b);
  *pcVar1 = *pcVar1 + bVar7;
  pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
  *pcVar1 = *pcVar1 + bVar8;
  cVar9 = (char)&puStack_8;
  *param_1 = *param_1 + cVar9;
  uVar4 = (uint)lVar5 & 0xffffff06 | 0xd7c4500;
  *(char *)(&puStack_8 + unaff_RSI) = *(char *)(&puStack_8 + unaff_RSI) + (char)(uVar4 >> 8);
  cVar2 = in(0x2d);
  uVar4 = CONCAT31((int3)(uVar4 + 0x80034c4 >> 8),cVar2);
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x7c);
  *pcVar1 = *pcVar1 + cVar2;
  uVar3 = uVar4 | 0xd7c8700;
  pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar9;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar2;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x7c);
  *pcVar1 = *pcVar1 + cVar2;
  uVar4 = uVar4 | 0xd7c8700;
  pcVar6 = (char *)(ulonglong)uVar4;
  pcVar1 = (char *)(unaff_RSI + (longlong)unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar9;
  *pcVar6 = *pcVar6 + (char)param_1;
  *pcVar6 = *pcVar6 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

