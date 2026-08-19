// Function: FUN_1404af8cc
// Addr: 1404af8cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af8ec) overlaps instruction at (ram,0x0001404af8eb)
    */

void FUN_1404af8cc(uint *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char *in_RAX;
  undefined7 uVar7;
  byte bVar8;
  char cVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *pbVar6;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  bVar8 = (byte)param_1;
  *(byte *)param_1 = (byte)*param_1;
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar3;
  pbVar6 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 1,unaff_BL)) + 0x77);
  bVar5 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar8;
  bVar1 = CARRY1(bVar3,CARRY1(bVar5,bVar8));
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = bVar3 + CARRY1(bVar5,bVar8);
  if (!bVar1 && cVar4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = cVar4 + bVar1;
  pbVar6 = (byte *)CONCAT71(uVar7,bVar5);
  *(byte *)param_1 = (byte)*param_1 + bVar5;
  *pbVar6 = *pbVar6 | bVar5;
  *pbVar6 = bVar5;
  *(byte *)param_1 = (byte)*param_1 + cVar9;
  if (-1 < (char)(byte)*param_1) {
    *unaff_RSI = *unaff_RSI + (char)param_2;
    bVar3 = *pbVar6;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 2,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 2,unaff_BL)) + (int)param_1;
    iVar2 = ((uint)CONCAT71(uVar7,bVar5) | *param_1) + 0xfd0ffc00;
    *(byte *)param_1 = (byte)*param_1 ^ (byte)((uint)iVar2 >> 8);
    *(undefined1 *)
     CONCAT62((int6)((ulonglong)param_2 >> 0x10),
              CONCAT11((char)((ulonglong)param_2 >> 8) + bVar3,(char)param_2)) = param_4;
    *(char *)(unaff_RBP + 0x78) = *(char *)(unaff_RBP + 0x78) + (char)iVar2;
    in(0x1a);
    cRam00000001654b14ed = cRam00000001654b14ed + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

